#include "main,h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * generate_random_char - Generates a random character for the password.
 *
 * Return: The generated random character.
 */
char generate_random_char()
{
    // ASCII range for valid characters in the password
    const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int random_index = rand() % (sizeof(valid_chars) - 1);
    return valid_chars[random_index];
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main()
{
    srand(time(NULL)); // Seed the random number generator with the current time

    char password[PASSWORD_LENGTH + 1]; // +1 for null terminator

    // Generate the random password
    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = generate_random_char();
    }
    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password

    // Print the generated password
    printf("Generated Password: %s\n", password);

    return 0;
}

