#include <iostream>
#include <string>
// Основная функция
int main(){
	std::string name; // имя пользователя
	std::cout << "Enter your name: "; // запрос имени
	std::cin >> name; // чтение имени
	std::cout << "Hello world from @" << name << std::endl; // вывод припетсвия
	return 0;
}


