#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void head(void)
{
    printf("\t\t\t\t\t\t Welcome To\n");
    printf("\t\t\t\t\tOld School Hand Cricket Game\n");
    printf("\t\t\t\t\t Version: 3.5 (Early Access)");
};

int menu()
{
    int c;
    int R;
    printf("\n\n\n");
    printf("\t\t\t\t\t\t-- Menu --\n\n\n");
    printf("1) Play Classic Mode (Only Batting) \n");
    printf("2) Update Log (Check Updates) \n");
    printf("3) Exit Game \n");
    printf("Enter Your Choice: ");
    scanf("%d", &c);
    switch(c)
    {
    case 1:
        printf("\n");
        game1();
        break;
    case 2:
        printf("\n");
        system("CLS");
        printf("\n\t\t\t\t\t\tWorking ON!\n\t\t\t\t\tCheck Back Soon For More! :D\n");
        menu();
        break;
    case 3:
        printf("\n");
        close();
        system("pause");
        break;
    default:
        printf("Wrong Input!\n");
        menu();
    }
    return R;
}

void close(void)
{
    printf("Hope you liked it! I'm Willing to make more projects like this! :D\n");
    printf("Stay Tuned and Check My Github profile for more!\n");
    printf("Made With Love By Raisul \n\n");
}

int game1()
{
    printf("\n\n\n");
    int playerH,AiH,AiH2,Out=0,Run=0,Ball=0;

    while(Out=1)
    {
        srand(time(NULL));
        AiH = rand() % 7;
        AiH2 = rand() % 3;

        printf("Enter Your Run: ");
        scanf("%d", &playerH);

        if (playerH == AiH || playerH > 6 || playerH < 1 || playerH == AiH2)
        {
            printf("It's an Out!\n");
            Out = 1;
            Ball = Ball + 1;
            break;
        }
        else
        {
            if (playerH == 6)
            {
                printf("What an amazing swing! It's a 6!\n");
            }
            else if (playerH == 4)
            {
                printf("What an Under Drive! It's a 4!\n");
            }
            else
            {
                printf("Good Shot! It's a %d\n", playerH);
            }
            Run = Run + playerH;
            Ball = Ball + 1;
        }
    }

    printf("\n\n\n");
    printf("--------------------------------\n");
    printf("Total Run: %d\n", Run);
    printf("Total Ball: %d\n", Ball);
    printf("Target : %d Run!\n", Run + 1);
    printf("--------------------------------\n");
    system("pause");

    return Run;
}

int main()
{
    system("color f0");
    head();
    menu();
    return 0;
}
