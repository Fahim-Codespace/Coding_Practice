#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100);

    int count[256] = {0}; // Initialize an array to count occurrences of each character
    int uniqueChars = 0;

    // Count occurrences of each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i]] == 0) {
            uniqueChars++;
        }
        count[str[i]]++;
    }

    if (uniqueChars % 2 != 0) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}
