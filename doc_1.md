Question no 1 Documentation

Write a program to check if any given mathematical expression has a balanced number of parentheses or not?
Run the program by testing following expression-
⇒ a + (b - c) _ (d
⇒ m + [a - b _ (c + d \* {m)]
⇒ a + (b - c)
Hint: Use stack

(A) Data-Structures

1. Character array called ch[100] in order to act as the stack.
2. In order to manage the stack an integer variable x is defined in program.
3. Only store opening brackets like (, [, or {

(B) Functions

1. The check() function takes the math expression as a parameter and returns 1 if it's balanced & 0 if not.
2. Inside check() function, loop scans the string, pushes brackets in the stack and pops them for closing bracket.
3. The main() function is used to store the data and display the results.

(C) main() function

1.  In main() function a 2D array named datas to contains the expressions.
2.  A for loop is used to iterate through each of these three strings one by one.
3.  Inside the loop, the program prints the expression it's currently checking.
4.  It calls the check() function to find "balanced" or "not balanced" depending to return value.

(D) Output

output expression: a + (b - c)
is balanced

output expression: a + (b - c) \* (d
is not balanced

output expression: m + [a - b * (c + d * {m)]
is not balanced
