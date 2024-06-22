#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <vector.h>
/*
* Complete the 'flippingMatrix' function below.
*
* The function is expected to return an INTEGER.
* The function accepts 2D_INTEGER_ARRAY matrix as parameter.
*/
int flippingMatrix(vector<vector<int>> matrix) {
int n=matrix.size()/2;
int sums=0;
 for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){
 int num0=matrix[i][2*n-1-j];
 int num1=matrix[i][j];
 int num2=matrix[2*n-1-i][j];
 int num3=matrix[2*n-1-i][2*n-1-j];
 
 
sums+=max(max(max(num0,num1),max(num2,num3)),max(max(num2,num1),max(num0,num3
)));
 }
 }
 return sums;
}
