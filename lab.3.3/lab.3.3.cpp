// Lab_03_3.cpp
// < �������, ��� ������ >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 18
#include <iostream>
#include <cmath>
#include <iomanip> // ��� ������������ ������

using namespace std;

int main()
{
    // ���������� ������
    double x;   // ������� ��������
    double R;   // �������� R
    double R1;  // �������� R1
    double R2;  // �������� R2
    double y;   // ��������� ���������� �������

    // �������� ��������� R, R1, R2
    cout << "Enter R: ";
    cin >> R;
    cout << "Enter R1: ";
    cin >> R1;
    cout << "Enter R2: ";
    cin >> R2;

    // �������� �� ������� ������ �� ���� � ������� �����
    if (R >= 3) {
        cout << "\n Fault" << endl;
        return 1;
    }

    // �������� ��������� x
    cout << "Enter x: ";
    cin >> x;

    // --- ������������ � ����� ���� (������ 18) ---

    if (x <= -2 * R)
    {
        // 1. �������� x <= -2R: y = (R1/R) * (x + 2R)
        y = (R1 / R) * (x + 2 * R);
    }
    else if (x <= -R)
    {
        // 2. �������� -2R < x <= -R: y = -sqrt(R^2 - (x + R)^2)
        // ������������� pow(����, ��������) ��� ��������� �� ������� R*R
        y = -sqrt(R * R - pow(x + R, 2));
    }
    else if (x <= 0)
    {
        // 3. �������� -R < x <= 0: y = sqrt(R1^2 - x^2)
        y = sqrt(R1 * R1 - x * x);
    }
    else if (x <= 2 * R)
    {
        // 4. �������� 0 < x <= 2R: y = -sqrt(R^2 - (x - R)^2)
        y = -sqrt(R * R - pow(x - R, 2));
    }
    else if (x < 6)
    {
        // 5. �������� 2R < x < 6: y = - (R2 / (6 - 2R)) * (x - 2R)
        y = -(R2 / (6 - 2 * R)) * (x - 2 * R);
    }
    else // x >= 6
    {
        // 6. �������� x >= 6: y = -R2
        y = -R2;
    }

    // --- ��������� ���������� ---
    cout << "\nResult:\n";
    cout << "y = " << fixed << setprecision(5) << y << endl; // ���� � 5 ������� ���� ����

    return 0;
}