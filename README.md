# Welcome to the first group project, _printf

## Description

Code written by Lachlan Luchetti and Sam Thompson. 

lachlan.luchetti@holbertonstudents.com and sam.thompson@holbetonstudents.com

This project is a basic version of the printf function replicated to handle the conversion specifies:
- %c : chars
- %s : strings
- %% : percentage signs
- %d : digits
- %i : integers

---

## Compilation

Used gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf to compile all files

---

## Requirements
- Ubuntu 2-.04 LTS
- only allowed vi, vim and emacs editors
- compiled using -Wall -Werror -Wextra -pedantic -std=gnu89
- no more than 5 functions per file
- header file names main.h

## Examples of using the code

Hello world
```
#include "main.h"

int main(void)
{
	_printf("Hello %s\n", "world");
	return (0);
}
```
Output will be 
```
Hello world
```

The code sees the %s and can pass it as a string, writing each character in it using stdout.

### %i and %% examples

The %d and %i specifiers work the same way, in the printf_int function. The example shows the use of %i
```
_printf("Liverpool %i - %i Galatasaray\n", 4, 0);

Output:
Liverpool 4 - 0 Galatasaray
```
This was a great result for the mighty reds, as we face PSG in the quarter finals at the time of writing.

If '%%' are used, just like the standard function printf, a percent sign will be printed.
```
_printf("Look, a percentage sign!: %%\n");

Output:
Look, a percentage sign!: %
```
---
### Unused arguments

If there are extra arguments that arent used in 'format', they are ignored.
```
_printf("hello %s\n", "world", 1, 2, 3, 4);

Output:
hello world
```

The is just one argument given with a %, so only the first string will be passed (%s) and the surplus arguments of 1 2 3 and 4 will not be used

---

## Acknowledgements
Designed by Lachlan Luchetti and Sam Thompson
Give us a shout on email if you want to talk about rugby union or make a pull request

If you have issues with the code, try another groups.
Want to give a big shoutout to Thomas Yamini, we wouldnt be here without your guidance

Dedicated to Jonathan Clus, gbnf big man <3
