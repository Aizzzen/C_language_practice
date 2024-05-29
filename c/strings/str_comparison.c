#include <stdio.h>
#include <string.h>


// int main() {
//     char str1[12] = "Hello";
//     char str2[10] = "Hello";
//     // str1 == str2

//     const char *s1 = str1;
//     const char *s2 = str2;

//     int i = 0;
//     for(; s1[i] != '\0' && s2[i] != '\0'; ++i) {
//         if(s1[i] != s2[i]) {
//             puts("Разные строки");
//             return 0;
//         }
//     }

//     if(s1[i] != s2[i]) {
//         puts("Строки разной длины");
//         return 0;
//     }

//     puts("Строки идентичны");

//     return 0;
// }

// strcmp(s1, s2);
// strncmp(s1, s2, max_len); // сравнивает max_len символов
// // возвращают 0 - если строки равны, < 0 - s1 < s2, > 0 - s1 > s2

int main() {
    const char *strings[] = {
        "Ship", "Shopping", "Shematic", "Super", "Car", "Sherif"
    };

    for(int i = 0; i < sizeof(strings) / sizeof(*strings); ++i) {
        if (strncmp(strings[i], "Sh", 2) == 0) {
            puts(strings[i]);
        }
    }

    return 0;
}
