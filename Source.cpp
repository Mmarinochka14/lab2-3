#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "Rus");
    std::cout << "Привет, мир!" << std::endl;

    std::cout << "Введите ваше имя: ";
    std::string name;
    std::cin >> name;

    std::cout << "Привет, " << name << "!" << std::endl;
    return 0;
}
