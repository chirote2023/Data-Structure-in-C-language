// Q.1 DS PRATICAL 1
// #include<stdio.h>

// long factorial(int n)
// {
//     if(n==0)
//     return 1;
//     else 
//     return(n*factorial(n-1));
// }

// int main()
// {
//     int number;
//     long fact;
//     printf("Enter the number : " );
//     scanf("%d",&number);

//     fact =factorial(number);
//     printf("Factorial of %d is %d \n",number, fact);
//     return 0;
// }


// Q2 DS PRATICAL 2

// #include<stdio.h>
// void printFibonacci(int n)
// {
//     static int n1=0,n2=1,n3;
//     if(n>0)
//     {
//         n3 =n1+n2;
//         n1 =n2;
//         n2=n3;
//         printf("%d",n3);
//         printFibonacci(n-1);
//     }
// }
// int main()
// {
//     int n;
//     printf("Enter the number of elements : ");
//     scanf("%d",&n);
//     printf("Fibonacci series : ");
//     printf("%d %d",0,1);
//     printFibonacci(n-2);
//     return 0;
// }

//Q.3
// #include <stdio.h>
// #include <stdlib.h>
 
// int main(void)
// {
//     int i, n, j, k;
//     printf("Enter the size of the first array: ");
//     scanf("%d", &n);
//     int arr1[n];
//     printf("Enter the elements of the first array: \n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr1[i]);
//     }
//     printf("Enter the size of the second array: ");
//     scanf("%d", &k);
//     int arr2[k];
//     printf("Enter the elements of the second array: \n");
//     for (j = 0; j < k; j++)
//     {
//         scanf("%d", &arr2[j]);
//     }
//     int arr3[n + k];
//     i = j = 0;
//     int in;
//     for (in = 0; in < n + k; in ++)
//     {
//         if (i < n && j < k)
//         {
//             if (arr1[i] < arr2[j])
//             {
//                 arr3[in] = arr1[i];
//                 i++;
//             }
//             else
//             {
//                 arr3[in] = arr2[j];
//                 j++;
//             }
//         }
//         else if (i < n)
//         {
//             arr3[in] = arr1[i];
//             i++;
//         }
//         else
//         {
//             arr3[in] = arr2[j];
//             j++;
//         }
//     }
//     printf("The merged array is: \n");
//     for (in = 0; in < n + k; in++)
//     {
//         printf("%d ", arr3[in]);
//     }
//     printf("\n");
//     return 0;
// }

//Q.5 ds oratical

// call by value
// #include <stdio.h>  
// void swap(int , int ); 
// int main()  
// {  
//     int a,b;
//     printf("enter the value of a:");
//     scanf("%d",&a);
//     printf("enter the value of b:");
//     scanf("%d",&b);  
   
//    printf("Before Swapping\na = %d\nb = %d\n", a, b);
//   swap(a,b); 
 
//    printf("After Swapping\na = %d\nb = %d\n", a, b);
 
//    return 0; 
// } 
// void swap(int a, int b)  
// {  
//     int temp;   
//     temp = a;  
//     a=b;  
//     b=temp;  
//     printf("After swapping values in function a = %d, b = %d\n",a,b); 
// }  


//call by reference
// #include <stdio.h>  
// void swap(int *, int *);    
// int main()  
// {  
//     int a = 10;  
//     int b = 20;   
//     printf("Before swapping the values in main a = %d, b = %d\n",a,b); // printing the value of a and b in main  
//     swap(&a,&b);  
//     printf("After swapping values in main a = %d, b = %d\n",a,b); // The values of actual parameters do change in call by reference, a = 10, b = 20  
// }  
// void swap (int *a, int *b)  
// {  
//     int temp;   
//     temp = *a;  
//     *a=*b;  
//     *b=temp;  
//     printf("After swapping values in function a = %d, b = %d\n",*a,*b); // Formal parameters, a = 20, b = 10   
// }  


//Q.6
// #include <stdio.h>

// void main()
// {
//     int arr1[100];
//     int i, mx, mn, n;
	
//        printf("Input the number of elements to be stored in the array :");
//        scanf("%d",&n);
   
//        printf("Input %d elements in the array :\n",n);
//        for(i=0;i<n;i++)
//             {
// 	      printf("element - %d : ",i);
// 	      scanf("%d",&arr1[i]);
// 	    }


//     mx = arr1[0];
//     mn = arr1[0];

//     for(i=1; i<n; i++)
//     {
//         if(arr1[i]>mx)
//         {
//             mx = arr1[i];
//         }


//         if(arr1[i]<mn)
//         {
//             mn = arr1[i];
//         }
//     }
//     printf("Maximum element is : %d\n", mx);
//     printf("Minimum element is : %d\n\n", mn);
// }

//Q.7
// #include <stdio.h>

// #include <stdlib.h>

// #define SIZE 4

// int top = -1, inp_array[SIZE];
// void push();
// void pop();
// void show();

// int main()
// {
//     int choice;

//     while (1)
//     {
//         printf("\nPerform operations on the stack:");
//         printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
//         printf("\n\nEnter the choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             push();
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             show();
//             break;
//         case 4:
//             exit(0);

//         default:
//             printf("\nInvalid choice!!");
//         }
//     }
// }

// void push()
// {
//     int x;

//     if (top == SIZE - 1)
//     {
//         printf("\nOverflow!!");
//     }
//     else
//     {
//         printf("\nEnter the element to be added onto the stack: ");
//         scanf("%d", &x);
//         top = top + 1;
//         inp_array[top] = x;
//     }
// }

// void pop()
// {
//     if (top == -1)
//     {
//         printf("\nUnderflow!!");
//     }
//     else
//     {
//         printf("\nPopped element: %d", inp_array[top]);
//         top = top - 1;
//     }
// }

// void show()
// {
//     if (top == -1)
//     {
//         printf("\nUnderflow!!");
//     }
//     else
//     {
//         printf("\nElements present in the stack: \n");
//         for (int i = top; i >= 0; --i)
//             printf("%d\n", inp_array[i]);
//     }
// }


//Q.4

// #include<stdio.h>
// #include<stdlib.h>

// // addition
// void add(int m[3][3], int n[3][3], int sum[3][3])
// {
//   for(int i=0;i<3;i++)
//     for(int j=0;j<3;j++)
//       sum[i][j] = m[i][j] + n[i][j];
// }

// // subtract 
// void subtract(int m[3][3], int n[3][3], int result[3][3])
// {
//   for(int i=0;i<3;i++)
//     for(int j=0;j<3;j++)
//       result[i][j] = m[i][j] - n[i][j];
// }

// //  multiply 
// void multiply(int m[3][3], int n[3][3], int result[3][3])
// {
//   for(int i=0; i < 3; i++)
//   {
//     for(int j=0; j < 3; j++)
//     {
//       result[i][j] = 0; 
//       for (int k = 0; k < 3; k++)
//       result[i][j] += m[i][k] * n[k][j];
//     }
//   }
// }

// // display 
// void display(int matrix[3][3])
// {
//   for(int i=0; i<3; i++)
//   {
//     for(int j=0; j<3; j++)
//       printf("%d\t",matrix[i][j]);

//     printf("\n"); 
//   }
// }


// int main()
// {
  
//   int a[][3] = { {5,6,7}, {8,9,10}, {3,1,2} };
//   int b[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
//   int c[3][3];

  
//   printf("First Matrix:\n");
//   display(a);
//   printf("Second Matrix:\n");
//   display(b);

  
//   int choice;

//   do
//   {
    
//     printf("\nChoose the matrix operation,\n");
//     printf("----------------------------\n");
//     printf("1. Addition\n");
//     printf("2. Subtraction\n");
//     printf("3. Multiplication\n");
//     printf("4. Exit\n");
//     printf("----------------------------\n");
//     printf("Enter your choice: ");
//     scanf("%d", &choice);

//     switch (choice) {
//       case 1:
//         add(a, b, c);
//         printf("Sum of matrix: \n");
//         display(c);
//         break;
//       case 2:
//         subtract(a, b, c);
//         printf("Subtraction of matrix: \n");
//         display(c);
//         break;
//       case 3:
//         multiply(a, b, c);
//         printf("Multiplication of matrix: \n");
//         display(c);
//         break;
//      case 4:
//         printf("Thank You.\n");
//         exit(0);
//       default:
//         printf("Invalid input.\n");
//         printf("Please enter the correct input.\n");
//     }
//   }while(1);

//   return 0;
// }

//Q.11
//postfix expression
// #include <ctype.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // Stack type
// struct Stack {
// 	int top;
// 	unsigned capacity;
// 	int* array;
// };

// // Stack Operations
// struct Stack* createStack(unsigned capacity)
// {
// 	struct Stack* stack
// 		= (struct Stack*)malloc(sizeof(struct Stack));

// 	if (!stack)
// 		return NULL;

// 	stack->top = -1;
// 	stack->capacity = capacity;
// 	stack->array
// 		= (int*)malloc(stack->capacity * sizeof(int));

// 	if (!stack->array)
// 		return NULL;

// 	return stack;
// }

// int isEmpty(struct Stack* stack)
// {
// 	return stack->top == -1;
// }

// char peek(struct Stack* stack)
// {
// 	return stack->array[stack->top];
// }

// char pop(struct Stack* stack)
// {
// 	if (!isEmpty(stack))
// 		return stack->array[stack->top--];
// 	return '$';
// }

// void push(struct Stack* stack, char op)
// {
// 	stack->array[++stack->top] = op;
// }

// // The main function that returns value
// // of a given postfix expression
// int evaluatePostfix(char* exp)
// {
// 	// Create a stack of capacity equal to expression size
// 	struct Stack* stack = createStack(strlen(exp));
// 	int i;

// 	// See if stack was created successfully
// 	if (!stack)
// 		return -1;

// 	// Scan all characters one by one
// 	for (i = 0; exp[i]; ++i) {
		
// 		// If the scanned character is an operand
// 		// (number here), push it to the stack.
// 		if (isdigit(exp[i]))
// 			push(stack, exp[i] - '0');

// 		// If the scanned character is an operator,
// 		// pop two elements from stack apply the operator
// 		else {
// 			int val1 = pop(stack);
// 			int val2 = pop(stack);
// 			switch (exp[i]) {
// 			case '+':
// 				push(stack, val2 + val1);
// 				break;
// 			case '-':
// 				push(stack, val2 - val1);
// 				break;
// 			case '*':
// 				push(stack, val2 * val1);
// 				break;
// 			case '/':
// 				push(stack, val2 / val1);
// 				break;
// 			}
// 		}
// 	}
// 	return pop(stack);
// }

// // Driver code
// int main()
// {
// 	char exp[] = "298*+8-";

// 	// Function call
// 	printf("postfix evaluation: %d", evaluatePostfix(exp));
// 	return 0;
// }

//Q.12
// infix to postfix expression

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_EXPR_SIZE 100

// // Function to return precedence of operators
// int precedence(char operator)
// {
// 	switch (operator) {
// 	case '+':
// 	case '-':
// 		return 1;
// 	case '*':
// 	case '/':
// 		return 2;
// 	case '^':
// 		return 3;
// 	default:
// 		return -1;
// 	}
// }

// // Function to check if the scanned character
// // is an operator
// int isOperator(char ch)
// {
// 	return (ch == '+' || ch == '-' || ch == '*' || ch == '/'|| ch == '^');
// }

// // Main functio to convert infix expression
// // to postfix expression
// char* infixToPostfix(char* infix)
// {
// 	int i, j;
// 	int len = strlen(infix);
// 	char* postfix = (char*)malloc(sizeof(char) * (len + 2));
// 	char stack[MAX_EXPR_SIZE];
// 	int top = -1;

// 	for (i = 0, j = 0; i < len; i++) {
// 		if (infix[i] == ' ' || infix[i] == '\t')
// 			continue;
		
// 		// If the scanned character is operand
// 		// add it to the postfix expression
// 		if (isalnum(infix[i])) {
// 			postfix[j++] = infix[i];
// 		}
		
// 		// if the scanned character is '('
// 		// push it in the stack
// 		else if (infix[i] == '(') {
// 			stack[++top] = infix[i];
// 		}
		
// 		// if the scanned character is ')'
// 		// pop the stack and add it to the
// 		// output string until empty or '(' found
// 		else if (infix[i] == ')') {
// 			while (top > -1 && stack[top] != '(')
// 				postfix[j++] = stack[top--];
// 			if (top > -1 && stack[top] != '(')
// 				return "Invalid Expression";
// 			else
// 				top--;
// 		}
		
// 		// If the scanned character is an operator
// 		// push it in the stack
// 		else if (isOperator(infix[i])) {
// 			while (top > -1
// 				&& precedence(stack[top])
// 						>= precedence(infix[i]))
// 				postfix[j++] = stack[top--];
// 			stack[++top] = infix[i];
// 		}
// 	}

// 	// Pop all remaining elements from the stack
// 	while (top > -1) {
// 		if (stack[top] == '(') {
// 			return "Invalid Expression";
// 		}
// 		postfix[j++] = stack[top--];
// 	}
// 	postfix[j] = '\0';
// 	return postfix;
// }

// // Driver code
// int main()
// {
// 	char infix[MAX_EXPR_SIZE] = "(A*(b+c))+(b/d)*a+z";
	
// 	// Function call
// 	char* postfix = infixToPostfix(infix);
// 	printf("%s\n", postfix);
// 	free(postfix);
// 	return 0;
// }

//Q13.
// CPP Program to convert prefix to postfix
// #include <iostream>
// #include <stack>
// using namespace std;

// // function to check if character is operator or not
// bool isOperator(char x)
// {
// 	switch (x) {
// 	case '+':
// 	case '-':
// 	case '/':
// 	case '*':
// 		return true;
// 	}
// 	return false;
// }

// // Convert prefix to Postfix expression
// string preToPost(string pre_exp)
// {

// 	stack<string> s;
// 	// length of expression
// 	int length = pre_exp.size();

// 	// reading from right to left
// 	for (int i = length - 1; i >= 0; i--)
// 	{
// 		// check if symbol is operator
// 		if (isOperator(pre_exp[i]))
// 		{
// 			// pop two operands from stack
// 			string op1 = s.top();
// 			s.pop();
// 			string op2 = s.top();
// 			s.pop();

// 			// concat the operands and operator
// 			string temp = op1 + op2 + pre_exp[i];

// 			// Push string temp back to stack
// 			s.push(temp);
// 		}

// 		// if symbol is an operand
// 		else {

// 			// push the operand to the stack
// 			s.push(string(1, pre_exp[i]));
// 		}
// 	}

// 	// stack contains only the Postfix expression
// 	return s.top();
// }

// // Driver Code
// int main()
// {
// 	string pre_exp = "*-A/BC-/AKL";
// 	cout << "Postfix : " << preToPost(pre_exp);
// 	return 0;
// }

//Q.14
// reverse a linked list
// #include <stdio.h>
// #include <stdlib.h>

// /* Link list node */
// struct Node {
// 	int data;
// 	struct Node* next;
// };

// /* Function to reverse the linked list */
// static void reverse(struct Node** head_ref)
// {
// 	struct Node* prev = NULL;
// 	struct Node* current = *head_ref;
// 	struct Node* next = NULL;
// 	while (current != NULL) {
// 		// Store next
// 		next = current->next;

// 		// Reverse current node's pointer
// 		current->next = prev;

// 		// Move pointers one position ahead.
// 		prev = current;
// 		current = next;
// 	}
// 	*head_ref = prev;
// }

// /* Function to push a node */
// void push(struct Node** head_ref, int new_data)
// {
// 	struct Node* new_node
// 		= (struct Node*)malloc(sizeof(struct Node));
// 	new_node->data = new_data;
// 	new_node->next = (*head_ref);
// 	(*head_ref) = new_node;
// }

// /* Function to print linked list */
// void printList(struct Node* head)
// {
// 	struct Node* temp = head;
// 	while (temp != NULL) {
// 		printf("%d ", temp->data);
// 		temp = temp->next;
// 	}
// }

// /* Driver code*/
// int main()
// {
// 	/* Start with the empty list */
// 	struct Node* head = NULL;

// 	push(&head, 10);
// 	push(&head, 20);
// 	push(&head, 30);
// 	push(&head, 40);

// 	printf("Given linked list\n");
// 	printList(head);
// 	reverse(&head);
// 	printf("\nReversed linked list \n");
// 	printList(head);
// 	getchar();
// }

//Q.15
// C program to remove alternate nodes of a linked list
#include<stdio.h>
#include<stdlib.h>

/* A linked list node */
struct Node
{
	int data;
	struct Node *next;
};

/* deletes alternate nodes of a list starting with head */
void deleteAlt(struct Node *head)
{
	if (head == NULL)
		return;

	/* Initialize prev and node to be deleted */
	struct Node *prev = head;
	struct Node *node = head->next;

	while (prev != NULL && node != NULL)
	{
		/* Change next link of previous node */
		prev->next = node->next;

		/* Free memory */
		free(node);

		/* Update prev and node */
		prev = prev->next;
		if (prev != NULL)
			node = prev->next;
	}
}

/* UTILITY FUNCTIONS TO TEST fun1() and fun2() */
/* Given a reference (pointer to pointer) to the head
of a list and an int, push a new node on the front
of the list. */
void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node =
		(struct Node*) malloc(sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;

	/* link the old list of the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}

/* Driver program to test above functions */
int main()
{
	/* Start with the empty list */
	struct Node* head = NULL;

	/* Using push() to construct below list
	1->2->3->4->5 */
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);

	printf("\nList before calling deleteAlt() \n");
	printList(head);

	deleteAlt(head);

	printf("\nList after calling deleteAlt() \n");
	printList(head);

	return 0;
}
