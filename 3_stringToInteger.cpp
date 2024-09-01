#include<iostream>
using namespace std;

int stringToInteger(char *a , int n){
    // base case 
if  (n == 0) return 0;
    // recursive case
    int ld = a[n-1] - '0' ;
    return stringToInteger (a , n-1) * 10 + ld;
}
int main(){
char a[ ] = "1234";
int n = 4;

cout << stringToInteger(a, n) + 10 << endl;

    return 0;
}