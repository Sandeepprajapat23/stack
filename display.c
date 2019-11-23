#include<stdio.h>
#include"extern.h"
#include"header.h"
void display(void){
	int i;
	if(isempty())
		printf("stack is empty\n");


	else
		for(i=0; i<=top; i++)
		{
			printf("%d-->",buffer[i]);
		}
}
