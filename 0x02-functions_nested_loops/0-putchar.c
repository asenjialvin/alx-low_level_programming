#include "main.h"

/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
    char text[] = "_putchar";
    int i = 0;

    while (text[i] != '\0')
    {
        putchar(text[i]);  // Use putchar function to print each character
        i++;
    }
    putchar('\n');  // Use putchar to print a newline character

    return (0);
}
