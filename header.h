//header.h
#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#define STACK_SIZE 10
extern int top; // not allowed if the external is static
extern int contents[]; // not allowed if the external is static
//recommend but optional
void make_empty(); // not allow static function prototype 
int is_empty();
int is_full();
void push(int);
int pop(void); 
#endif
