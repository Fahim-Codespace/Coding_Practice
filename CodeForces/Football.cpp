#include <iostream>
#include <string>
using namespace std;

int main() {
    string positions;
    cin >> positions;
    if(positions.length() < 7){
        cout << "NO" << endl;
    }
    else{

    bool dangerous = false;
    for (int i = 0; i < positions.length() - 6; i++) {
        if (positions[i] == '0' && positions.substr(i, 7) == "0000000") {
            dangerous = true;
            break;
        } else if (positions[i] == '1' && positions.substr(i, 7) == "1111111") {
            dangerous = true;
            break;
        }
    }

    if (dangerous) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }

    return 0;
}
