#include <stdio.h>

void _0(char _1[], unsigned long *_2, unsigned long _3, short int *_4) {
    strncat(_1, ".", 1);
    unsigned long _5 = 0;

    if (_1[0] == '-') {
        *_4 += 1;
    }

    while (_1[_5++] != '.') {}

    *_2 = _5 - 1;
    // //todo
}

int main(int _1, char *_2[]) {
    unsigned long _3 = strlen(_2[1]) + 1;
    unsigned long _4 = _3;
    char _5[_4];
    strncpy(_5, _2[1], _4);
    short int _6 = 0;
    _0(_5, &_3, _4, &_6);
    unsigned long _7 = strlen(_2[2]) + 1;
    unsigned long _8 = _7;
    char _9[_8];
    strncpy(_9, _2[2], _8);
    _0(_9, &_7, _8, &_6);
    // todo
    printf("%s\n", _5);
    printf("%lu\n", _3);
    printf("%s\n", _9);
    printf("%lu\n", _7);
    printf("%i\n", _6);
    return 0;
}
