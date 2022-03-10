#include <iostream>
#include <string>
using namespace std;

string repeatStr(string str, int n) {
	string newStr;
	for (int i = 0; i < n; i++)
		newStr += str;
	return newStr;
}
int compareSizes(string str1, string str2) {
	if (str1.length() > str2.length())
		return 1;
	if (str2.length() > str1.length())
		return -1;
	return 0;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	string str, str2;

	//Задача 1
	/*cout << "Задача 1\nВведите строку:\n";
	getline(cin, str);
	cout << "Введите число:\n";
	cin >> n;
	cout << repeatStr(str, n) << "\n\n";*/

	//Задача 2
	cout << "Задача 2\nВведите первую строку:\n";
	getline(cin, str);
	cout << "Введите вторую строку:\n";
	getline(cin, str2);
	if (compareSizes(str, str2) == 1)
		cout << "Длина 1 строки больше\n\n";
	else
		if (compareSizes(str, str2) == -1)
			cout << "Длина 2 строки больше\n\n";
		else
			cout << "Длины строк равны\n\n";


	/*string str;
	cout << "Введите строку:\n";
	getline(cin, str);
	//str[0] = toupper(str[0]); //toupper() - заглавные буквы
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);//tolower() - маленькие буквы
	cout << str << endl;*/
	
	
	/*int n;
	cout << "Введите число: ";
	cin >> n;
	string str = to_string(n);//to_string() - переход в string
	//str += "!";
	string newStr;
	for (int i = str.length() - 1; i >= 0; i--)
		newStr += str[i];
	int newN = stoi(newStr);
	cout << newN << endl;*/




	/*string str1, str2;
	cout << "Введите строку:\n";
	getline(cin, str1);
	//cout << "Введите подстроку:\n";
	//getline(cin, str2);
	//str1.insert(2, str2);//insert() - вставить строку в другую
	//str1.replace(3, 2, str2);// replace(с кокого номера вставлять, сколько символов вырезать, куда вставить) - подстановка строки с выерезанием символов из другой
	//int index = str1.find(str2, 6);//find() - ищет индекс 
	//int index = str1.rfind(str2, 6);//rfind() - ищет индекс с конца
	string str3 = str1.substr(5, 4);//substr() - вырезает часть строки
	cout << str3 << endl;*/



	/*int len = str.size();
	cout << "Длина строки \"" + str + "\" = " << len << endl;
	cout << str.length() << endl;*/
	




	/*//cout << "Введите слово: ";
	//cin >> str;
	//cout << "Вы ввели слово \"" + str + "\"\n";
	cout << "Введите предложение: ";
	getline(cin, str);
	cout << "Вы ввели:\n" + str << endl;
	str = "Hi!";
	
	for (int i = 2; i >= 0; i--)
		cout << str[i];
	cout << endl;

	str = "Hello\nworld!";
	cout << str << endl;*/




	/*str = "Hello world!";
	cout << str << endl;
	str = "Bye world!";
	cout << str << endl;
	str = ""; //Обнулить строку
	str = "oranges"; 
	string str2 = "bananas";
	cout << str + " and " + str2 + "\n";
	string str3 = str + " without " + str2;
	cout << str3 << endl;

	string str4 = "apples";
	str4 += " and kiwi";
	cout << str4 << endl;

	if (str == "oranges")
		cout << "TRUE\n";
	else
		cout << "FALSE\n";*/




	/*// 1-й способ вывода строк
	char word[5] = { 'H', 'e', 'y', '!', '\0' };
	for (int i = 0; i < 5; i++)
		cout << word[i];
	cout << endl;

	// 2-й способ
	char line[] = "Hello world!";
	cout << line << endl;

	cout << line[1] << line[2] << endl;
	//char sym = line[3];
	line[0] = 'L';
	cout << line << endl;*/

	return 0;
}