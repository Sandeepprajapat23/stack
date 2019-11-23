#include<stdio.h>
#include<stdlib.h>
#include"header.h"
#include"extern.h"

int top=-1;
int buffer[MAX];
int main(){
	int ch,val=0;

	while(1){
		printf("\n1.push\n2.pop\n3.display\n4.tos\n5.exit\n");
		scanf("%d",&ch);
		switch(ch){
		case 1:
			printf("enter the value\n");
			scanf("%d",&val);
			push(val);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			tos();
			break;
		case 5:
			exit(1);
			break;
		default:
			printf("Invalid choice\n");
			break;
		}
	}
	return 0;
}
