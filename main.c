#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int guessingAmount = 3;
  bool hasWon = false;
  char secretWord[] = "Solley";
  char currentWord[50];

  while (guessingAmount > 0) {
    printf("Guess the word: ");
    scanf("%s", currentWord);

    if (strcmp(currentWord, secretWord) != 0) {
      guessingAmount--;
    }
    else {
      printf("Congratulation, you found the secret word: %s\n", secretWord);
      return 0;
    }
  }

  printf("Too bad, you haven't found the word, try again later!\n");
  return 0;
}