#include <stdio.h>

// // getchar
// //fgets

// int main() {
//     char str[10];

//     int max_len = sizeof(str), i = 0;
//     char *ptr = str, ch;

//     while((ch = getchar()) != '\n' && i < max_len - 1){
//         ptr[i++] = ch;
//     }
//     ptr[i] = '\0';

//     puts(str);
//     return 0;
// }


// int main() {
//     char str[10];

//     fgets(str, sizeof(str), stdin);

//     puts(str);
//     return 0;
// }