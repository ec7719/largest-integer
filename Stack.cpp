#include<stdio.h>
#define MAX 5
void main()
{
	int stack[MAX];
	int top=-1,i,item,choice;
	do{
		printf("\n1.Push\n2.pop\n3.Display\n4.exit");
		printf("\n Enter the choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				if(top==MAX-1){
				printf("Stack is overflow");}
				else {
					printf("Enter the item to be pushed");
					scanf("%d",&item);
					top++;
					stack[top]=item;}
				break;
				
		
	    	case 2:
		       	for(i=top;i>=0;i--)
			    	printf("\n%d",stack[i]);
				
				break;
		}
	}
		while (choice!=4);
		printf("Invalid");
}
