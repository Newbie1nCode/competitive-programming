#include<iostream>
using namespace std;
int main(){
    int n; int j = 1;
    cin>>n; int k = 3;
    for (int i = 1; i <= n; ++i){
        while(j <= k){
            cout<<j<<" ";
            j++;
        }
        cout<<"PUM"<<endl;
        j++;
        k+=4;
    }
}
