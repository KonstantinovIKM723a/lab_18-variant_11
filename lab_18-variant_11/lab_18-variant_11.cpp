#include <iostream>
#include "windows.h"
using namespace std;

class SingleRandomMatrixOfFive {
    int data[5] = {};
public:
    SingleRandomMatrixOfFive() {
        for (int i = 0; i < 5; i++) data[i] = rand() % 10;
    };

    int getValueByIndex(int id) {
        return data[id];
    }

    void showData() {
        for (int i = 0; i < 5; i++) cout << data[i] << " ";
        cout << endl;
    }

    SingleRandomMatrixOfFive operator+(SingleRandomMatrixOfFive v2) {
        SingleRandomMatrixOfFive t;
        for (int i = 0; i < 5; i++) t.data[i] = data[i] + v2.data[i];
        return t;
    }
    SingleRandomMatrixOfFive operator-(SingleRandomMatrixOfFive v2) {
        SingleRandomMatrixOfFive t;
        for (int i = 0; i < 5; i++) t.data[i] = data[i] - v2.data[i];
        return t;
    }

    SingleRandomMatrixOfFive operator*(SingleRandomMatrixOfFive v2) {
        SingleRandomMatrixOfFive t;
        for (int i = 0; i < 5; i++) t.data[i] = data[i] * v2.data[i];
        return t;
    };
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    cout << "Перший масив (a): " << endl;
    auto a = SingleRandomMatrixOfFive();
    a.showData();

    cout << "Другий масив (b): " << endl;
    auto b = SingleRandomMatrixOfFive();
    b.showData();

    cout << "Сума масивів (a + b): " << endl;
    auto c = a + b;
    c.showData();

    cout << "Різниця масивів (a - b): " << endl;
    c = a - b;
    c.showData();

    cout << "Різниця масивів (b - a): " << endl;
    c = b - a;
    c.showData();

    cout << "Добуток масивів (a * b): " << endl;
    c = a * b;
    c.showData();
}

