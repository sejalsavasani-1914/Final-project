#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<time.h> 
#include<ctype.h> 
const int SEN_LEN = 80; 
const int MAX_SEN = 20; 
const char* ARTICLES[] = {"the", "a", "one", "some", "any"}; 
const char* NOUNS[] = {"boy", "girl", "dog", "town", "car"}; 
const char* VERBS[] = {"drove", "jumped", "ran", "walked", "skipped"}; 
const char* PREPOSITIONS[] = {"to", "from", "over", "under", "on"};
const char* ARTICLES1[] = {"the", "a", "one", "some", "any"}; 
const char* NOUNS1[] = {"boy", "girl", "dog", "town", "car"}; 
const int ARTICLES_SIZE = sizeof(ARTICLES)/sizeof(ARTICLES[0]); 
const int NOUNS_SIZE = sizeof(NOUNS)/sizeof(NOUNS[0]); 
const int VERBS_SIZE = sizeof(VERBS)/sizeof(VERBS[0]); 
const int PREPOSITIONS_SIZE = sizeof(PREPOSITIONS)/sizeof(PREPOSITIONS[0]);
const int ARTICLES1_SIZE = sizeof(ARTICLES1)/sizeof(ARTICLES1[0]); 
const int NOUNS1_SIZE = sizeof(NOUNS1)/sizeof(NOUNS1[0]); 
char* generateSentence() 
{ 
    char* sentence = calloc((SEN_LEN+1), sizeof(char)); 
//Build Sentence 
    strcat(sentence, ARTICLES[rand()%ARTICLES_SIZE]); 
    strcat(sentence, " "); 
    strcat(sentence, NOUNS[rand()%NOUNS_SIZE]); 
    strcat(sentence, " "); 
    strcat(sentence, VERBS[rand()%VERBS_SIZE]); 
    strcat(sentence, " "); 
    strcat(sentence, PREPOSITIONS[rand()%PREPOSITIONS_SIZE]);
    strcat(sentence, " ");
    strcat(sentence, ARTICLES1[rand()%ARTICLES1_SIZE]); 
    strcat(sentence, " "); 
    strcat(sentence, NOUNS1[rand()%NOUNS1_SIZE]); 
//Capitalize first letter 
    sentence[0] = toupper(sentence[0]); 
    return sentence; 
} 
//sentence with . at end
int main(int argc, char* argv[]) 
{ 
    srand(time(NULL)); 
    for(int i = 0; i < MAX_SEN; i++) 
    { 
        char* sentence = generateSentence(); 
        printf("%s.\n", sentence); 
        free(sentence); 
    } 
    return 0; 
}