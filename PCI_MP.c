#include<conio.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char name[20], course_code[20], subjects[10][10], per;
    int roll_no, choice=0, i, count=0, marks[2000];
    float total=0;

    do
    {
        printf("Enter your name\n");
        gets(name);
        printf("Enter your Course Code\n");
        scanf("%s", course_code);
        printf("Enter your roll number\n");
        scanf("%d", &roll_no);
        printf("enter the subjects [should be 5 subjects]\n");

        for(i = 0; i < 5; i++)
        {
            scanf("%s", subjects[i]);
        }

        printf("enter the marks of the subjects![Should be out of 100]\n");

        for(i = 0; i < 5; i++)
        {
            printf("%s\n", subjects[i]);
            scanf("%d", &marks[i]);
            total += marks[i];
        }

        total = total/5;

        if(total > 100)
            count = 0;
        else if(total >= 75)
            count = 1;
        else if(total >= 65)
            count = 2;
        else
            count = 3;
        switch(count)
        {
        case 0:
            printf("wrong input of marks! please input correct marks.\n");
            break;
        case 1:
            per = "Distinction!";
            break;
        case 2:
            per = "First Class!";
            break;
        case 3:
            per = "Fail";
            break;
        }

        printf("do you want to change the info? enter 1 for yes or press any key to exit.\n");
        scanf(" %d", &choice);
    }while( choice==1 && !(choice>='A'&&choice<='Z'||choice>='a'&&choice<='z') );

    system("cls");
    if(count!=0)
    {
        printf("\n==================================================\n");
        printf("                    MARKSHEET\n                     ");
        printf("\n==================================================\n");
        printf("NAME: %s\n",name);
        printf("Course Code: %s\n",course_code);
        printf("Roll No: %d\n",roll_no);
        printf("MARKS:\n");

        for(i=0;i<5;i++)
        {
            printf("%s = %d\n",subjects[i],marks[i]);
        }

        printf("percentage = %.1f\n",total);
        printf("GRADE = %s\n",per);
    }
    _getch();
    return 0;
}
