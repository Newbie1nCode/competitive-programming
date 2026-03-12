#include<iostream>
using namespace std;
int main(){
    long long a;
    cin>>a;
    long long arr[a];

    for (int i = 0; i < a; ++i){
        cin>>arr[i];
    }
    long long count = 0;

    while(true){
        bool bisa = true;
        for (int i = 0; i < a; ++i){
            if (arr[i] % 2 != 0){
               bisa = false;
                break;
            }
        }
        if (!bisa){
            break;
        }
        for (int i = 0; i < a; ++i){
            arr[i]/=2;
        }
        count++;
    }

    cout<<count;
}
