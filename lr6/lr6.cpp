#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    int a[50];
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 1. Пошук середнього арифметичного додатних елементів
    int count = 0;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            sum += a[i];
            count++;
        }
    }

    if (count > 0) {
        cout << "Середнє арифметичне додатних елементів = " << sum / count << endl;
    }
    else {
        cout << "Додатніх елементів у масиві немає." << endl;
    }

    // 2. Сортування методом екстремальних елементів (вибором)
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    cout << "Масив після сортування за зростанням: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}