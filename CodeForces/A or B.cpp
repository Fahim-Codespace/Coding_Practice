#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    for(int i = 0; i < t; i++) {
        char str[6];
        int c = 0;
        cin.getline(str, 6);
        for(int j = 0; str[j] != '\0'; j++) {
            if(str[j] == 'A') {
                c++;
            }
        }
        if(c >= 3) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    }
    return 0;
}
