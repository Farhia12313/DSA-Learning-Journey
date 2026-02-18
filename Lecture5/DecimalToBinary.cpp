#include<bits/stdc++.h>
using namespace std;
int decToBinary(int n){
    int ans = 0,pow = 1;
    while(n > 0){
        int rem = n % 2;
        n /= 2;
        ans += (rem*pow);
        pow *= 10;
    }
    return ans;//binary form
}
int main(){
    int n ;
    cin >> n;
    cout << decToBinary(n) <<"\n";
    return 0;
}
