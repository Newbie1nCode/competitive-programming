#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int arr[a];
        for (int i = 0; i < a; ++i){
            cin>>arr[i];
        }

        for (int i = 0; i < a; ++i){
            int mx = arr[i];
            for (int j = i; j < a; ++j){
                if (arr[j] > mx){
                    mx = arr[j];
                }
                cout<<mx<<" ";
            }
        }
        cout<<endl;
    }
}
