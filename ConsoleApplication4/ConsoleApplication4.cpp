// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <time.h>
using namespace std;


int* create_mas(int size = 10) {
    srand(time(NULL));
    int* mas = new int[size];
    for (int i = 0; i < size; i++)
        mas[i] = -100 + (rand() % 201);
    return mas;
}

void print_mas(int* mas, int size = 10) {
    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
}


void zad_1() {
    // Исключение из массива отрицательных чисел
    int n = 20;
    int* mas = create_mas(n);
    cout << "start massiv" << endl;
    print_mas(mas, n);

    int polojit = 0;
    for (int i = 0; i < n; i++) {
        if (mas[i] >= 0)
            polojit++;
    }

    int* new_arr = new int[polojit];
    for (int i = 0, j = 0; i < n; i++) {
        if (mas[i] >= 0)
            new_arr[j++] = mas[i];
    }

    cout << "end massiv" << endl;
    print_mas(new_arr, polojit);

    delete[]mas;
    delete[]new_arr;
}


void zad_2() {
    // Вывод гласных
    int ascii[6] = { 97, 101, 105, 111, 117, 121 }; // номера ASCII гласных
    int step = 32;
    string str;
    cout << "vvedine stroky: " << endl;
    cin >> str;
    bool glas;
    for (int i = 0; i < str.size(); i++) {
        glas = false;
        for (int j = 0; j < 6; j++) {
            if (int(str[i]) == ascii[j] || int(str[i]) == (ascii[j] - 32)) {
                glas = true;
                break;
            }
        }
        if (glas) {
            cout << str[i] << " ";
        }
    }
    cout << endl;
}


int main()
{
    zad_1();
    zad_2();

}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
