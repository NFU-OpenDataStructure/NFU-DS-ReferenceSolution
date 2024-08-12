# Add All

tag: Priority Queue, Sort

> Queue can solve this problem. Just sort queue when push.
> You can use something like insertion sort to push new values.

refer to [b606](https://zerojudge.tw/ShowProblem?problemid=b606)

you are given a sequence of positive integers. please find a minimum cast when add a sequence of integers.

E.g. If you want to add 1, 2 and 3. There are three ways:

- $1+2=3, cast=3;$

  $3+3=6, cast=6;$

  $Total = 3+6 = 9$

- $1+3=4, cost=4;$

  $4+2=6, cost=6;$

  $Total = 4+6 = 10$

- $2+3=5, cost=5;$

  $5+1=6, cost = 6;$

  $Total = 5+6 = 11$

Your task is write a program to add a sequence of integers so that the cost is minimized.

## Input

Each test case will start with a positive number $n$, $2 \le n \le 5000$ , and followed by n positive integers $k_i$, $k_i \lt 100000$. Input is terminated by a case where the value of $n$ is zero. This case should not be processed.

## Output

For each case, output the minimum total cost of addition in a single line.

### Sample input

```plain
3
1 2 3
4
1 2 3 4
5
10 5 7 13 11
0

```

### Sample output

```plain
9
19
104

```
