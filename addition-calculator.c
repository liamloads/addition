#include <stdio.h>

void _0(char _1[], unsigned long *_2, unsigned long _3) {
    strncat(_1, ".", 1);
    int _4 = 0;

    while (_1[_4++] != '.') {}

    *_2 = _4 - 1;
    // //todo
}

int main(int _1, char *_2[]) {
    unsigned long _3 = strlen(_2[1]) + 1;
    unsigned long _4 = _3;
    char _5[_4];
    strncpy(_5, _2[1], _4);
    _0(_5, &_3, _4);
    unsigned long _6 = strlen(_2[2]) + 1;
    unsigned long _7 = _6;
    char _8[_7];
    strncpy(_8, _2[2], _7);
    _0(_8, &_6, _7);
     // todo
    printf("%s\n", _5);
    printf("%s\n", _8);
    return 0;
}
