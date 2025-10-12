#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    int count = 0;

    for (int i = 0; i < t; i++) {
        char str[10];
        cin.getline(str, 10);

        for (int j = 0; j < strlen(str) - 1; j++) {
            if (str[j] == '+' && str[j+1] == '+') {
                count++;
            } else if (str[j] == '-' && str[j+1] == '-') {
                count--;
            }
        }
    }

    cout << count << endl;

    return 0;
}
