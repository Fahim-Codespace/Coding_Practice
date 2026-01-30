#include <iostream>
using namespace std;

int main() {
    int n, t;
    char str[51];

    cin >> n >> t;
    cin.ignore();

    cin.getline(str, 51);

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (str[j] == 'B' && str[j + 1] == 'G') {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
                j++;
            }
        }
    }
    cout << str << endl;

    return 0;
}
