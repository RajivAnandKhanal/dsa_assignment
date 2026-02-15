Documentation of Question no. 2:
Write a program to convert an infix mathematical expression to postfix and evaluate it.

(A) Data Structures Defined

1. standard character array called stack[MAXSIZE] was set that acts as storage
2. This stack was managed via an integer variable named top.
3. Character array called postfix[MAXSIZE] act as a temporary buffer to store the rearranged expression

(B) Functions

1. I created a push() function which is responsible for placing a new character or number onto the stack and moving the top index up by one.
2. The pop() function was written to retrieves the item from the very top and moves the top index back down.
3. precedence() function was uesd to handle the math rules.
4. The <ctype.h> library in C was used to dedicated exclusively to character classification (e.g., isdigit, isalpha, isspace)

(C) The main() function

1. main() function focuses on the conversion logic as well as taking the infix input and turning it into a postfix string.
2. In first loop, the program decides to print a character now or save it on the stack based on it's property ( an operand, a parenthesis, or an operator ).
3. When the conversion is finished, it resets top variable to -1.
4. At last the program checks the new postfix string & pushes numbers in the stack and when it hits an operator, it pops the two most recent numbers to calculate them and pushes the result back.

(D) Output
Math expression: 6+(8\4)-4
Postfix string: 684\+4-
Result: 4

Math Expression: 3+35
Postfix string: 335+
Result: 38
