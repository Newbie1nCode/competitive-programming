#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int j = 0;
    for (int i = 1; i <= a; ++i){
        int sum = 0; //reset angka
        int x = i;

        // khusus code while ini adalah mengambil digit,
        // satu persatu dari belakang
        while(x > 0){
            int digit = x % 10;
            sum+=digit;
            x/=10;
        }
        if (sum >= b && sum <= c){
            j+=i;
        }
    }
    cout<<j;
}
