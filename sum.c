GNU nano 6.3                                                             sum.c
#include <stdio.h>

void _0(char _1[], unsigned long *_2, unsigned long *_3, short int *_4) {
    strncat(_1, ".", 1);
    unsigned long _5 = 0;

    if (_1[0] == '-') {
        *_4 += 1;
        _5++;
    }

    while (_1[_5++] == '0') {}

    _5--;
    char _6[*_3];
    _6[0] = '\0';
    unsigned long _7 = 0;

    if (_1[_5] == '.') {
        _5++;
        strncat(_6, "0.", _7 = 2);
    }

    int _8 = _5;
    int _9 = 0;

    while (_1[_5] != '.') {
        _9 = _1[_5++] - 48;
        _9 = ~((_9 >> 1) + (_9 - 14)) + 1;

        if (_9 != (_9 & 15)) {
             *_4 = -1;
            printf("false");
             return;
        }

        _7++;
    }

    *_2 = _7;

    if (_1[_5 + 1] != '\0') {
        // todo
    }

    //todo
    strncat(_6, &_1[_8], _5 - _8);
    _1[0] = '\0';
    strncat(_1, _6, _7);
}

int main(int _1, char *_2[]) {
    unsigned long _3 = 0;
    unsigned long _4 = strlen(_2[1]);
    char _5[_4];
    _5[0] = '\0';
    strncat(_5, _2[1], _4);
    short int _6 = 0;
    _0(_5, &_3, &_4, &_6);

     if (_6 == -1) {
        return 0;
    }

    unsigned long _7 = 0;
    unsigned long _8 = strlen(_2[2]);
    char _9[_8];
    _9[0] = '\0';
    strncat(_9, _2[2], _8);
    _0(_9, &_7, &_8, &_6);

    if (_6 == -1) {
        return 0;
    }
