#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout <<"Enter a number :";
    cin >> n;
    for(int i=0;i<n;i++){
        num = 1;
        for(int j=0;j<=i;j++){
            cout << num <<" ";
            num = num + 1;
        }
        cout <<"\n";

    }
    return 0;

}
