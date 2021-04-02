# Monty

"Monty is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files."

## Functions

push:  Pushes an element to the stack.

pall: Prints all the values on the stack, starting from the top of the stack.

pint: Prints the value at the top of the stack, followed by a new line.

pop: Removes the top element of the stack.

swap: Swaps the top two elements of the stack.

add: Adds the top two elements of the stack.

nop: Doesn’t do anything.

sub: Subtracts the top element of the stack from the second top element of the stack.

div: Divides the second top element of the stack by the top element of the stack.

mul: Multiplies the second top element of the stack with the top element of the stack.

mod: Computes the rest of the division of the second top element of the stack by the top element of the stack.

pchar: Prints the char at the top of the stack, followed by a new line.

## Usage

```sh
./monty <file.m>
```

## Example

```sh
daniel@LAPTOP:~/Holberton/monty$ cat 000.m
push 0
push 1
push 2
  push 3
                   pall    
push 4
    push 5    
      push    6        
pall 
daniel@LAPTOP:~/Holberton/monty$ ./monty 000.m 
0
1
2
3
0
1
2
3
4
5
6 
```

## Authors

* Clara Castaño [https://github.com/ClaraCastaD](https://github.com/ClaraCastaD)
* Daniel Villa [https://github.com/Villasdaniel](https://github.com/Villasdaniel)