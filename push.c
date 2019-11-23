#include<stdio.h>
#include"extern.h"
#include"header.h"
void push(int val){
	int c=0;
	if(isfull())
		printf("stack is full\n");

	else {
		top++;
		buffer[top]=val;
   c++;

 }
}