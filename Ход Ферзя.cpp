// Ход ферзя

// Шахматный ферзь ходит по диагонали, горизонтали или вертикали. 
// Даны две различные клетки шахматной доски. 
// Определите, может ли ферзь попасть с первой клетки на вторую одним ходом.

// Формат ввода

// Программа получает на вход четыре числа от 1 до 8 каждое, 
// задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.

// Формат вывода

// Программа должна вывести YES, если из первой клетки ходом ферзя можно попасть во вторую, 
// или NO в противном случае.

// Пример 1
// ВВОД
// 1
// 1
// 2
// 2

// ВЫВОД
// YES


// Пример 2
// ВВОД
// 5
// 6
// 3
// 3

// ВЫВОД
// NO

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int first_col, first_row, second_col, second_row;
	vector<string> v = { "no", "yes" };
	cin >> first_col;
	cin >> first_row;
	cin >> second_col;
	cin >> second_row;
	int res = 0;
	if (abs(first_col - second_col) == 0 || abs(first_row - second_row) == 0) {
		res = 1;
	}
	else {	
		if (abs(first_col - second_col) == abs(first_row - second_row)) {
			res = 1;
		}
	}
	cout << v[res] << endl;
}