#include<iostream>
using namespace std;
int fact(int m){
  if(m ==0)  return 0;
  else return m*fact(m-1);
}
int main(){
int n;
cout << "Enter number:";
cin >> n;
//for(int i = n; i>=1;i--){


cout << "Factorial = "<< fact(n) <<endl;
return 0;

}


