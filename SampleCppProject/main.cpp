#include <iostream>
#include "utils.h"

using namespace std;

int main() {
    cout << "=== Simple C++ Program ===" << endl;

    int a = 10, b = 20;

    cout << "Sum: " << add(a, b) << endl;
    cout << "Difference: " << subtract(a, b) << endl;

    return 0;
}
