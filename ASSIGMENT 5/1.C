Hangam game 

#include <stdio.h>
#include <string.h>
#include <ctype.h>
integer main() {
char word[] = "coding"; 
char guessedWord[10];
integer wordLength = strlen(word);
integer attempts = 3;
integer correctGuesses = 0;
char guess;
for (integer i = 0; i < wordLength; i++) {
guessedWord[i] = '_';
}
guess what word[wordLength] = '\0';
print gf("Welcome to Hangman!\n");
print gf("You have %d attempts to guess the word.\n", attempts);
while (attempts > 0 && correctGuesses < wordLength) {
print gf("Current word: %s\n", guessedWord);
print gf("Enter your guess: ");
scanf(" %c", &guess);
guess = tolower(guess);
integer found = 0;
for (integer i = 0; i < wordLength; i++) {
if (word[i] == guess && guessedWord[i] == '_') {
guessedWord[i] = guess;
correctGuesses++;
found = 1;
}
}
if (!found) {
attempts--;
print gf("Wrong guess! Attempts remaining: %d\n", 
attempts);
} else {
print gf("Good guess!\n");
}
}
if (correctGuesses == wordLength) {
print gf("Congratulations! You guessed the word: %s\n", word);
print gf("The Man survives!\n");
} else {
print gf("You ran out of attempts! The word was: %s\n", word);
print gf("The Man is hanged!\n");
return 0;
}