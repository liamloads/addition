## About

#### Description
This is a fast and memory-efficient calculator tool for sums of big numbers with full precision.

It's written in ANSI C and can be compiled as a lightweight binary on any operating system with any programming language that supports command line execution.

#### License
[MIT License](https://github.com/twexxor/addition/blob/main/LICENSE)

#### Size
5.4 KB

#### Version
v1.0.0

## Installation

#### Linux
``` console
cd
git clone https://github.com/twexxor/addition.git
cd addition
gcc -o twexxor-addition addition.c
```

## Usage

``` console
./twexxor-addition 1 10
11

./twexxor-addition 30 4
34

./twexxor-addition 0.000000000000000000000000000000000000000000000000100 0.0000000000000000000000000000000000000000000000001000
0.0000000000000000000000000000000000000000000000002

./twexxor-addition 123456789123456789123456789123456789123456789123456789 1
123456789123456789123456789123456789123456789123456790

./twexxor-addition 123456789123456789123456789123456789123456789123456789.10 1.001
123456789123456789123456789123456789123456789123456790.101

./twexxor-addition 0000000000 0
0

./twexxor-addition -00 10
10

./twexxor-addition -000123456.00000078900 10.2340
-123445.766000789

./twexxor-addition -0.000000123456789123456789 1.01010101010101010101010101010101
1.01010088664422097755331201010101
