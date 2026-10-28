var CACHE_NAME = "welle-cli-shell-v25";
var SHELL_PATHS = ["/player.html", "/manifest.webmanifest", "/welle-icon.png"];

self.addEventListener("install", function(event) {
    event.waitUntil(
        caches.open(CACHE_NAME).then(function(cache) {
            return cache.addAll(SHELL_PATHS);
        }).then(function() {
            return self.skipWaiting();
        })
    );
});

self.addEventListener("activate", function(event) {
    event.waitUntil(
        caches.keys().then(function(cacheNames) {
            return Promise.all(cacheNames.map(function(cacheName) {
                if (cacheName.indexOf("welle-cli-shell-") === 0 && cacheName !== CACHE_NAME) {
                    return caches.delete(cacheName);
                }
            }));
        }).then(function() {
            return self.clients.claim();
        })
    );
});

self.addEventListener("fetch", function(event) {
    var requestUrl = new URL(event.request.url);
    if (event.request.method !== "GET" ||
        requestUrl.origin !== self.location.origin ||
        SHELL_PATHS.indexOf(requestUrl.pathname) === -1) {
        return;
    }

    event.respondWith(
        caches.match(event.request, { ignoreSearch: true }).then(function(cachedResponse) {
            return cachedResponse || fetch(event.request).then(function(response) {
                if (response.ok) {
                    var responseCopy = response.clone();
                    caches.open(CACHE_NAME).then(function(cache) {
                        cache.put(event.request, responseCopy);
                    });
                }
                return response;
            });
        })
    );
});
