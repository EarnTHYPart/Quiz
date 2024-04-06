#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char nullptr;
    char questions[4][75] = {"Where was mount rushmore carved?", "what is 11 + 2?", "What language is windows written in?","Is killing people illegal?"};
    char options[4][75] = { "A. The moon\nB. Earth\nC. Pluto (IT'S A REAL PLANET!)",
                            "A. 23\nB. 12\nC. The age of consent in Japan",
                            "A. C standard\nB. C#\nC. Python",
                            "A. Yes\nB. No\nC. Depends on where you live"};
    char correctAnswers[4] = "BCAC";
    char userInput = '\0';
    int questionAmmount = sizeof(questions)/sizeof(questions[0]);
    int incrementPerQuestion = 100/questionAmmount;
    int score = 0;
    for(int i = 0; i < questionAmmount; i++){
        printf("\nQuestion #%d: %s\n%s\n",i+1,questions[i],options[i]);
        scanf("%c",&userInput);
        scanf("%c",&nullptr);
        userInput = toupper(userInput);
        if(correctAnswers[i] == userInput){
            score+=incrementPerQuestion;
        }

    }
    printf("You got %d%% of the questions correct.",score); // two percent signs (%%) prints a % sign.
    if(score == 100){
        printf("\nCONGRATULATIONS!");
    }
}