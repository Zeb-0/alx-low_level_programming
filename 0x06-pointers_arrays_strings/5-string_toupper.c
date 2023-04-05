#include "main.h"
/**
 * string_toupper - Converts all lowercase characters for uppercase
 * @a: String
 * Return: String as a pointer
 */
char *string_toupper(char *a);

char *string_toupper(char *a){
        int i;

        for (i = 0; a[i] != '\0'; i++){
                if (a[i] >= 'a' && a[i] <= 'z'){
                        a[i] = (a[i] - 'a') + 'A';
                }
        }
        return (a);
}
