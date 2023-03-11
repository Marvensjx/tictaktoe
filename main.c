//
//  main.c
//  quiz game
//
//  Created by Marvens Luc on 12/2/22.
//

#include <stdio.h>


char again(void);


int main(int argc, const char * argv[]) {

    char name[12];
    printf("What's your name\n");
    scanf("%s",name);
    
    do{
    
        int *p = NULL;
        int score;
        p = &score;
        
    char answer, answer2,answer3,answer4,answer5;
    printf("What's the closet planet to the sun\n");
    
    printf("A: Earth\n");
    printf("B: Venus\n");
    scanf(" %c",&answer);
    
    if (answer == 'B') {
        printf("correct\n");
         
    }
    else{
        
        printf("incorrect\n");
        
    }
    
    
    printf("Which of these astronomical objects should be viewed only through a light filter?\n");
    printf("A: The comet\n");
    printf("B: The Sun\n");
    printf("C: The Moon\n");
    scanf(" %c",&answer2);
    
    if (answer2 == 'B') {
        printf("Correct\n");
       score = score+1;
    }
    else
    {
        printf("Incorrect\n");
    }
        
        
        
        printf("Which side of the world does the star at the end of the \"tail" "of Ursa Minor point to?\n");
        printf("A: South\n");
        printf("B: East\n");
        printf("C: North\n");
        scanf(" %c",&answer2);
        
        if (answer2 == 'B') {
            printf("Correct\n");
           score = score+1;
        }
        else
        {
            printf("Incorrect\n");
        }
        
        
        printf("What applies to the small bodies of the Solar System?\n");
        printf("A: Comets and asteroids\n");
        printf("B: Planets\n");
        printf("C: Stardust\n");
        scanf(" %c",&answer3);
        
        if (answer3 == 'A') {
            printf("Correct\n");
           score = score+1;
        }
        else
        {
            printf("Incorrect\n");
        }
        
        printf("What is deep space?\n");
        printf("A: Objects orbiting the Moon\n");
        printf("B: Objects outside the Solar system\n");
        printf("C: Objects beyond the Milky Way\n");
        scanf(" %c",&answer4);
        
        if (answer4 == 'B') {
            printf("Correct\n");
           score = score+1;
        }
        else
        {
            printf("Incorrect\n");
        }
        
        
        printf("What is the\"Space-Penetrating Power?\n");
        printf("A: The magnitude of the faintest stars that can be seen through a telescope\n");
        printf("B: Distance between objectve and  eye-lens\n");
        printf("C: The maximum distance to the object that the telescope can be seen\n");
        scanf(" %c",&answer5);
        
        if (answer5 == 'A') {
            printf("Correct\n");
           score = score+1;
        }
        else
        {
            printf("Incorrect\n");
        }
        printf("%s scored %d/5\n",name,*p);
        
    }while(again());
        
    return 0;
}



char again(void)
{
    char answer;
    do{
    
    
    printf("Do you want to play again y or no");
    scanf(" %c",&answer);
    
    
    }while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N' );
        
        
    return answer == 'y' || answer == 'Y';
    
    
    
    
}
