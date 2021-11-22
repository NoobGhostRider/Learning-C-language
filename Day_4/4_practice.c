//.Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and
// grade according to following:
//	Percentage >= 90% : Grade A
//	Percentage >= 80% : Grade B
//	Percentage >= 70% : Grade C
//	Percentage >= 60% : Grade D
//	Percentage >= 40% : Grade E
//	Percentage < 40% : Grade F


#include<stdio.h>
int main(){
    float percentage,total ; 
    int Physics, Chemistry, Biology, Mathematics ,Computer;
    printf("Enter mark obtained in Physics : ");
    scanf("%d",&Physics);
    printf("Enter mark obtained in Chemistry : ");
    scanf("%d",&Chemistry);
    printf("Enter mark obtained in Biology : ");
    scanf("%d",&Biology);
    printf("Enter mark obtained in Mathematics : ");
    scanf("%d",&Mathematics);
    printf("Enter mark obtained in Computer : ");
    scanf("%d",&Computer);
    total=Physics+Chemistry+Biology+Mathematics+Computer;
    percentage=(total*100)/500;
    if (percentage>=90)
    {
        printf("You Got Grade A\n");
    }
    else if ((percentage<90)&&(percentage>=80))
    {
        printf("You Got Grade B\n");
    }
    else if ((percentage<80)&&(percentage>=70))
    {
        printf("You Got Grade C\n");
    }
    else if ((percentage<70)&&(percentage>=60))
    {
        printf("You Got Grade D\n");
    }
    else if ((percentage<60)&&(percentage>=40))
    {
        printf("You Got Grade E\n");
    }
    else if (percentage<40)
    {
        printf("You Got Grade F\n");
    }
    return 0;
}