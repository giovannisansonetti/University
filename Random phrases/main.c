#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_CHARS 100

int main(){
    srand(time(NULL));

    char *article[5] = { "the", "a", "one", "some", "any"};
    char *noun[5] = { "boy", "girl", "dog", "town", "car" };
    char *verb[5] = { "drove", "jumped", "ran", "walked", "skipped"};
    char *preposition[5] = { "to", "from", "over", "under", "on"};

    char sentence[MAX_CHARS];

    //article, noun, verb, preposition, article e noun

    for(int i = 0; i < 20; i++){

        int randArticle = rand() % (4 - 0 + 1) + 0;
        int randNoun = rand() % (4 - 0 + 1) + 0;
        int randVerb = rand() % (4 - 0 + 1) + 0;
        int randPreposition = rand() % (4 - 0 + 1) + 0;

        int rand_article = rand() % (4 - 0 + 1) + 0;
        int rand_noun = rand() % (4 - 0 + 1) + 0;

        sentence[0] = '\0';
        
        strcat(sentence, article[randArticle]);
        strcat(sentence, " ");
        strcat(sentence, noun[randNoun]);
        strcat(sentence, " ");
        strcat(sentence, verb[randVerb]);
        strcat(sentence, " ");
        strcat(sentence, preposition[randPreposition]);
        strcat(sentence, " ");
        strcat(sentence, article[rand_article]);
        strcat(sentence, " ");
        strcat(sentence, noun[rand_noun]);

        sentence[0] = toupper(sentence[0]); // capitalizes the first character of the array

        printf("%s\n", sentence);
    }
}
