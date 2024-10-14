// за допомогою звичайних функцій

#include <iostream>
#include <iomanip> 
using namespace std;

int CountNegative(int* a, int size) {
    if (size == 0)
        return 0;
    return (a[0] < 0 ? 1 : 0) + CountNegative(a + 1, size - 1);
}

void ModifyNegativeElements(int* a, int size) {
    if (size == 0)
        return;
    if (a[0] < 0)
        a[0] = -a[0];
    ModifyNegativeElements(a + 1, size - 1);
}

void Print(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << endl;
}

int main() {
    const int n = 6;
    int a[n] = { -5, 3, -1, 7, -6, 2 };

    cout << "Initial array: ";
    Print(a, n);

    int negativeCount = CountNegative(a, n);
    cout << "Number of negative elements: " << negativeCount << endl;

    ModifyNegativeElements(a, n);

    cout << "Modified array: ";
    Print(a, n);

    return 0;
}

