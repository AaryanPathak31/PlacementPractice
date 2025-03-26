// Pass by Value and Pass by Reference
/*
1. Pass by Value:
- A copy of the variable is passed to the function.
- Changes inside the function do not affect the original variable.

#include <iostream>
using namespace std;

void passByValue(int num) {
    num = 20;  // Changing the value inside function
}

int main() {
    int a = 10;
    passByValue(a);
    cout << "Value of a: " << a; // Output: 10 (unchanged)
    return 0;
}



Pass by Reference:
- The actual memory address of the variable is passed.
- Changes inside the function affect the original variable.

#include <iostream>
using namespace std;

void passByReference(int &num) {
    num = 20;  // Changing the original variable
}

int main() {
    int a = 10;
    passByReference(a);
    cout << "Value of a: " << a; // Output: 20 (changed)
    return 0;
}

📌 Key Difference:
✅ Pass by Value → Original variable unchanged
✅ Pass by Reference → Original variable modified
*/