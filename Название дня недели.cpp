// По номеру дня недели (нумерация с единицы) выведите его сокращенное название. 
// Названия должны быть такими:
// mon
// tue
// wed
// thu
// fri
// sat
// sun

// Формат ввода
// Число от 1 до 7.

// Формат вывода
// Название дня недели из трех маленьких латинских букв.

// ВВОД
// 1

// ВЫВОД
// mon

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	vector<string> v = { "mon", "tue", "wed", "thu", "fri", "sat", "sun" };
	cin >> n;
	cout << v[n - 1];
}
