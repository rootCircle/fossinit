#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 5;
    int y = 10;
    int z = (x++, y++);
    std::cout << "x = " << x << ", y = " << y << ", z = " << z << std::endl;
    return 0;
}
