#include <stdio.h>
#include <string.h>

// int main() {
//     char str1[100] = "Source string";
//     char str2[20];

//     const char *s1 = str1;
//     char *s2 = str2;
//     int max_len_to_copy = sizeof(str2);

//     while(*s1 != '\0' && max_len_to_copy-- > 1) {
//         *s2++ = *s1++;
//     }
//     *s2 = '\0';

//     puts(str2);

//     return 0;
// }



// int main() {
//     char str1[100] = "Source string";
//     char str2[20];

//     strcpy(str2, str1); // куда, откуда

//     puts(str2);
    
//     return 0;
// }



// int main() {
//     char str1[100] = "Source string";
//     char str2[20];

//     int max_len = sizeof(str2) - 1;
//     // лучшая для копирования
//     strncpy(str2, str1, max_len); // куда, откуда, размер
//     str2[max_len] = '\0';

//     puts(str2);
    
//     return 0;
// }

// strlen - для нахождения длины

// int main() {
//     char name[100] = "Yunus";
//     char last_name[15] = "Gadamurov";
    
//     strcat(name, last_name); // к какой строке добавляем, какую строку добавляем

//     puts(name);
//     return 0;
// }

// int main() {
//     char name[100] = "Yunus";
//     char last_name[15] = "Gadamurov";
    
//     size_t max_len = sizeof(last_name) - strlen(last_name) - 1; // 15 - 9 - 1 = 5 - символов, которые можно добавить
//     strncat(last_name, name, max_len); // к какой строке добавляем, какую строку добавляем
//     last_name[sizeof(last_name) - 1] = '\0';

//     puts(last_name);
//     return 0;
// }