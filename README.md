# Push Swap

This project is an implementation of the "Push Swap" sorting game, done as part of the 42 school curriculum. The objective of this project is to sort a stack of integers in ascending order using a specific set of rules for stack manipulation.

### Language : ![C language](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
### Game rules
The "Push Swap" sorting game involves sorting a stack of integers using two stacks and a set of manipulation rules. Here are the basic rules:

* There are two stacks, named A and B.
* Initially, A contains a certain number of unordered integers, and B is empty.
* The goal is to sort the integers in stack A in ascending order using only the following operations:
  * sa: swap the first two elements of stack A.
  * sb: swap the first two elements of stack B.
  * ss: perform sa and sb simultaneously.
  * pa: move the first element of stack B to the top of stack A.
  * pb: move the first element of stack A to the top of stack B.
  * ra: rotate stack A upwards (the first element becomes the last).
  * rb: rotate stack B upwards (the first element becomes the last).
  * rr: perform ra and rb simultaneously.
  * rra: rotate stack A downwards (the last element becomes the first).
  * rrb: rotate stack B downwards (the last element becomes the first).
  * rrr: perform rra and rrb simultaneously.

### Features
This project includes the following features:

* A push_swap program that takes an input list of unsorted integers and displays a series of operations to sort the stack.
* A checker program that takes a series of operations and an integer list as input and checks if these operations correctly sort the stack of integers.
* A set of test scripts to evaluate the performance and accuracy of the programs.

### Usage

#### Compilation
To compile the programs, execute the following command:

```terminal
make
```
and
```
make bonus
```

#### Usage of push_swap

To use the push_swap program, execute the following command:

```bash
./push_swap [integer list]
```
where [interger list] is a space-separated list of unsorted integers..

#### Usage of checker
To use the checker program, execute the following command:
*
```
ARG="[integer list]" ./checker [opérations]
```
where [integer list] is a space-separated list of unsorted integers, and [operations] is a series of space-separated operations.

Exemple of usage :

```shell
$> ./push_swap 4 67 3 87
sa
rra
pb
rra
pa
$> ARG="4 67 3 87" ./checker sa rra pb rra pa
OK
$> ./push_swap 4 67 3 87 | ./checker 4 67 3 87
OK
```
#### help : 
[push swap visualizer](https://github.com/o-reo/push_swap_visualizer)
