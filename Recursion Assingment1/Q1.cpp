/*6< Print an increasing-decreasing sequence using recursion
Example:
I" n = 5, the output should be:
1 2 3 4 5 4 3 2 1*/
#include<iostream>
using namespace std;
 void print(int x, int n){
        if(x>=n){
            cout<<n<<" ";
            return;
    }
    cout<<x<<" ";
    print(x+1,n);
    cout<<x<<" ";
}
int main(){
    int n;
    cout<<"Enter : ";
    cin>>n;
    print(1,n);
}

/*#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return ;
    cout<<n<<" ";
    print(n-1);
     cout<<n<<" ";

}
int main(){
    int n;
    cout<<"Enter : ";
    cin>>n;
    print(n);
}*/