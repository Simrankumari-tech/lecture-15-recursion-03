#include<iostream>
using namespace std;
void subsquences( char* ip, int i, char* op, int j){
// base case
if(ip[i] == '\0'){
    op[j] = '\0'; 
    cout << op << endl;
    return ;
}
// recursive case
//1. dont take it
subsquences(ip , i+1 ,op ,j) ;
// 2.take it
op[j] = ip[i] ;
subsquences(ip, i+1 , op , j+1);

}
int main(){
    char a[100] = "abc" , b[100];
    subsquences(a,0,b,0);
    return 0;
}