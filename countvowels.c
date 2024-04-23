#include <stdio.h>
#include <ctype.h> 

int countVowels(const char *sentence) {
    int count = 0;
    const char *ptr = sentence;

    while (*ptr != '\0') {
        char c = tolower(*ptr); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        ptr++;
    }

    return count;
}

int main() {
    char sentence[100]; 
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int vowelCount = countVowels(sentence);
    printf("Number of vowels in the sentence: %d\n", vowelCount);

    return 0;
}
