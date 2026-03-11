#include<iostream>
using namespace std;
int main(){
    long long  n; long long count = 0;
    cin>>n;
    long long num;
    cin>>num;
    while(num > 0){
        int digit = num % 10;
        count+=digit;
        num/=10;
    }
    cout<<count;
}
