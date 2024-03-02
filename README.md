Since we just learned about reference parameters for functions, now's your chance to use them! You are to write a short program that prompts the user for two integer values. Then these values are passed to various functions, which will derive the sum, difference, product, and quotient with the remainder. A function can return more than one value by using formal parameters as reference variables.

So the main function needs to declare plenty of local variables so that it can pass the necessary arguments to each function. Below are the functions and the parameters (Note that all functions will have a void return type):

Sum
The value of the first operand (pass by value)
The value of the second operand (pass by value)
A variable to store the sum (pass by reference)
Difference
The value of the first operand (pass by value)
The value of the second operand (pass by value)
A variable to store the difference (pass by reference)
Product
The value of the first operand (pass by value)
The value of the second operand (pass by value)
A variable to store the product (pass by reference)
Division
The value of the first operand (pass by value)
The value of the second operand (pass by value)
A variable to store the quotient (pass by reference)
A variable to store the remainder (pass by reference)

Each function returns no value to the caller. After the call to each function, main must display the results to stdout. What will you do if the user enters a value of zero for the second operand? If you don't handle the situation, your program will crash because the CPU will not allow division by zero. That means Division function must not allow division by zero to occur, and that the main function must write an appropriate message when displaying the final results of the calculations. Have your program run in a loop until the user decides it doesn’t want to continue.