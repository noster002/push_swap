# push_swap
42 School - Level02

This program is using radix sort to solve a problem following some rules.

## Rules

+ You have 2 stacks named __a__ and __b__.
+ At the beginning:
  + The stack __a__ contains a random amount of negative and/or positive numbers which cannot be duplicated.
  + The stack __b__ is empty.
  + The goal is to sort in ascending order numbers into stack __a__. To do so you have the following operations at your disposal:

__sa__ (swap a):
  + Swap the first 2 elements at the top of stack __a__.
  + Do nothing if there is only one or no elements.

__sb__ (swap b):
  + Swap the first 2 elements at the top of stack __b__.
  + Do nothing if there is only one or no elements.

__ss__ :
  + __sa__ and __sb__ at the same time.

__pa__ (push a):
  + Take the first element at the top of __b__ and put it at the top of __a__.
  + Do nothing if __b__ is empty.

__pb__ (push b):
  + Take the first element at the top of __a__ and put it at the top of __b__.
  + Do nothing if __a__ is empty.

__ra__ (rotate a):
  + Shift up all elements of stack __a__ by 1.
  + The first element becomes the last one.

__rb__ (rotate b):
  + Shift up all elements of stack __b__ by 1.
  + The first element becomes the last one.

__rr__ :
  + __ra__ and __rb__ at the same time.

__rra__ (reverse rotate a):
  + Shift down all elements of stack __a__ by 1.
  + The last element becomes the first one.

__rrb__ (reverse rotate b):
  + Shift down all elements of stack __b__ by 1.
  + The last element becomes the first one.

__rrr__ :
  + __rra__ and __rrb__ at the same time.

## Usage

`make` compiles the program.

The program takes the numbers as parameters in descending order.
E.g.:
```
$ ./push_swap <nbr1> <nbr2> <...>
```
will put _nbr1_ on top of stack __a__ and _nbr2_ just below.

The numbers have to be integers.
