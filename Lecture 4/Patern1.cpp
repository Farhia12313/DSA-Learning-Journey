#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char ch ;
    cout <<"Enter a number :";
    cin >> n;
    ch = 'A';
    for(int i = 0;i<n;i++){
        
        for(int j=0;j<n;j++){
            cout << ch <<" ";
            ch = ch + 1;
        }
        cout <<"\n";
    }
    return 0;

}
