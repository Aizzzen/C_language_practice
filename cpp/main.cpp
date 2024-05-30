#include <iostream>


namespace firstSpace {
void foo() {
    std::cout << "Hello from space 1" << std::endl;
}
}

namespace secondSpace {
void foo() {
    std::cout << "Hello from space 2" << std::endl;
}
}

int main() {
    firstSpace::foo();
    secondSpace::foo();

    // std::cout << "Hello world" << std::endl;

    // char str[] = "Yunus Gadamurov";
    // short age = 21;
    // double weight = 88;

    // // std::cin >> str; // до первого пробельного символа
    // // getline(cin, str);

    // std::cin >> age >> weight;
    // std::cout << str << "\n" << age << '\n' << weight << std::endl;
    // return 0;
}
