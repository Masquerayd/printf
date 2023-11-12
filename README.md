# Printf Function

The printf functions printf all the arguments passed into the function and inserts them in the sentence. It handles Arguments , Error's , formate spercifiers, Converting and Formatting modifiers , Special cases and Memory management.

## Introduction to printf 

The printf is a formated output thats a part of the `stdlib.h` its responsible for data to the standard output in spercified format. It is sometimes used for debugging for programmers

The printf function should be able to handle these different format spercifiers as shown below:
- `%d`: Format as a signed decimal integer.
- `%u`: Format as an unsigned decimal integer.
- `%f`: Format as a floating-point number.
- `%s`: Format as a null-terminated string.
- `%c`: Format as a character.
- `%x`: Format as a hexadecimal number, in lowercase.
- `%X`: Format as a hexadecimal number, in uppercase
- `%%`: Format spercifier is used to print the `%` character
- `%n`: doesn't actually print anything, instead it stores the number of character printed so far, E.G:
	- ```c
	int count;
	printf("Count: %d%n, 42, &count);
	```

The printf function must look for the `%` in the string that will tell the function that the next character is a spercifier , using that spercifier it will then look at the argument and determine the type that was passed through. In the case that `printf` expecrs an `int` but the type is defferent printf must be able to handle the error.

## Handling FLags, Field width, Precision, and length Modifiers:


