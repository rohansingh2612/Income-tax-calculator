/*
AUTHOR: ROHAN SINGH
WORK OF PROGRAM:A simple command-line tool in C for calculating income tax based on annual income. The program prompts the user to input their annual income and calculates the tax amount based on predefined tax brackets.
PROGRAM LANGUAGE: PURE C LANGUAGE
*/

#include<stdio.h>

int main(){
    // Declare a variable to store the annual salary
    float salary;

    // Prompt the user to enter a numeric value
    printf("note: enter only numeric value \n");

    // Prompt the user to enter their annual income in lakhs per annum (lpa)
    printf("enter your annual income (lpa): ");
    
    // Read the input value and store it in the variable 'salary'
    scanf("%f", &salary);

    // Check if the salary is greater than 10.0 lpa
    if (salary > 10.0 ){
        // If salary is greater than 10.0 lpa, print the tax rate and calculate the tax amount
        printf("you have to pay 30%% tax. \nAmount you have to pay %f rupees tax to govt.\n", ((salary*30)/100)*100000);
    }
    // Check if the salary is greater than 5.0 lpa and less than or equal to 10.0 lpa
    else if (salary > 5.0 && salary <= 10.0){
        // If salary is within this range, print the tax rate and calculate the tax amount
        printf("you have to pay 20%% tax. \nAmount you have to pay %f rupees tax to govt.\n", ((salary*20)/100)*100000);
    }
    // Check if the salary is greater than 2.5 lpa and less than or equal to 5.0 lpa
    else if (salary > 2.5 && salary <= 5.0){
        // If salary is within this range, print the tax rate and calculate the tax amount
        printf("you have to pay 5%% tax. \nAmount you have to pay %f rupees tax to govt.\n",((salary*5)/100)*100000);
    }
    // Check if the salary is less than or equal to 2.5 lpa
    else if (salary <= 2.5){
        // If salary is less than or equal to 2.5 lpa, print that no tax is required
        printf("you don't have to pay tax to govt.");
    }

    // Return 0 to indicate successful execution of the program
    return 0;
}

