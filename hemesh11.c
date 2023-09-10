/*name=hemesh chopade
  branch=IT,SE(3rd sem)
  roll no=10
2023
stack program
*/

#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>

int stack[5];
int top=-1;  //stack initialization condition

void push(int);
// push is usede to insert the element in the stack
void pop();
//pop function is used to delete the element or integer from the stack
void display();
// dispaly function is used to display the stack elements
void main()
{//main function starts here 
int ch;
int n1;

while(1)
{
	printf("\n Stack operations ");
	printf("\n1.push an element");
	printf("\n2.pop");	
	printf("\n3.display");
	printf("\n4.Exit");

	printf("\n Enter your choose");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:printf("\nEnter the elementto be pushed into the stack:");
		scanf("%d",&n1);
		push(n1);
		break;
		
		case 2: pop();
		break;
		
		case 3: display();
		break;
		
		case 4: exit(1);
		break;
		
		default: printf("\n wrong choice");
		       break;
	}
	// swtich condition close here
}
// while loop close here
}
//main closes here

void push(int x)  //push function starts 
{
	if(top==4)
		{
			printf("stack is full");
		}
	else
		{
			top++;
			stack[top]=x;
		}
}
//end of push function

void pop()   //pop start
{
int a;
	if(top==-1)
	{
		printf("stack is full");
	}
	else
	{
	a= stack[top];
	top--;
	printf("\n %d element popped out of the stack",a);
	}
}
//void pop ends

void display()
 //display function starts 
{
int i;
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("\n Elements in the stacks are:");
		for(i=0;i>=-1;i--)
		{
		 printf("\n %d",stack[i]);
		}
	}
}
//display function end