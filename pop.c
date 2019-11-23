#include<stdio.h>
#include"extern.h"
#include"header.h"
void pop(void){
	int val=0;
	if(isempty())
		printf("stack is empty\n");

	else{
		val=buffer[top];
		printf("popped element is %d\n",val);
	     top--;
	}
}