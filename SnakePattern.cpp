#include<iostream>
using namespace std;
int main(){
    long long n; long long row = 0;
    cin>>n;
    while(n >= 4){
        n-=4;
        row++;
    }

    int col;
    if (row % 2 == 0){
        col = n;
    }else{
        col = 3 - n;
    }

    cout<<row<<" "<<col;
}
