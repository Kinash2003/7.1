// 7.1.cpp 
#include <iostream>
#include <array>
#include <ctime>
#include <Windows.h> 
using namespace std;
void create(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
}
void print(array<int, 100> arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int avg(array<int, 100> arr, int n)
{
    int count = 0;
    double summ = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
        {
            summ += arr[i];
            count++;
        }
    return summ / count;
}
int main()
{
    srand((unsigned int)time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << " n =  "; cin >> n;
    array<int, 100> arr = { 0 };
    create(arr, n);
    print(arr, n);
    cout << " Середнє арифметичне парних елементів = " << avg(arr, n) << endl;
    return 0;
}

 
