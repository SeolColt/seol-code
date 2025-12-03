#include <stdio.h>
#include <string.h>
struct scores_IELTS{
    char date[20];
    double    listening        ;
    double    reading          ;
    double    writing          ;
    double    speaking         ;
    double    result           ;

};

int main(){
    struct scores_IELTS firstAttempt;
    strcpy(firstAttempt.date,"2025.9.25");
    firstAttempt.listening   = 8.5;
    firstAttempt.reading     = 8.5;
    firstAttempt.writing     = 7.5;
    firstAttempt.speaking    = 6.0;
    firstAttempt.result      = 7.5;

    printf("the date i attend the exam is %s\n",firstAttempt.date);
    printf("my scores of listening is %.1f\n",firstAttempt.listening);
    printf("my scores of listening is %.1f\n",firstAttempt.reading);
    printf("my scores of listening is %.1f\n",firstAttempt.writing);
    printf("my scores of listening is %.1f\n",firstAttempt.speaking);


    struct scores_IELTS Attempt2;
    strcpy(Attempt2.date,"2025.12.18");
    Attempt2.listening   = 8.0;
    Attempt2.reading     = 8.5;
    Attempt2.writing     = 7.0;
    Attempt2.speaking    = 7.0;
    Attempt2.result      = 7.5;

    printf("the date i attend the exam is %s\n",Attempt2.date);
    printf("my scores of listening is %.1f\n",Attempt2.listening);
    printf("my scores of listening is %.1f\n",Attempt2.reading);
    printf("my scores of listening is %.1f\n",Attempt2.writing);
    printf("my scores of listening is %.1f\n",Attempt2.speaking);

    return 0 ;
}


