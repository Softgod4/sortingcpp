#include <iostream>
#include <cstdlib>
#include <ctime>

int CaesarCode(int randnum, std::string caesarstring) {
    std::string alphabet[2] {"A", "B"};
    return 0;
}

int main() {
    char text[255];
    srand(time(0));
    int randomNumber;
    randomNumber = rand() % 33;
    std::cout << "Введите текст который хотите зашифровать Шифром цезаря:\n";
    std::cin >> text;
    CaesarCode(randomNumber, text);
    return 0;
}