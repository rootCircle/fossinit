#include <iostream>
using namespace std;

int main() {
    int  a = 0, b = 1;
    if (a&b==0) {
        cout << (a&b) << "=" << 0 << endl;
    } else {
        cout << (a&b) << "!=" << 0 << endl;
    }
    return 0;
}
