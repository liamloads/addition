#include <stdio.h>

void _0(char _1[], unsigned long *_2, unsigned long _3, short int *_4) {
    strncat(_1, ".", 1);
    unsigned long _5 = 0;

    if (_1[0] == '-') {
        *_4 += 1;
        _5++;
    }

    while (_1[_5++] == '0') {}

    _5--;
    char _6[_3];
    _6[0] = '\0';
    unsigned long _7 = 0;

    if (_1[_5] == '.') {
        strncat(_6, "0.", 2);
        _7 = 2;
    }

    int _8 = 0;

    while (_1[_5] != '.') {
        _8 = _1[_5] - 48;
        _8 = ~((_8 >> 1) + (_8 - 14)) + 1;

        if (_8 != (_8 & 15)) {
            *_4 = -1;
            printf("false");
            return;
        }

        _5++;
        // todo
    }

    // todo
    _1[0] = '\0';
    strncat(_1, _6, _7);
    *_2 = _5 - 1;
}

int main(int _1, char *_2[]) {
    unsigned long _3 = strlen(_2[1]) + 1;
    unsigned long _4 = _3;
    char _5[_4];
    _5[0] = '\0';
    strncat(_5, _2[1], _4);
    short int _6 = 0;
    _0(_5, &_3, _4, &_6);

    if (_4 == -1) {
        return 0;
    }

    unsigned long _7 = strlen(_2[2]) + 1;
    unsigned long _8 = _7;
    char _9[_8];
    _9[0] = '\0';
    strncat(_9, _2[2], _8);

    _0(_9, &_7, _8, &_6);

    if (_4 == -1) {
        return 0;
    }

    // todo
    return 0;
}
