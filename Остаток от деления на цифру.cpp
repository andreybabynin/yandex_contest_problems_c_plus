// Напишите программу, вычисляющую остаток от деления заданного «длинного» числа на заданную цифру.

// Формат ввода
// В первой строке задана цифра K (1≤K≤9). Во второй строке задано натуральное число N, 
// состоящее из не более чем 250 цифр.

// Формат вывода
// Выведите остаток от деления N на K.

// ВВОД
// 5 
// 123456789

// ВЫВОД
// 4

#include <iostream>
#include <string>
using namespace std;

int main() {
	string number;
	int n;
	int mod = 0;
	cin >> n;
	cin >> number;
	int len_n = number.length();
	
	for (int i = 0; i < len_n; i++) {
		string m(1, number[i]);
		mod = (mod * 10 + stoi(m)) % n;
	}
	cout << mod << endl;
}