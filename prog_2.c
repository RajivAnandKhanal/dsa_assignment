#include <stdio.h>
#include <ctype.h>

#define MAXSIZE 45


char stack[MAXSIZE];
int top = -1;

void push(char item) {
    stack[++top] = item;
}

char pop() {
    return stack[top--];
}

int precedence(char sym) {
    if (sym == '(') return 0;
    if (sym == '+' || sym == '-') return 1;
    if (sym == '*' || sym == '/') return 2;
    return 0;
}

int main() {
    char infix[MAXSIZE], postfix[MAXSIZE];
    int i, j = 0;

    printf("Math Expression: ");
    scanf("%s", infix);

    for (i = 0; infix[i] != '\0'; i++) {
        char curr = infix[i];

        if (isalnum(curr)) {
            postfix[j++] = curr; 
        } 
        else if (curr == '(') {
            push(curr);
        } 
        else if (curr == ')') {
            while (stack[top] != '(') {
                postfix[j++] = pop();
            }
            pop(); 
        } 
        else {
   
            while (top != -1 && precedence(stack[top]) >= precedence(curr)) {
                postfix[j++] = pop();
            }
            push(curr);
        }
    }

    while (top != -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0'; 

    printf("Postfix String: %s\n", postfix);


    top = -1; 
    
    for (i = 0; postfix[i] != '\0'; i++) {
        char curr = postfix[i];

        if (isdigit(curr)) {

            push(curr - '0'); 
        } 
        else {
           
            int num2 = pop();
            int num1 = pop();

            if (curr == '+') push(num1 + num2);
            else if (curr == '-') push(num1 - num2);
            else if (curr == '*') push(num1 * num2);
            else if (curr == '/') push(num1 / num2);
        }
    }
    printf("Result: %d\n", pop());

    return 0;
}