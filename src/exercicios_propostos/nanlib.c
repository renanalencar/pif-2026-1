/**
 * @author  Renan Costa Alencar
 * @date    2026/03/25
 * @version 0.0.1
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "nanlib.h"

/**
 * @brief Converts all lowercase characters in a string to uppercase
 * 
 * @param str Pointer to a null-terminated string to be converted
 * 
 * @return Pointer to the converted string (same as input parameter)
 * 
 * @note This function modifies the original string in place
 * @note All lowercase letters (a-z) are converted to uppercase (A-Z)
 * @note Non-alphabetic characters remain unchanged
 * @note This function is not part of the standard C library; it may not be 
 *       available on all platforms (commonly available on Windows/DOS systems)
 * 
 * @warning Ensure the string has sufficient space and is writable
 * @warning Behavior is undefined if @c str is NULL
 * 
 * @see strlwr() - converts string to lowercase
 * @see toupper() - converts a single character to uppercase
 */
char* nan_strupr(char *str) {
    if (str == NULL) return NULL; 
    
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper((unsigned char)str[i]);
    }
    
    return str;
}

/**
 * @brief Reverses a string in place.
 * 
 * @param str Pointer to the null-terminated string to be reversed.
 * 
 * @return Pointer to the reversed string (same as input @p str).
 * 
 * @note The string is modified in place. The original string order is lost.
 * 
 * @warning Ensure that @p str points to a writable memory location.
 *          Do not pass a pointer to a string literal.
 */
char* nan_strrev(char *str) {
    if (str == NULL) return NULL;
    
    int inicio = 0;
    int fim = strlen(str) - 1;
    
    while (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        
        inicio++;
        fim--;
    }
    
    return str;
}