#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &arr,int x){
    int low =0;
    int high = arr.size() - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == x) return mid;
        if(arr[mid] < x) low = mid + 1;
        else low = mid - 1;
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int result = binarySearch(arr,x);
    if(result == -1) cout << "Element is not present in array"<<"\n";
    else cout <<"Element is present in array and its index is:"<< result <<"\n";
    return 0;

}
