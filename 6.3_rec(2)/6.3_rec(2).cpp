// використовуючи шаблони функцій для реалізації універсального алгоритму

#include <iostream>
#include <iomanip> 
using namespace std;

template <typename T>
int CountNegativeTemplate(T* a, int size) {
    if (size == 0)
        return 0;
    return (a[0] < 0 ? 1 : 0) + CountNegativeTemplate(a + 1, size - 1);
}

template <typename T>
void ModifyNegativeElementsTemplate(T* a, int size) {
    if (size == 0)
        return;
    if (a[0] < 0)
        a[0] = -a[0]; 
    ModifyNegativeElementsTemplate(a + 1, size - 1);
}

template <typename T>
void PrintTemplate(T* a, const int size) {
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
    PrintTemplate(a, n);

    int negativeCount = CountNegativeTemplate(a, n);
    cout << "Number of negative elements (template function): " << negativeCount << endl;

    ModifyNegativeElementsTemplate(a, n);

    cout << "Modified array (template function): ";
    PrintTemplate(a, n);

    return 0;
}
