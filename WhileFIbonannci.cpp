#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = 0; int b = 1;
    int count = 0;
    while(count < n){
        cout<<a<<" ";
        int next = a + b;
        a = b;
        b = next;
        count++;
    }

    return 0;
}
