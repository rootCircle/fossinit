#include <iostream>

int main() {
    int x = 5;
    if (true) {
        int x = 10;
    }
    std::cout << x << std::endl;
    return 0;
}
