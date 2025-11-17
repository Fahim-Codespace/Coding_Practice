#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[101];
    cin.getline(str, 101);

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            if ((str[i] > str[j]) && (str[i] == '1' || str[i] == '2' || str[i] == '3' ) && (str[j] == '1' || str[j] == '2' || str[j] == '3' )) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    cout << str << endl;

    return 0;
}
