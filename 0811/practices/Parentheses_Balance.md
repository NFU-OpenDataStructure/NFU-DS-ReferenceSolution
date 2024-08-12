# Parentheses Balance

tag: stack

refer to [uva673](https://vjudge.net/problem/UVA-673)

you are given a string consisting of parentheses `()`, `[]` and `{}`. A string of this type is said to be correct:

- if it is the empty string
- if A and B are correct, AB is correct.
- if A is correct, `(A)`, `[A]` and `{A}` is correct.

Write a program that takes a sequence of strings of this type and program can assume that the maximum string length is 128.

## Input

The file contains a positive integer n and a sequence of n strings of parentheses `()`, `[]` and `{}`, one string a line.

## Output

A sequence of "Yes" or "No" on the output file.

### Sample input

```plain
3
([])
(([()])))
([()[]()])()

```

### Sample Output

```plain
Yes
No
Yes

```
