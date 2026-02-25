#include<bits/stdc++.h>
using namespace std;
int search(vector<int>&arr,int x){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==x) return i;
       
    }
      return -1;
}
int main(){
    int x;
    cin >> x;
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    int result = search(arr,x);
    if(result == -1) cout <<"Element address is not founded"<<"\n";
    else
    cout << "Element address is founded and it's Index no:" << result <<"\n";
    return 0;
}
