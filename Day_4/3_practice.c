//3.Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
//	Basic Salary <= 10000 : HRA = 20%, DA = 80%
//	Basic Salary <= 20000 : HRA = 25%, DA = 90%
//	Basic Salary > 20000 : HRA = 30%, DA = 95%


#include<stdio.h>
int main(){
    int basic_salary,gross,HRA,DA;
    printf("Enter the Basic_salary : ");
    scanf("%d",&basic_salary);
    if (basic_salary<=10000)
    {
        HRA=(basic_salary*20)/100;
        DA=(basic_salary*80)/100;
        gross=basic_salary+HRA+DA;
        printf("Gross Salary is : %d\n",gross);
    }
    else if (basic_salary<=20000)
    {
        HRA=(basic_salary*25)/100;
        DA=(basic_salary*90)/100;
        gross=basic_salary+HRA+DA;
        printf("Gross Salary is : %d\n",gross);
    }
    else if (basic_salary>20000)
    {
        HRA=(basic_salary*30)/100;
        DA=(basic_salary*95)/100;
        gross=basic_salary+HRA+DA;
        printf("Gross Salary is : %d\n",gross);
    }
    return 0;
}