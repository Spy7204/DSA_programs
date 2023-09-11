/*name=hemesh chopade
  branch=IT,SE(3rd sem)
  roll no=10
2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a stack data structure to help with the evaluation
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

// Create and initialize a stack
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Push an element onto the stack
void push(struct Stack* stack, int item) {
    stack->array[++stack->top] = item;
}

// Pop an element from the stack
int pop(struct Stack* stack) {
    if (!isEmpty(stack))
        return stack->array[stack->top--];
    return -1; // Return -1 for empty stack (error condition)
}

// Evaluate the given postfix expression
int evaluatePostfix(char* exp) {
    struct Stack* stack = createStack(strlen(exp));
    int i;

    // Iterate through the expression
    for (i = 0; exp[i]; ++i) {
        // If the current character is a digit, push it onto the stack
        if (isdigit(exp[i]))
            push(stack, exp[i] - '0');
        else {
            // If it's an operator, pop two operands from the stack,
            // perform the operation, and push the result back onto the stack
            int operand2 = pop(stack);
            int operand1 = pop(stack);
            switch (exp[i]) {
            case '+':
                push(stack, operand1 + operand2);
                break;
            case '-':
                push(stack, operand1 - operand2);
                break;
            case '*':
                push(stack, operand1 * operand2);
                break;
            case '/':
                push(stack, operand1 / operand2);
                break;
            }
        }
    }

    // The final result should be on the top of the stack
    return pop(stack);
}

int main() {
    char exp[] = "52*3+";
    printf("Expression: %s\n", exp);
    printf("Result: %d\n", evaluatePostfix(exp));
    return 0;
}