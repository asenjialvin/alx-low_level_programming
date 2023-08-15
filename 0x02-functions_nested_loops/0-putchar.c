#include "main.h"

/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
    char c[] = "_putchar";
    int i = 0;

    while (c[i] != '\0')
    {
        putchar(c[i]);  // putchar function to print each character
        i++;
    }
    putchar('\n');  // putchar to print a newline character

    return (0);
}
