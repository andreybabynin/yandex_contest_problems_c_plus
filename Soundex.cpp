// Известный алгоритм Soundex (https://ru.wikipedia.org/wiki/Soundex) определяет, 
// похожи ли два английских слова по звучанию. На вход он принимает слово и 
// заменяет его на некоторый четырёхсимвольный код. Если коды двух слов совпадают, 
// то слова, как правило, звучат похоже.

// Вам требуется реализовать этот алгоритм. Он работает так:

// - Первая буква слова сохраняется.
// - В остальной части слова:
// буквы, обозначающие, как правило, гласные звуки: a, e, h, i, o, u, w и y — отбрасываются;
// оставшиеся буквы (согласные) заменяются на цифры от 1 до 6, причём похожим по звучанию буквам соответствуют одинаковые цифры:
// 	1: b, f, p, v
// 	2: c, g, j, k, q, s, x, z
// 	3: d, t
// 	4: l
// 	5: m, n
// 	6: r
// - Любая последовательность одинаковых цифр сокращается до одной такой цифры.
// - Итоговая строка обрезается до первых четырёх символов. Если длина строки меньше требуемой, недостающие символы заменяются знаком 0.

// Примеры:

// аmmonium → ammnm → a5555 → a5 → a500
// implementation → implmnttn → i51455335 → i514535 → i514

// Формат ввода
// На вход подаётся одно непустое слово, записанное строчными латинскими буквами. Длина слова не превосходит 20 символов.

// Формат вывода
// Напечатайте четырёхбуквенный код, соответствующий слову.

// ВВОД
// implementation

// ВЫВОД
// i514


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	char w[20];
	string new_s;
	vector<char> first = {'b', 'f', 'p', 'v'};
	vector<char> second = {'c','g','j','k','q','s','x','z' };
	vector<char> third = {'d','t' };
	vector<char> fourth = {'l' };
	vector<char> fifth = {'m', 'n' };
	vector<char> sixth = {'r'};
	cin >> w;
	int len = string(w).length();
	new_s = w[0];
	// create sequence
	for (int i = 1; i < len; i++) {
		if (find(first.begin(), first.end(), w[i]) != first.end()) {
			new_s += '1';}
		else if (find(second.begin(), second.end(), w[i]) != second.end()) {
			new_s += '2';}
		else if (find(third.begin(), third.end(), w[i]) != third.end()) {
			new_s += '3';}
		else if (find(fourth.begin(), fourth.end(), w[i]) != fourth.end()) {
			new_s += '4';}
		else if (find(fifth.begin(), fifth.end(), w[i]) != fifth.end()) {
			new_s += '5';}
		else if (find(sixth.begin(), sixth.end(), w[i]) != sixth.end()) {
			new_s += '6';}
	}
	// check if similar numbers
	len = new_s.length();
	int counter = 2;
	if (len > 2) {
		for (int i = 2; i < len; i++) {
			if (new_s[i] != new_s[i - 1]){
				new_s[counter] = new_s[i];
				counter++;
			}
		}
		new_s = new_s.substr(0, counter);
	}
	len = new_s.length();
	if (len < 4) {
		for (int i = 1; i <= 4 - len; i++) { new_s += '0'; }
	}
	else { new_s = new_s.substr(0, 4); }
	cout << new_s;
}