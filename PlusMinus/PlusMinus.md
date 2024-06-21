Given an array of calculate the ratios of its elements that are
positive. negative. and zero. Print the decimal value of each fraction on a
new line with 6 places after the decimal.
Note: This intrcxiuces precision problems. The test cases are
to six decimal places. though answers with absolute error of up to
are acceptable.

Example
arr= [l, 1, O, —1, —1]
There are n = 5 elements. two positive. two negative and one zero. Their
ratios are S = 0.400000. 2 = 0.400000 and = Results
are as:

0.400000
0.400000
0.200000

Function Description
Complete the plusMinus function in the editor below.
plusMinus has the following parameter(s):
• int arr[n]: an array of integers

Print
Print the ratios of positive, negative and zero values in the array. Each value should be printed on a separate line with 6 digits after the decimal. The function should not return a value.

Input Format

The first line contains an integer, , the size of the array.
The second line contains  space-separated integers that describe a[n].

Sample Input

STDIN           Function
-----           --------
6               arr[] size n = 6
-4 3 -9 0 4 1   arr = [-4, 3, -9, 0, 4, 1]
Sample Output

0.500000
0.333333
0.166667

Explanation
There are 3 positive numbers. 2 negative numbers. and 1 zero in the
array.
The proportions of occurrence are positive
= 0.333333 and zeros: = 0.166667.
: = 0.500000. negative:




"Success all the 12 User Cases".