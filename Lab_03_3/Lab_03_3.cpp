// Lab_03_3.cpp
// < �������� ��� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 16

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -R)
		y = (R * (x + 2)) / (R - 2);

	else
		if (-R < x && x <= 0)
			y = sqrt(R * R - x * x) - R;

		else
			if (0 < x && x <= 2 * R)
				y = 2 * R - sqrt(4 * R * R - x * x);

			else
				if (2 * R <= x <= 4)
					y = -R;

				else
					y = (R * (x - 6)) / 2;

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();

	return 0;
}
