#include<iostream>
using namespace std;
int main(){
    while(true){
        int n,m;
        int sum = 0;
        cin>>n>>m;
        if (n <= 0 || m <= 0){
            break;
        }
        int max = n;
        int min = m;
        if (min > max){
            min =n;
            max = m;
        }
        while(min <= max){
            sum+=min;
            cout<<min<<" ";
            min++;
        }
        cout<<"sum "<<"="<<sum<<endl;
    }
}
