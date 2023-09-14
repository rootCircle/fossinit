#include <iostream>
using namespace std;

int main (void) {
    float pie;
    cout << "Just Type 3.14 and enter\n";
    cin >> pie;
    if (pie == 3.14) {
        cout << "pie = 3.14";
    }
    else {
        cout << "pie not equal to 3.14";    
    }

    cout << endl;

    return 0;
}
