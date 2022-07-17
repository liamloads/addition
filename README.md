## About

#### Description
This is the fastest command line tool for calculating sums of big numbers with infinite precision.

It's written in C with extreme efficiency and simplicity.

#### License
[MIT License](https://github.com/liamloads/c-precision-addition/blob/main/LICENSE)

## Installation

#### Unix
``` console
cd
git clone https://github.com/liamloads/c-precision-addition.git
cd c-precision-addition
gcc -o precision-addition precision-addition.c
```

## Usage

#### Details

The command line interface accepts two numeric arguments.

The result is the first argument added to the second argument.

#### Examples

``` console
./precision-addition 1 10
11

./precision-addition 30 4
34

./precision-addition 0.000000000000000000000000000000000000000000000000100 0.0000000000000000000000000000000000000000000000001000
0.0000000000000000000000000000000000000000000000002

./precision-addition 123456789123456789123456789123456789123456789123456789 1
123456789123456789123456789123456789123456789123456790

./precision-addition 123456789123456789123456789123456789123456789123456789.10 1.001
123456789123456789123456789123456789123456789123456790.101

./precision-addition 0000000000 0
0

./precision-addition -00 10
10

./precision-addition -000123456.00000078900 10.2340
-123445.766000789

./precision-addition -0.000000123456789123456789 1.01010101010101010101010101010101
1.01010088664422097755331201010101

./precision-addition 1 _
false
```
