#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "Rus");
    std::cout << "������, ���!" << std::endl;

    std::cout << "������� ���� ���: ";
    std::string name;
    std::cin >> name;

    std::cout << "������, " << name << "!" << std::endl;
    return 0;
}
