#include<stdio.h>
#include<conio.h>

void main() {
    int quiz();
    int result =quiz();
    printf("score= %d", result); // Display the score properly
}

int quiz(){

    printf("----------Welcome to Quiz Game----------\n\n\n");
    printf("***Follow the following instruction or rules***\n");
    printf("1.Quiz contain 10 questions.\n");
    printf("2.For correct Ans you get 1 point.\n");
    printf("3.There will be no negative marking.\n");
    printf("4.Press S to start the Game.\n");
    printf("5.Select a, b, c, d or 1, 2, 3, 4\n");
    char start;
     char option;
     int score=0;
     scanf("%s",&start);

     if(start== 's' || start =='S'){
        printf("***Let's Get Started The Game***\n");
    // QUESTION 1 
   printf(" Q1.Who recited the Mahabharata? \n1= Ved Vyasa \n2= Devavrata \n3= Atri \n4=Bh aradvaja ");
   printf("\n\n ENTER YOUR ANSWER = ");
   scanf("%s",&option);
            if(option=='a' || option=='A'|| option==1){
                score=1;
            }
            else{
                score=score+0;
            }   

       //QUESTION 2  
            printf(" Q2 Who was the son of Bhima and Hidimba ? \n1=Abhimanyu \n2=Jarasandha \n3=Ghatotkacha \n4=Barbarik ");
   printf("\n\n ENTER YOUR ANSWER = ");
   scanf("%s",&option);
            if(option=='c' || option=='C'|| option==3){
                // score+=1;
                score=2;
            }
            else{
                score=score+0;
            }
 // QUESTION 3
              printf(" Q3.Who was King Santunu's first wife? \n1 = satyavati \n2= ganga \n3= yamuna \n4= none of this");
   printf("\n\n ENTER YOUR ANSWER = ");
   scanf("%s",&option);
            if(option=='b' || option=='B'|| option==2){
                // score+=1;
                score=3;
            }
            else{
               score=score+0;
            }
// QUSTION 4
              printf(" q3.What caste is Karna raised in?\n1=SHUDRA\n2.KSATRIYA\n3.SUTA\n4.BRAHMIN\n");
   printf("\n\n ENTER YOUR ANSWER = ");
   scanf("%s",&option);
            if(option=='c' || option=='C'|| option==3){
                score=4;
            }
            else{
               score=score+0;
            }

// QUESTION 5
              printf(" Q5 What is Bhima's nickname ? \n1=BLOOD-HOUND \n2=WEALTH-WINNER \n3=LOTUS-EATER \n4=WOLF-BELLY");
   printf("\n\n ENTER YOUR ANSWER = ");
   scanf("%s",&option);
            if(option==4)
			{
                score=5;
            }
            else{
                score=score+0;
            }


//QUESTION 6
              printf(" Q6 What is the term for living in defiance of dharma? \n1=FATE\n2=ADHARMA\n3=KARMA\n4=DETACHMENT ");
   printf("\n\n ENTER YOUR ANSWER = ");
   scanf("%s",&option);
            if(option=='b' || option=='B'|| option==2){
                score=score+1;
            }
            else{
                score=score+0;
            }


//QUESTION 7
              printf(" Q7 What king do the Pandavas serve during their 13th year in exile? \n1=SHANTANU \n2=JANAMEJAYA \n3=VIRATA \n4=DURYODHANA");
   printf("\n\n ENTER YOUR ANSWER = ");
   scanf("%s",&option);
            if(option=='c' || option=='C'|| option==3){
                score=score+1;
            }
            else{
                score=score+0;
            }


//QUESTION 8
              printf(" Q8 What Hindu immortal is considered the scribe of the Mahabharata? \n1=VYASA \n2=VIBHISHANA\n3=BALI\n4=HANUMAN ");
   printf("\n\n ENTER YOUR ANSWER = ");
   scanf("%s",&option);
            if(option=='A' || option=='a'|| option==1){
                score=score+1;
            }
            else{
               score=score+0;
            }

            //QUESTION 9
              printf(" Q9 How many sons does Dhrtarastra have? \n1=101 \n2=5\n3=90\n4=100 ");
   printf("\n\n ENTER YOUR ANSWER = ");
   scanf("%s",&option);
            if(option=='D' || option=='d'|| option==4){
                score=score+1;
            }
            else{
                score=score+0;
            }

//QUESTION 10
              printf(" Q10 Where does Duryodhana hide right before he is killed? \n1=IN THE PANDAVA CAMP\n2=IN HIS CASTLE\n3=BEHIND A TREE\n4= IN A LAKE");
   printf("\n\n ENTER YOUR ANSWER = ");
   scanf("%s",&option);
            if(option=='d' || option=='D'|| option==4){
                score=score+1;
            }
            else{
                score=score+0;
            }
        
     }
     else {
         printf("YOU ENTER WRONG LETTER");
        }
        // return 
     return score;
}
