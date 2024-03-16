Here's an assignment that'll give you some practice with arrays, specifically 2D arrays. All you have to do is write a program that allows the user to populate two 2D arrays of integers (3 x 3 matrix) by calling the function InitMatrix. After the user has entered all the values, then call the function DispMatrix to display the two matrices. Then you can call the functions AddMatrices, TMatrix, and DetMatrix to calculate the addition of the matrices, the transpose of each matrix, and the determinant of each matrix respectively.   

InitMatrix will take as argument a 2D array and the number of rows and have a void return type.  It will prompt the user to enter 9 total values for a 3 x 3 matrix.

DispMatrix will take as argument a 2D array and the number of rows and have a void return type.  It will display the contents of the 2D array. Hint: I suggest you use the setw() function to display the matrices nicely.

AddMatrix will take as argument two 2D arrays and the number of rows and have a void return type. It will add two 2D arrays and call DispMatrix to output the result.

TMatrix will take as argument a 2D array and the number of rows and have a void return type. It will switch the rows and columns and call DispMatrix to output the result.

DetMatrix will take as argument a 2D array and the number of rows and have an int return type.  It will calculate the determinate of a 2D array and return the result as an int.
