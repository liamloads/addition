#include <stdio.h>
#include <string.h>

void _0(char _1[], int *_2, int *_3, int *_4) {
    int _5 = 0;

    if (_1[0] == '-') {
        *_4 += 1;
        _5++;
    }

    if (_1[_5] == '\0') {
        *_4 = -1;
        return;
    }

    while (_1[_5++] == '0') {}

    strncat(_1, ".", 2);
    int _6 = --_5;
    int _7 = 0;
    int _8 = 0;

    while (_1[_5] != '.') {
        _7 = _1[_5++] - 48;
        _7 = ~((_7 >> 1) + (_7 - 14)) + 1;

        if ((_7 & 15) != _7) {
            *_4 = -1;
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
                return;
            }

            _8++;
        }

        if (_1[_5 + 1] != '\0') {
            *_4 = -1;
            return;
        }

        if (_1[_5 - 1] == '0') {
            while (_1[--_5] == '0') {
                _8--;
            }
        }
    }

    char _9[_8 + 1];
    _9[0] = '\0';
    strncat(_9, &_1[_6++], *_2);
    strncat(_9, &_1[*_2 + _6], _8 - *_2);
    _1[0] = '\0';
    strncat(_1, _9, _8);
    *_3 = _8;
}

int main(int _2, char *_3[]) {
    if (_2 != 3) {
        printf("false");
        return 0;
    }

    _2 = 0;

    while (_3[1][_2++] != '\0') {}

    char _4[_2 + 1];
    _4[0] = '\0';
    strncat(_4, _3[1], _2);
    int _5 = 0;
    int _6 = 0;
    _0(_4, &_5, &_2, &_6);

    if (_6 == -1) {
        printf("false");
        return 0;
    }

    int _7 = 0;

    while (_3[2][_7++] != '\0') {}

    char _8[_7 + 1];
    _8[0] = '\0';
    strncat(_8, _3[2], _7);
    int _9 = 0;
    _0(_8, &_9, &_7, &_6);

    if (_6 == -1) {
        printf("false");
        return 0;
    }

    int _10 = _2 - _5;
    int _11 = _7 - _9;
    int _12 = _10 - _11;
    int _13 = ~_12;
    int _14 = 0;

    if ((_12 != 0) && ((_13 / _12) == 0)) {
        _12 = _13 + 1;
        _14 = 1;
    }

    _10 = _2 - _7;
    _11 = 0;
    int _15 = _2;
    int _16 = 0;

    if (_10 == 0) {
        if (_6 == 1) {
            if (_12 == 0) {
                _10--;

                while (_2 != ++_10) {
                    _13 = _8[_10] - 48;
                    _16 = (_4[_10] - 48) - _13;

                    if (_16 != 0) {
                        _10 = _2 - 1;

                        if ((_16 & 15) != _16) {
                            _11 = 1;
                        }
                    }
                }

                if (_16 == 0) {
                    printf("0");
                    return 0;
                }
            } else if (_14 == 0)  {
                _11 = 1;
            }
        }
    } else {
        if (_14 == 0) {
            _10 -= _12;
        } else {
            _10 += _12;
        }

        if (_10 != 0) {
            _13 = ~_10;

            if ((_13 / _10) == 0) {
                _10 = _13 + 1;
                _11 = 1;
            }
        }
    }

    _16 = _7;

    if (_14 == 0) {
        _16 += _12;
    } else {
        _15 += _12;
    }

    if (_11 == 1) {
        _10 = _15;
        _15 = _16;
        _16 = _10;
        _5 = _9;
    }

    _9 = 1 - (_6 & 1);
    _10 = _9;
    _15 += _10;
    int _17[_15];
    _16 += _10;
    int _18[_16];

    if (_9 == 1) {
        _2++;
        _5++;
        _7++;
        _17[0] = 0;
        _18[0] = 0;
    }

    _12 = 0;

    if (_11 == 0) {
        while (_2 != _10) {
            _17[_10++] = _4[_12++] - 48;
        }

        while (_10 != _15) {
            _17[_10++] = 0;
        }

        _10 = _9;
        _12 = 0;

        while (_7 != _10) {
            _18[_10++] = _8[_12++] - 48;
        }

        while (_10 != _16) { 
            _18[_10++] = 0;
        }
    } else {
        while (_7 != _10) {
            _17[_10++] = _8[_12++] - 48;
        }

        while (_10 != _15) {
            _17[_10++] = 0;
        }

        _10 = _9;
        _12 = 0;

        while (_2 != _10) {
            _18[_10++] = _4[_12++] - 48;
        }

        while (_10 != _16) { 
            _18[_10++] = 0;
        }
    }

    _2 = _15--;
    _16--;

    if (_6 != 1) {
        while (_16 != -1) {
            _7 = _17[_15] + _18[_16--];
            _10 = _15--;
            _17[_10] = _7;
            _7 -= 10;

            while ((_7 & 15) == _7) {
                _17[_10--] = _7;
                _7 = _17[_10] + 1;
                _17[_10] = _7;
                _7 -= 10;
            }
        }
    } else {
        while (_16 != -1) {
            _7 = _17[_15] - _18[_16];
            _10 = _15--;
            _17[_10] = _7;

            if ((_7 & 15) != _7) {
                _17[_10] = (10 + (_18[_16] + _17[_10])) - _18[_16];
                _7 = _17[--_10] - 1;
                _17[_10--] = _7;

                while ((_7 & 15) != _7) {
                    _7 = _17[_10] - 1;
                    _17[_10] = _7;
                    _17[_10-- + 1] = 9;
                }
            }

            _16--;
        }
    }

    if ((_3[_11 + 1][0] == '-') && (_6 != 0)) {
        printf("-");
    }

    _6 = 0;
    _9 = 0;

    while (_5 != _6) {
        if (_17[_6] != 0) {
            _9 = 1;

            while (_5 != _6) {
                printf("%i", _17[_6++]);
            }

            _6--;
        }

        _6++;
    }

    if (_9 == 0) {
        printf("0");
    }

    if (_2 != _5) {
        while (_17[--_2] == 0) {}

        if (++_2 != _5) {
            printf(".");

            while (_2 != _6) {
                printf("%i", _17[_6++]);
            }
        }
    }

    return 0;
}
