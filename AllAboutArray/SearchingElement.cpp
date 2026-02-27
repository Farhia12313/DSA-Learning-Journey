#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int target = 30;
    int n = sizeof(arr) / sizeof(arr[0]);
    bool found = false;

    // Linear search using traversal
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            found = true;
            break;
        }
    }

    if(found) {
        cout << "Element found!" << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
