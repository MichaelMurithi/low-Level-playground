/*
A collection of tricky code snippets based on common areas while doing basic C concepts
*/

#include <stdio.h>;

/*
- The loop below will run infinitely because 'someValue' is an unsigned integer and therefore
 it will never go below zero.
*/

int unsigned_variable_problem(){
    unsigned int someValue = 5;
    while(someValue >= 0){
        printf("\t .");
        someValue--;
    }
    printf("%u",someValue);
    return 0;
}

/*
- The switch case below will print the garbage value of pay since the pay is not initialised
 untill switch reaches to case 1.
*/
int switch_variable_problem(){
    int score=1;
    switch(score){
        int pay=1000;
        case 1: printf("Your pay is %d",pay);
            break;
        default: printf("Your pay is %d",pay);
            break;
    }
    return 0;
}

/*
- Any input will give output "True"
- The if assignment operator is used instead of comparison operator;
*/
int assignment_operator_problem(){
    int num1,num2;
    printf("\n Comparing 2 numbers in the wrong way: \n");
    printf("Enter 2 numbers: ");
    scanf("%d %d",&num1,&num2);
    num1+=10;
    num2-=10;
    if((num1=5) && (num2=-3)) // Will always return true since assignment operator is used instead of comparison operator
        printf("True");
    else
        printf("False");
    return 0;
}

/*
The output of this program is:
- I am 7
- I am 10
* Default case executes if no other case in switch matches, irrespective of its position in the switch.
- The issue is due to a missing Break statement in case 15.
*/
int switch_default_issue(){
    int n = 15;
    switch(n){
    default:
        printf("I am default \n");
    case 15:
        printf("I am 7 \n");
    case 10:
        printf("I am 10");
    }
    return 0;
}

int main(){
//    unsigned_variable_problem();
//    switch_variable_problem();
//    assignment_operator_problem();
    switch_default_issue();

}
