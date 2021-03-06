/**
 * @file function.c
 * @author Mohan Babu S (mohanbabu.s.2018.ece@ritchennai.edu.in)
 * @brief This is the functions program where the project is run
 * @version 0.1
 * @date 2022-03-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void test_quiz();
/**
 * @brief SHOW SCREEN RECORD OF QUIZ GAME
 * @return TEXT FILE GENERATED WITH SECURED HIGH SCORE
 */
void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s %f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}
/**
 * @brief DOING FILE OPERATIONS FOR TEXT FILE
 * @return RESET SCORE FROM 0
 */
void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s %f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}
/**
 * @brief GIVES INSTRUCTION OF THE QUIZ GAME
 */
void help()
	{system("cls");
    printf("\n\t                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n 1. There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n 2. In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n 3. Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n 4. You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n 5. You will be asked questions continuously if you keep giving the right answers.");
    printf("\n 6. No negative marking for wrong answers");

	printf("\n\t-----BEST OF LUCK-----");
	}
/**
 * @brief GIVES SCORE INFORMATIONS
 * @param[in] operand1
 * @param[in] operand2
 * @return INTEGER VALUE OF THE OPERAND1 AND OPERAND2
 */
void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s %f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}



