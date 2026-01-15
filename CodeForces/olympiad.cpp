#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int count = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        bool flag = false;
        if (arr[i] == 0)
            continue;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                flag = true;
                break;
            }
        }
        if (!flag)
            count++;
    }
    cout << count << endl;
    return 0;
}
