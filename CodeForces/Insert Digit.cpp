#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;

        string number;
        cin >> number;

        string maxNumber = number;

        if (d == 0 && number[n - 1] != '0') {
            maxNumber += '0';
        } else if (number[0] - '0' < d) {
            maxNumber = char(d + '0') + number;
        } else {
            bool allDigitsEqual = true;
            for (char digit : number) {
                if (digit != d + '0') {
                    allDigitsEqual = false;
                    break;
                }
            }
            if (allDigitsEqual) {
                maxNumber += char(d + '0');
            } else {
                for (int i = 0; i < n; ++i) {
                    if (number[i] - '0' < d) {
                        maxNumber.insert(i, 1, char(d + '0'));
                        break;
                    }
                }
            }
        }

        cout << maxNumber << endl;
    }

    return 0;
}
