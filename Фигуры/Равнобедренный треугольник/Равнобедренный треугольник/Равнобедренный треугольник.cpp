﻿#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n = 0;
    int m = 0;
    int k = 0;
    int l = 1;
    cout << "Введите размер N: ";
    cin >> n;
    m = (n - 1) / 2;
    k = m;
    for (int i = 1; i <= m; i++) {
        
        for (int j = 1; j <= k; j++) {
            cout << " ";
            
        }
        k--;
        for (int z = 1; z <= l; z++)
            cout << "*";
        cout << '\n';
        l = l + 2;
    }
    for (int i = 1; i <= n; i++)
        cout << "*";
    _getch; //Для того что бы окно не закрылось
    return 0;
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
