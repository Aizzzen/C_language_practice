#include <iostream>

int main() {
    // std::cout << "Hello world" << std::endl;

    char str[] = "Yunus Gadamurov";
    short age = 21;
    double weight = 88;

    // std::cin >> str; // до первого пробельного символа
    // getline(cin, str);

    std::cin >> age >> weight;
    std::cout << str << "\n" << age << '\n' << weight << std::endl;
    return 0;
}
