//
//  main.c
//  quiz
//
//  Created by Nehir Çimen on 15.06.2025.
//

#include <stdio.h>
#include <string.h>
struct quiz {
    char question[90];
    char a[90];
    char b[90];
    char c[90];
    char d[90];
};
int main(void) {
    struct quiz questions[3];
    strcpy(questions[0].question,"Where is capital of France?");
    strcpy(questions[0].a,"Porto");
    strcpy(questions[0].b,"Paris");
    //answer B
    strcpy(questions[0].c,"Berlin");
    strcpy(questions[0].d,"Madrid");
    strcpy(questions[1].question,"Who is the founder of Versace?");
    strcpy(questions[1].a,"Gianni Versace");
    //answer A
    strcpy(questions[1].b,"Donatella Versace");
    strcpy(questions[1].c,"Santo Versace");
    strcpy(questions[1].d,"Daniel Versace");
    strcpy(questions[2].question,"Which country has won the most World Cups? ");
    strcpy(questions[2].a,"Spain");
    strcpy(questions[2].b,"Turkey");
    strcpy(questions[2].c,"Brazil");
    //answer C
    strcpy(questions[2].d,"Italy");
    char answers[3];
    int score =0;
    for(int i=0;i<3;i++)
    {
        printf("Quesiton %d\n",i+1);
        printf("%s\n",questions[i].question);
        printf("A) %s\n",questions[i].a);
        printf("B) %s\n",questions[i].b);
        printf("C) %s\n",questions[i].c);
        printf("D) %s\n",questions[i].d);
        printf("Enter your answer:");
        scanf(" %c",&answers[i]);
    }
    if(answers[0] =='B' || answers[0] =='b')
        score++;
    if(answers[1] =='A' || answers[1] =='a')
        score++;
    if(answers[2] =='C' || answers[2] =='c')
        score++;
    printf("This is your score: %d\n",score);
    if(score==3)
        printf("CONGRATULATİONS! You did a full in this test.");
    return 0;
}
