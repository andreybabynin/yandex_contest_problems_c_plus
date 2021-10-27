// Дана строка, состоящая из строчных латинских букв и пробелов. 
// Проверьте, является ли она палиндромом без учета пробелов (например, "аргентина манит негра").

// Формат ввода
// На вход подается 1 строка длины не более 100, содержащая пробелы. Подряд может идти произвольное число пробелов.

// Формат вывода
// Необходимо вывести yes, если данная строка является палиндромом, и no в противном случае.

// Пример 1
// ВВОД
// kk

// ВЫВОД
// yes

// Пример 2
// ВВОД
// ok

// ВЫВОД
// no

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	char str1[100];
	int count = 0;
	int answer = 0;
	vector<string> ans={ "yes", "no" };
	cin.getline(str1, 100);
	
	//eliminate spaces
	for (int i = 0; str1[i]; i++) {
		if (str1[i] != ' ') {
			str1[count++] = str1[i]; 
		}				   
	}
	//check palindrome
	string new1 = str1;
	new1 = new1.substr(0, count);
	int n = count / 2;
	int i = 0;
	while (n!=i) {
		if (new1[i] != new1[count -i-1]) {
			answer = 1;
			break;
		}
		i++;
	}
	cout << ans[answer] << endl;
}


