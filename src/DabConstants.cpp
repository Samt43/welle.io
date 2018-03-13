/*
 *    Copyright (C) 2017
 *    Albrecht Lohofener (albrechtloh@gmx.de)
 *
 *    This file is part of the welle.io.
 *    Many of the ideas as implemented in welle.io are derived from
 *    other work, made available through the GNU general Public License.
 *    All copyrights of the original authors are recognized.
 *
 *    welle.io is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    welle.io is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with welle.io; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#include <iostream>
#include "DabConstants.h"

const char* CDABConstants::getProgramTypeName(int type)
{
    const char* typeName = "";
    switch(type) {
        case 0: typeName = ""; break;
        case 1: typeName = "News"; break;
        case 2: typeName = "Current Affairs"; break;
        case 3: typeName = "Information"; break;
        case 4: typeName = "Sport"; break;
        case 5: typeName = "Education"; break;
        case 6: typeName = "Drama"; break;
        case 7: typeName = "Arts"; break;
        case 8: typeName = "Science"; break;
        case 9: typeName = "Talk"; break;
        case 10: typeName = "Pop Music"; break;
        case 11: typeName = "Rock Music"; break;
        case 12: typeName = "Easy Listening"; break;
        case 13: typeName = "Light classical"; break;
        case 14: typeName = "Classical Music"; break;
        case 15: typeName = "Other Music"; break;
        case 16: typeName = "Weather"; break;
        case 17: typeName = "Finance"; break;
        case 18: typeName = "Children\'s"; break;
        case 19: typeName = "Factual"; break;
        case 20: typeName = "Religion"; break;
        case 21: typeName = "Phone In"; break;
        case 22: typeName = "Travel"; break;
        case 23: typeName = "Leisure"; break;
        case 24: typeName = "Jazz and Blues"; break;
        case 25: typeName = "Country Music"; break;
        case 26: typeName = "National Music"; break;
        case 27: typeName = "Oldies Music"; break;
        case 28: typeName = "Folk Music"; break;
        case 29: typeName = "entry 29 not used"; break;
        case 30: typeName = "entry 30 not used"; break;
        case 31: typeName = "entry 31 not used"; break;
        default: std::clog << "DABConstants:"
                 << "Unknown program type" << std::endl;
    }

    return typeName;
}

const char* CDABConstants::getLanguageName(int language)
{
    const char* languageName = "";

    switch (language) {
        case 0: languageName = ""; break;
        case 1: languageName = "Albanian"; break;
        case 2: languageName = "Breton"; break;
        case 3: languageName = "Catalan"; break;
        case 4: languageName = "Croatian"; break;
        case 5: languageName = "Welsh"; break;
        case 6: languageName = "Czech"; break;
        case 7: languageName = "Danish"; break;
        case 8: languageName = "German"; break;
        case 9: languageName = "English"; break;
        case 10: languageName = "Spanish"; break;
        case 11: languageName = "Esperanto"; break;
        case 12: languageName = "Estonian"; break;
        case 13: languageName = "Basque"; break;
        case 14: languageName = "Faroese"; break;
        case 15: languageName = "French"; break;
        case 16: languageName = "Frisian"; break;
        case 17: languageName = "Irish"; break;
        case 18: languageName = "Gaelic"; break;
        case 19: languageName = "Galician"; break;
        case 20: languageName = "Icelandic"; break;
        case 21: languageName = "Italian"; break;
        case 22: languageName = "Lappish"; break;
        case 23: languageName = "Latin"; break;
        case 24: languageName = "Latvian"; break;
        case 25: languageName = "Luxembourgian"; break;
        case 26: languageName = "Lithuanian"; break;
        case 27: languageName = "Hungarian"; break;
        case 28: languageName = "Maltese"; break;
        case 29: languageName = "Dutch"; break;
        case 30: languageName = "Norwegian"; break;
        case 31: languageName = "Occitan"; break;
        case 32: languageName = "Polish"; break;
        case 33: languageName = "Portuguese"; break;
        case 34: languageName = "Romanian"; break;
        case 35: languageName = "Romansh"; break;
        case 36: languageName = "Serbian"; break;
        case 37: languageName = "Slovak"; break;
        case 38: languageName = "Slovene"; break;
        case 39: languageName = "Finnish"; break;
        case 40: languageName = "Swedish"; break;
        case 41: languageName = "Turkish"; break;
        case 42: languageName = "Flemish"; break;
        case 43: languageName = "Walloon"; break;
        case 64: languageName = "Background sound/clean feed"; break;
        case 69: languageName = "Zulu"; break;
        case 70: languageName = "Vietnamese"; break;
        case 71: languageName = "Uzbek"; break;
        case 72: languageName = "Urdu"; break;
        case 73: languageName = "Ukranian"; break;
        case 74: languageName = "Thai"; break;
        case 75: languageName = "Telugu"; break;
        case 76: languageName = "Tatar"; break;
        case 77: languageName = "Tamil"; break;
        case 78: languageName = "Tadzhik"; break;
        case 79: languageName = "Swahili"; break;
        case 80: languageName = "Sranan Tongo"; break;
        case 81: languageName = "Somali"; break;
        case 82: languageName = "Sinhalese"; break;
        case 83: languageName = "Shona"; break;
        case 84: languageName = "Serbo-Croat"; break;
        case 85: languageName = "Rusyn"; break;
        case 86: languageName = "Russian"; break;
        case 87: languageName = "Quechua"; break;
        case 88: languageName = "Pushtu"; break;
        case 89: languageName = "Punjabi"; break;
        case 90: languageName = "Persian"; break;
        case 91: languageName = "Papiamento"; break;
        case 92: languageName = "Oriya"; break;
        case 93: languageName = "Nepali"; break;
        case 94: languageName = "Ndebele"; break;
        case 95: languageName = "Marathi"; break;
        case 96: languageName = "Moldavian"; break;
        case 97: languageName = "Malaysian"; break;
        case 98: languageName = "Malagasay"; break;
        case 99: languageName = "Macedonian"; break;
        case 100: languageName = "Laotian"; break;
        case 101: languageName = "Korean"; break;
        case 102: languageName = "Khmer"; break;
        case 103: languageName = "Kazakh"; break;
        case 104: languageName = "Kannada"; break;
        case 105: languageName = "Japanese"; break;
        case 106: languageName = "Indonesian"; break;
        case 107: languageName = "Hindi"; break;
        case 108: languageName = "Hebrew"; break;
        case 109: languageName = "Hausa"; break;
        case 110: languageName = "Gurani"; break;
        case 111: languageName = "Gujurati"; break;
        case 112: languageName = "Greek"; break;
        case 113: languageName = "Georgian"; break;
        case 114: languageName = "Fulani"; break;
        case 115: languageName = "Dari"; break;
        case 116: languageName = "Chuvash"; break;
        case 117: languageName = "Chinese"; break;
        case 118: languageName = "Burmese"; break;
        case 119: languageName = "Bulgarian"; break;
        case 120: languageName = "Bengali"; break;
        case 121: languageName = "Belorussian"; break;
        case 122: languageName = "Bambora"; break;
        case 123: languageName = "Azerbaijani"; break;
        case 124: languageName = "Assamese"; break;
        case 125: languageName = "Armenian"; break;
        case 126: languageName = "Arabic"; break;
        case 127: languageName = "Amharic"; break;
        default: std::clog << "DABConstants:"
                 << "Unknown language type: " << language << std::endl;
    }

    return languageName;
}


CDABParams::CDABParams()
{
    setMode(1);
}

CDABParams::CDABParams(int mode)
{
    setMode(mode);
}

void CDABParams::setMode(int mode)
{
    switch(mode)
    {
    case 1: setMode1(); break;
    case 2: setMode2(); break;
    case 3: setMode3(); break;
    case 4: setMode4(); break;
    default: std::clog << "DABConstants:"
                      << "Unknown mode" << std::endl;
    }
}

void CDABParams::setMode1()
{
    dabMode = 1;
    L = 76;
    K = 1536;
    T_F = 196608;
    T_null = 2656;
    T_s = 2552;
    T_u = 2048;
    guardLength = 504;
    carrierDiff = 1000;
}


void CDABParams::setMode2()
{
    dabMode = 2;
    L = 76;
    K = 384;
    T_null = 664;
    T_F = 49152;
    T_s = 638;
    T_u = 512;
    guardLength = 126;
    carrierDiff = 4000;
}


void CDABParams::setMode3()
{
    dabMode = 3;
    L = 153;
    K = 192;
    T_F = 49152;
    T_null = 345;
    T_s = 319;
    T_u = 256;
    guardLength = 63;
    carrierDiff = 2000;
}

void CDABParams::setMode4()
{
    dabMode = 4;
    L = 76;
    K = 768;
    T_F = 98304;
    T_null = 1328;
    T_s = 1276;
    T_u = 1024;
    guardLength = 252;
    carrierDiff = 2000;
}
