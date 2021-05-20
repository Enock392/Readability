#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(char text[1024]);
int count_words(char text[1024]);
int count_sentences(char text[1024]);

int main(){
    int letters,words,sentences,grade;
    float l,s;
    char text[1024];
    printf("Text: ");
    fgets(text,1024,stdin);
    letters=count_letters(text);
    words=count_words(text);
    sentences=count_sentences(text);
    l=100.0/words*letters;
    s=100.0/words*sentences;
    grade=round(0.0588*l-0.296*s-15.8);
    if(grade>16){
        printf("Grade 16+\n");
    }else if (grade<1)
    {
        printf("Before Grade 1\n");
    }else{
        printf("Grade %d\n",grade);
    }
}

int count_letters(char text[1024]){
    int count,i;
    count=0;
    for(i=0;text[i]!=0;i++){
        if(isalpha(text[i])){
            count++;
        }
    }return count;
}
int count_words(char text[1024]){
    int count;
    count=0;
    for(int i=0;text[i]!=0;i++){
        if(isspace(text[i]))
        {
        count++;
        }
    }return count;
}
int count_sentences(char text[1024]){
    int count;
    count=0;
    for (int i = 0; text[i]!=0; i++)
    {
        if(text[i]=='.' || text[i]=='!' || text[i]=='?'){
            count++;
        }
    }
    return count;
}
