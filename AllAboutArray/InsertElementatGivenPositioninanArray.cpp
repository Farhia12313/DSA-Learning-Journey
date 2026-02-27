#include <iostream>
#include <vector>
using namespace std;

int main() {  
    vector<int> arr = {10, 20, 30, 40};
  	int ele = 50;
    int pos = 4;
    cout << "Array before insertion\n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
	
  	// Insert element at the given position
    arr.insert(arr.begin() + pos - 1, ele);

    cout << "\nArray after insertion\n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}
