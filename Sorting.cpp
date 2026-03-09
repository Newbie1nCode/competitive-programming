#include<iostream>
#include<array>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; ++i){
        cin>>arr[i];
    }
    for (int i = 0; i < a; ++i){
        for (int x = i+1; x < a; ++x){
            if (arr[x] < arr[i]){
                int k = arr[x];
                arr[x] = arr[i];
                arr[i] = k;
            }
        }
    }

    for (int i = 0; i < a; ++i){
        cout<<arr[i]<<" ";
    }
}
