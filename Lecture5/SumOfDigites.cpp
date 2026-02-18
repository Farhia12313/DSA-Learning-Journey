#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        int lastDig = n%10;
        n/=10;
        sum += lastDig;
    }
    return sum;
}
int main(){
    int n;
    cin >>n ;
    cout << "Sum of digites :" << sumOfDigits(n) << endl;
    return 0;
}
