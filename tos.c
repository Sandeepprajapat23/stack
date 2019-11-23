#include<stdio.h>
#include"extern.h"
void tos(){
	if(top!=-1)
	  printf("%d\n",buffer[top]);
}