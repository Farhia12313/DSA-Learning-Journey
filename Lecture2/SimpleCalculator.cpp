#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout <<"Enter two number :";
    cin >> a >> b;
    int add = a + b;
    cout << "Addition = " << add <<"\n";
    int sub = a - b;
    cout <<"Subtraction = " << sub <<"\n";
    int mul = a * b;
    cout <<"Multiplication = "<< mul <<"\n";
    double div = a /(double) b;
    cout <<"Divition = "<< div <<"\n";
    int mod = a % b;
    cout << "Modulus = "<< mod <<"\n";
    return 0; 
}
