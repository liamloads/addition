#include <stdio.h>

void _0(char _1[], int *_2, int *_3, int *_4) {
    strncat(_1, ".", 1);
    int _5 = 0;

    if (_1[0] == '-') {
        *_4 += 1;
        _5++;
    }

    while (_1[_5++] == '0') {}

    int _6 = --_5;
    int _7 = 0;
    int _8 = 0;

    while (_1[_5] != '.') {
        _7 = _1[_5++] - 48;
        _7 = ~((_7 >> 1) + (_7 - 14)) + 1;

        if ((_7 & 15) != _7) {
            *_4 = -1;
            printf("false");
            return;
        }

        _8++;
    }

    *_2 = _8;

    if (_1[++_5] != '\0') {
        while (_1[_5] != '.') {
            _7 = _1[_5++] - 48;
            _7 = ~((_7 >> 1) + (_7 - 14)) + 1;

            if ((_7 & 15) != _7) {
                *_4 = -1;
                printf("false");
                return;
            }

            _8++;
        }

        if (_1[_5 - 1] == '0') {
            while (_1[--_5] == '0') {
                _8--;
            }
        }
    }

    char _9[_8];
    _9[0] = '\0';
    strncat(_9, &_1[_6++], *_2);
    strncat(_9, &_1[*_2 + _6], _8 - *_2);
    _1[0] = '\0';
    strncat(_1, _9, _8);
    *_3 = _8;
}

void _1(char _2[], int *_3) {
    strncat(_2, "0", 1);
    int _4 = *_3;
    int _5 = 1;

    while ((_4 >>= 1) != 0) {
        strncat(_2, _2, _5);
        _5 <<= 1;
    }

    strncat(_2, _2, *_3 - _5);
}

int main(int _2, char *_3[]) {
    int _4 = 0;
    int _5 = 0;

    while (_3[1][_5++] != '\0') {}

    char _6[_5];
    _6[0] = '\0';
    strncat(_6, _3[1], _5);
    int _7 = 0;
    _0(_6, &_4, &_5, &_7);

    if (_7 == -1) {
        return 0;
    }

    int _8 = 0;
    int _9 = 0;

    while (_3[2][_9++] != '\0') {}

    char _10[_9];
    _10[0] = '\0';
    strncat(_10, _3[2], _9);
    _0(_10, &_8, &_9, &_7);

    if (_7 == -1) {
        return 0;
    }

    int _11 = _5 - _4;
    int _12 = _9 - _8;
    int _13 = _11 - _12;
    int _14 = ~_13;
    int _15 = 0;

    if ((_14 / _13) == 0) {
        _13 = _14 + 1;
        _15 = 1;
    }

    if (_15 == 0) {
        _9 += _13;
    } else {
        _5 += _13;
    }

    _11 = _5 - _9;
    _12 = 0;
    int _16 = _5;
    int _17 = _9;

    if (_11 == 0) {
        if (_7 == 1) {
            while (_5 != _11) {
                _14 = ((_6[_11] + '0') - 96) - ((_10[_11] + '0') - 96);
                _11++;

                if (_14 != 0) {
                    if ((_14 & 15) != _14) {
                        _12 = 1;
                    }

                    _11 = _5;
                }
            }
        }
    } else {
        _14 = ~_11;

        if ((_14 / _11) == 0) {
            _11 = _14 + 1;
            _12 = 1;
        }
    }

    if (_12 == 1) {
        _16 = _9;
        _17 = _5;
    }

    _17--;
    char _18[_16];
    _18[0] = '\0';
    char _19[_16];
    _19[0] = '\0';

    if (_12 == 0) {
        strncat(_18, _6, _5);
        strncat(_19, _10, _9);
    } else {
        strncat(_18, _10, _9);
        strncat(_19, _6, _5);
    }

    if (_13 != 0) {
        if (_15 == 0) {
            _6[0] = '\0';
            _1(_6, &_13);

            if (_12 == 0) {
                strncat(_19, _6, _13);
            } else {
                strncat(_18, _6, _13);
            }
        } else {
            if (_13 != 0) {
                _10[0] = '\0';
                _1(_10, &_13);
            }

            if (_12 == 0) {
                strncat(_18, _10, _13);
            } else {
                strncat(_19, _10, _13);
            }
        }
    }

    if (_7 == 0) {
        while (_17 != -1) {
            // todo
            _17--;
        }

        // todo
    } else {
        // todo
    }

    printf("%s\n", _18);
    printf("%s\n\n", _19);
    // todo
    return 0;
}
