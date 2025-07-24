# Prime Number Checker in C

A simple command-line program written in C to determine if a given positive integer is a prime number using an optimized √n check.

## 🔍 How It Works

1. Prompts for user input (`num`).
2. Excludes numbers ≤ 1.
3. Checks divisibility from 2 up to √n.
4. Prints whether it's prime or not.

## 🏃‍♂️ How to Compile & Run

```bash
gcc prime_check.c -o prime_check -lm
./prime_check
