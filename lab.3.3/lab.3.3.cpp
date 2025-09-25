// Lab_03_3.cpp
// < Прізвище, ім’я автора >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 18
#include <iostream>
#include <cmath>
#include <iomanip> // Для форматування виводу

using namespace std;

int main()
{
    // Оголошення змінних
    double x;   // Вхідний аргумент
    double R;   // Параметр R
    double R1;  // Параметр R1
    double R2;  // Параметр R2
    double y;   // Результат обчислення функції

    // Введення параметрів R, R1, R2
    cout << "Enter R: ";
    cin >> R;
    cout << "Enter R1: ";
    cin >> R1;
    cout << "Enter R2: ";
    cin >> R2;

    // Перевірка на можливе ділення на нуль в останніх гілках
    if (R >= 3) {
        cout << "\n Fault" << endl;
        return 1;
    }

    // Введення аргументу x
    cout << "Enter x: ";
    cin >> x;

    // --- Розгалуження в повній формі (Варіант 18) ---

    if (x <= -2 * R)
    {
        // 1. Інтервал x <= -2R: y = (R1/R) * (x + 2R)
        y = (R1 / R) * (x + 2 * R);
    }
    else if (x <= -R)
    {
        // 2. Інтервал -2R < x <= -R: y = -sqrt(R^2 - (x + R)^2)
        // Використовуємо pow(база, показник) для піднесення до степеня R*R
        y = -sqrt(R * R - pow(x + R, 2));
    }
    else if (x <= 0)
    {
        // 3. Інтервал -R < x <= 0: y = sqrt(R1^2 - x^2)
        y = sqrt(R1 * R1 - x * x);
    }
    else if (x <= 2 * R)
    {
        // 4. Інтервал 0 < x <= 2R: y = -sqrt(R^2 - (x - R)^2)
        y = -sqrt(R * R - pow(x - R, 2));
    }
    else if (x < 6)
    {
        // 5. Інтервал 2R < x < 6: y = - (R2 / (6 - 2R)) * (x - 2R)
        y = -(R2 / (6 - 2 * R)) * (x - 2 * R);
    }
    else // x >= 6
    {
        // 6. Інтервал x >= 6: y = -R2
        y = -R2;
    }

    // --- Виведення результату ---
    cout << "\nResult:\n";
    cout << "y = " << fixed << setprecision(5) << y << endl; // Вивід з 5 знаками після коми

    return 0;
}