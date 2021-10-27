// Длина Московской кольцевой автомобильной дороги — 109 километров. 
// Байкер Вася стартует с нулевого километра МКАД и едет со скоростью v километров в час. 
// На какой отметке он остановится через t часов?

// Формат ввода
// Программа получает на вход значение v и t. Если v > 0, то Вася движется в положительном направлении по МКАД, 
// если же значение v < 0, то в отрицательном. 
// (Гарантируется, что исходные числа — целые и находятся в промежутке от -1000 до +1000).

// Формат вывода
// Программа должна вывести целое число от 0 до 108 — номер отметки, на которой остановится Вася.

// ВВОД
// 60
// 2

// ВЫВОД
// 11

#include <iostream>
using namespace std;

int main() {
	int v;
	int t;
	int position = 0;
	cin >> v;
	cin >> t;
	int mkad = 109;
	int proxy = (v * t) % mkad;
	if (v >= 0) {
		position = proxy;
	}
	else {
		if (proxy == 0) {
			position = 0;
		}
		else {
			position = mkad + proxy;
		}
	}
	cout << position;
}