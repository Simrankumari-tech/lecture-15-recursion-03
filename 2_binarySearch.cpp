#include<iostream>
using namespace std;
int binarysearch(int *a , int s, int e , int key ){
// base case
if(s> e) return -1;

// recursive case
int mid = (s + e ) /2 ;
if(a[mid] ==  key ) return mid ;
else if(a[mid] < key) return binarysearch(a,mid +1, e, key) ;
else return binarysearch(a,s , mid -1 , key);

}
int main(){
int a[] = {1,6,8,19};
int n = sizeof(a) / sizeof(int);
cout << binarysearch(a,0, n-1 , 19);



    return 0;
}