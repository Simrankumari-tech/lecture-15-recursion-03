#include<iostream>  // abc, acb , bca,bac , cab, cba
using namespace std;
void permutations(char* a, int i){
    // base case
if(a[i] == '\0'){
    cout << a << endl;
    return ;
}
    // recursive case
    for(int j= i; a[j] != '\0' ; j++){
        swap(a[i] , a[j]);    // padosi ka bacha laye
        permutations(a , i+1);  // jo kaam krna tha kiye
          swap(a[i] , a[j]); // shi salamat wpis bhj diye
    }
}

int main(){
char a[] = "abc";
permutations(a,0);



    return 0;
}