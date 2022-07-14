## About

#### Description
This is a fast and memory-efficient calculator tool for sums of big numbers with full precision.

It's written in C and can be compiled as a lightweight binary to use with any programming language that supports command line execution.

#### License
[MIT License](https://github.com/liamloads/addition/blob/main/LICENSE)

## Installation

#### Linux
``` console
cd
git clone https://github.com/liamloads/addition.git
cd addition
gcc -o addition addition.c
```

## Usage

#### Details

The command line interface accepts two numeric arguments.

The result is the first argument added to the second argument.

#### Examples

``` console
./addition 1 10
11

./addition 30 4
34

./addition 0.000000000000000000000000000000000000000000000000100 0.0000000000000000000000000000000000000000000000001000
0.0000000000000000000000000000000000000000000000002

./addition 123456789123456789123456789123456789123456789123456789 1
123456789123456789123456789123456789123456789123456790

./addition 123456789123456789123456789123456789123456789123456789.10 1.001
123456789123456789123456789123456789123456789123456790.101

./addition 0000000000 0
0

./addition -00 10
10

./addition -000123456.00000078900 10.2340
-123445.766000789

./addition -0.000000123456789123456789 1.01010101010101010101010101010101
1.01010088664422097755331201010101

./addition 1 _
false
```
