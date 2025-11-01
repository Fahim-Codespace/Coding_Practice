#include <iostream>

using namespace std;

bool isComposite(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;


    int a = n + 1;


    int b = a - n;
    while (!isComposite(b) || !isComposite(a)) {
        a++;
        b = a - n;
    }


    cout << a << " " << b << endl;

    return 0;
}

