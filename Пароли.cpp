// Вася хочет поменять свой пароль от электронной почты, потому что боится, что его ящик мог быть взломан. 
// По правилам новый пароль должен удовлетворять таким ограничениям:

// - состоять из символов таблицы ASCII с кодами от 33 до 126;
// - быть не меньше 8 символов и не длиннее 14;
// - из 4 классов символов — большие буквы, маленькие буквы, цифры, прочие символы — в пароле должны присутствовать 
// не менее трёх любых.

// Помогите Васе написать программу, которая проверит, что его новый пароль годится.
// Формат ввода
// На входе дана одна строка — новый Васин пароль.

// Формат вывода
// Выведите YES, если Васин пароль удовлетворяет требованиям, и NO в противном случае.

// ВВОД
// Vasya123

// ВЫВОД
// YES


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a_start = 33;
	int a_end = 126;
	int length_min = 8;
	int length_max = 14;
	char p[14];
	vector<string> v = { "YES", "NO" };
	int answer = 0;
	cin.getline(p, 14);
	vector<int> types = { 0,0,0,0 }; //stand for большие буквы, маленькие буквы, цифры, прочие символы

	int len = string(p).length();

	if (len > length_max || len < length_min) {
		cout << v[1];
	}
	else {
		for (int i = 0; i < len; i++) {
			if (int(p[i]) < a_start || int(p[i]) > a_end) {
				answer = 1;
				break;
			}
			else {
				if (int(p[i]) >= 65 && int(p[i]) <= 90) { types[0]++; }
				else if (int(p[i]) >= 97 && int(p[i]) <= 122) { types[1]++; }
				else if (int(p[i]) >= 48 && int(p[i]) <= 57) { types[2]++; }
				else { types[3]++; }
			}
		}
		if (answer == 1) { cout << v[1]; }
		else {
			int ans = count(types.begin(), types.end(), 0);
			if (ans > 1) { cout << v[1]; }
			else { cout << v[0]; }
		}
	}
}