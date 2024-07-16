/*2. Write a program to print the sum fo all odd number between a to b (inclusive) using
Recursion.
*/
#include<iostream>
using namespace std;
void print(int x,int n){
    if(x>n) return;
    if(x%2 !=0) cout<<x<<" ";
    print(x+1,n);
   
}
int main(){
    int a,b;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    print(a,b);
}