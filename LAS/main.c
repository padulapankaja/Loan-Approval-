#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define SIZE 50   //define size for array

void thankyouu();
int main()     //main program begins here
{
     char firstName[SIZE];  //declare variables
     char lastName[SIZE];
     int age, option, guarantorAge;
     char nicNumber[15] ;
     char addressLane01[SIZE];
     char addressLane02[SIZE];
     char occupation[SIZE];
     char placeOfWork[SIZE];
     float monthlySalary;
     char guarantorName[SIZE];
     char estimateCheck, cribCheck, response, guarantorAvailable;
     float monthlyInstall;
     //char x[SIZE];
     //char y[SIZE];
     fflush(stdin);
     int noOfinst[2]={48,96};		//no. of installments
     float loanAmount;
     char pJob;		//Availability of a permanent job
     int componentNumber;   //variable for user input
     int  loanStatus ;
     char loanStatusPrint[SIZE];

    printf("\n**************************************************************************************************** \n");  //welcome screen
    printf("*\t \t \t             Welcome to Loan Approval                                      *\n");
    printf("*                                                                                                  *");
    printf("\n**************************************************************************************************** \n\n\n");
    printf("\t> Project Title : Loan Approval \n\n");
    printf("\t> Purpose       : Give complete information about the library \n\n");
    printf("\t> Developers    :  \n\n");
    printf("\t \t \t  1. Padula Guruge        - PS / 2017 / 057  \n");
    printf("\t \t \t  2. Uthpala Hewagamage   - PS / 2017 / 066  \n");
    printf("\t \t \t  3. Prabhash Rathnayaka  - PS / 2017 / 274  \n\n");
    printf("\t> Components    :  \n\n");
    printf("\t \t \t  1. Input customer details \n");
    printf("\t \t \t  2. Calculation part of the loan approval system \n");
    printf("\t \t \t  3. Other options for rejected customers and the output process \n");
    printf("\t \t \t  4. Run the System \n\n");
    printf("Please enter component number you wish learn more :  ");
    scanf("%d", &componentNumber);  //get user input
    printf("\n");

    if(componentNumber == 1){    //check user input
        printf("\t> Component    :  Input customer details \n");
        printf("\t> Developer    :  Padula Guruge\n");
        printf("\t> Task         :  \n\n");
        printf("\t \t \t  i.   Get the personal information of the customer \n");
        printf("\t \t \t  ii.  Consider about the ability to get the loan  \n");
        printf("\t \t \t  iii. Discribe about the loan proval system and its' considering criterias with the cutomer \n\n");

    }
    else if (componentNumber == 2){
        printf("\t> Component    :  Calculation part of the loan approval system \n");
        printf("\t> Developer    :  Uthpala Hewagamage\n");
        printf("\t> Task         :  \n\n");
        printf("\t \t \t  i.   If the customer selected for the approving loan consider his or her loan money amount \n");
        printf("\t \t \t  ii.  Considering his monthly salary and other details calculate the interest per installment  \n");
        printf("\t \t \t  iii. Enter the customer to the loan approval system output processr \n\n");
    }
   else if (componentNumber == 3){
        printf("\t> Component    :  Other options for rejected customers and the output process \n");
        printf("\t> Developer    :  Prabhash Rathnayaka\n");
        printf("\t> Task         :  \n\n");
        printf("\t \t \t  i.   If the customer is able to get the loan, then issu his/her loan amount with initial details of payments \n");
        printf("\t \t \t  ii.  If the customer is unable to get the loan beause of his age, refer him/her to the special elder's criteria to get the loan easily.  \n");
        printf("\t \t \t  iii. Considering the all details if the customer can't get the loan, explane them about the reason clearly \n\n");
    }
    else{
       // printf(" \n\n\t \t \t  Invalid input !!!  Please check your input !!!  \n\n");
    //Welcome screen end here
     printf("*******************************  Customer Registration  ********************************************* \n\n");
     printf("\t * * * * * * * * * * * * *  Part  - I * * * * *  * * * * * * * * \n\n");
     printf("Enter First Name                     : ");
     scanf("%s" , firstName);
     printf("\nEnter Last  Name                     : ");
     scanf("%s" , lastName);
     do {
        printf("\nEnter Age                            : ");
        scanf("%d", &age);
            if(age <  18  || age > 65  ){
                printf("\t\tInvalid Input !!!!! \n");
            }else
              break;
     }while(1);
     printf("\nEnter NIC Number                     : ");
     scanf("%s", nicNumber);
     printf("\nEnter Address (Lane 01)              : ");
     scanf("%s", addressLane01);
     printf("\nEnter Address (Lane 02)              : ");
     scanf("%s", addressLane02);
     printf("\nEnter Occupation                     : ");
     scanf("%s", occupation);
     printf("\nEnter  Place of Work                 : ");
     scanf("%s", placeOfWork);

     do{
        printf("\nEnter Monthly Salary                 : ");
        scanf("%f", &monthlySalary);
        if(monthlySalary <= 0){
             printf("\t\tInvalid Input !!!!! \n");
        }
        else{
            break;
        }
     }while(1);
     printf("\t * * * * * * * * * * * * *  Part  - II * * * * *  * * * * * * * * \n\n");
     printf("If Estimate was Submitted (Y/N ) ?   :  ");
     scanf(" %c", &estimateCheck);
     printf("\nIf CRIB Details were Correct (Y/N )? :  ");
     scanf(" %c", &cribCheck);
     if(estimateCheck == 'n' || estimateCheck == 'N'){
        printf("\n\tPlease submit estimate !!!! \n\n");
        printf("\n\n \t\t Your Request is Reject !! \n\n");
     }
     else if (cribCheck == 'n' || cribCheck == 'N'){
         printf("\n\tPlease settle CRIB !!!! \n\n");
         printf("\n\n \t\t Your Request is Reject !! \n\n");
     }
     else{
        printf("\n\n \t\t Your Request is accept !! \n\n");
     }
    printf("\n\t\tSelect Option\n\n");
    printf("\tNumber\t\t\tOption\n");
    printf("\t1\t\t\tView Summary\n");
    printf("\t2\t\t\tView Salary Details\n");
    printf("\t3\t\t\tView Personal Details\n");
    printf("\t4\t\t\tGo to Ahead \n");
    printf("\t0\t\t\tExit \n");
    do{
    printf("\nEnter Option                         : ");
    scanf("%d", &option);
            switch(option){
            case 1 :printf("\n\t********************** Summary *********************\n\n");
                    printf("\t\t  Full Name       :  %s  %s \n", firstName, lastName);
                    printf("\t\t  Age             :  %d \n", age);
                    printf("\t\t  NIC             :  %s \n", nicNumber);
                    printf("\t\t  Address         :  %s  %s\n", addressLane01, addressLane02);
                    printf("\t\t  Occupation      :  %s \n", occupation);
                    printf("\t\t  Place of Work   :  %s \n", placeOfWork);
                    printf("\t\t  Monthly Salary  :  %.2f \n", monthlySalary);
                    printf("\n\t*** *** *** *** *** *** *** *** *** *** *** *** *** *** ***\n\n");
                    break;
            case 2 :printf("\n\t********************** Salary Details *********************\n\n");
                    printf("\t\t  Occupation      :  %s \n", occupation);
                    printf("\t\t  Place of Work   :  %s \n", placeOfWork);
                    printf("\t\t  Monthly Salary  :  %.2f \n", monthlySalary);
                    printf("\n\t*** *** *** *** *** *** *** *** *** *** *** *** *** *** ***\n\n");
                    break;
            case 3 :printf("\n\t********************* Personal Details *********************\n\n");
                    printf("\t\t  Full Name       :  %s  %s \n", firstName, lastName);
                    printf("\t\t  Age             :  %d \n", age);
                    printf("\t\t  NIC             :  %s \n", nicNumber);
                    printf("\t\t  Address         :  %s  %s\n", addressLane01, addressLane02);
                    printf("\n\t*** *** *** *** *** *** *** *** *** *** *** *** *** *** ***\n\n");
                    break;
            case 4 : printf("\n\n\t********************* Loan Calculation *********************\n\n");
                                if(age  >  50){
                                    printf("Do you have a guarantor  (Yy/Nn)          :  ");
                                    scanf(" %c", &guarantorAvailable);
                                    if(guarantorAvailable == 'Y' || guarantorAvailable == 'y'){
                                        printf("\nEnter Guarantor Name                      : ");
                                        scanf("%s", guarantorName);
                                         do {
                                                printf("\nEnter Guarantor Age                       : ");
                                                scanf("%d", &guarantorAge);
                                            if(guarantorAge <  18  || guarantorAge > 65  ){
                                                printf("\t\tInvalid Input !!!!! \n");
                                            }else
                                              break;
                                            }while(1);
                                                if(guarantorAge > 50){
                                                    printf("***** Sorry You Can Not Get Loan *****\n\n");
                                                }
                                                else{
                                                        printf("\nDo you have a permanent job?(Yy/Nn)       : ");
                                                        scanf(" %c",&pJob);
                                                        if ( (pJob=='y' || pJob == 'Y') && monthlySalary>=12000)
                                                        {
                                                            //strncpy(x, lastName, 50);			//customer saved in x as eligible
                                                            printf("\nEnter the loan amount you wish to obtain  :  ");
                                                            scanf("%f",&loanAmount);
                                                            if (loanAmount>=200000 && loanAmount<=1000000)
                                                            {   monthlyInstall = (loanAmount / 48);
                                                                printf("\n\n \t >>>>> The number of installments that your loan of %.2f is eligible for is    %d >>>>>\n",loanAmount,noOfinst[1]);
                                                                printf("\n\n \t >>>>> Monthly Installment is %.2f    >>>>>\n", monthlyInstall);
                                                                loanStatus = 1;
                                                               //
                                                            }
                                                            else if (loanAmount>=1000000 && loanAmount<=2000000)
                                                            {   monthlyInstall = (loanAmount / 96);
                                                                printf("\n\n \t >>>>> The number of installments that your loan of %.2f is eligible for is    %d >>>>>\n",loanAmount,noOfinst[2]);
                                                                printf("\n\n \t >>>>> Monthly Installment is %.2f    >>>>>\n", monthlyInstall);
                                                                loanStatus = 1;
                                                            }
                                                            else
                                                            {
                                                                printf("\nInvalid Amount!  ");
                                                                loanStatus = 0;
                                                            }
                                                        }
                                                        else
                                                        {       //strncpy(y, lastName, 50);					//customer saved in y as not eligible
                                                                printf("\n\n \t >>>>>Sorry. The criteria you entered does not make you eligible for the loan. Try again or if you wish, you can apply for a different product.  >>>>>\n");
                                                                loanStatus = 0;//
                                                        }
                                                    }
                                    }
                                    else if (guarantorAvailable == 'n' ||guarantorAvailable == 'N'){
                                        printf("***** >>>>>  Sorry You Can Not Get Loan  *****\n\n");
                                    }
                                }
                                else{
                                        printf("\nDo you have a permanent job?(Yy/Nn)        : ");
                                        scanf(" %c",&pJob);
                                        if (age<=50 && (pJob=='y' || pJob == 'Y') && monthlySalary>=12000)
                                        {
                                            //strncpy(x, lastName, 50);			//customer saved in x as eligible
                                            printf("\nEnter the loan amount you wish to obtain   :  ");
                                            scanf("%f",&loanAmount);
                                            if (loanAmount>=200000 && loanAmount<1000000)
                                            {   monthlyInstall = (loanAmount / 48);
                                                printf("\n\n \t >>>>>The number of installments that your loan of %.2f is eligible for is    %d >>>>>\n",loanAmount,noOfinst[1]);
                                                printf("\n\n \t >>>>> Monthly Installment is %.2f    >>>>>\n", monthlyInstall);
                                                loanStatus = 1;
                                            }
                                            else if (loanAmount>=1000000 && loanAmount<=2000000)
                                            {   monthlyInstall = (loanAmount / 96);
                                                printf("\n\n \t >>>>> The number of installments that your loan of %.2f is eligible for is    %d >>>>>\n",loanAmount,noOfinst[2]);
                                                printf("\n\n \t >>>>> Monthly Installment is %.2f     >>>>>\n", monthlyInstall);
                                                loanStatus = 1;
                                            }
                                            else
                                            {
                                                printf("\nInvalid Amount!");
                                                loanStatus = 0;
                                            }
                                        }
                                        else
                                        {       //strncpy(y, lastName, 50);					//customer saved in y as not eligible
                                                printf("\n\n \t >>>>> Sorry. The criteria you entered does not make you eligible for the loan. Try again or if you wish, you can apply for a different product.  >>>>>\n");
                                                loanStatus = 0;
                                        }
                                    }
                        if(loanStatus == 1){
                            strcpy(loanStatusPrint, "Accept");
                        }
                        else{
                            strcpy(loanStatusPrint, "Reject");
                        }
                        printf("\n\n\t --------------  Full Summary  --------------\n");
                        printf("\n\t\t  Full Name       :  %s  %s        \n", firstName, lastName);
                        printf("\t\t  Age             :  %d              \n", age);
                        printf("\t\t  NIC             :  %s              \n", nicNumber);
                        printf("\t\t  Address         :  %s  %s          \n", addressLane01, addressLane02);
                        printf("\t\t  Occupation      :  %s              \n", occupation);
                        printf("\t\t  Place of Work   :  %s              \n", placeOfWork);
                        printf("\t\t  Monthly Salary  :  %.2f            \n", monthlySalary);
                        printf("\t\t  CRIB Details    :  %c              \n", cribCheck);
                        printf("\t\t  Estimate        :  %c              \n", estimateCheck);
                        printf("\t\t  permanent Job   :  %c              \n", pJob);
                        printf("\t\t  Guarantor       :  %c              \n", guarantorAvailable);
                        printf("\t\t  Guarantor Name  :  %s              \n", guarantorName);
                        printf("\t\t  Guarantor Age   :  %d              \n", guarantorAge);
                        printf("\t\t  Loan  Amount    :  %.2f            \n", loanAmount);
                        printf("\t\t  Loan  Status    :  %s              \n" , loanStatusPrint);
                        printf("\n\t --------------  End Summary  --------------\n");
                        thankyouu();
                     break ;
            case 0 : printf("\n Do you want to exit (Yy/Nn) ?       : ");
                     scanf(" %c", &response);
                     if(response == 'Y' || response == 'y'){
                             return -1;
                     }
                     else if (response == 'N' || response == 'n'){
                        continue;
                     }
                     else{
                        printf("\n \t Invalid !!! \n");
                     }
                    break;
            default:
                    printf("\n\t\tInvalid Input !!!!!!!!!\n");
            }
        }while(response != 'y'  || response != 'Y');
    }
     return 0;
}  //main program end here

void thankyouu(){  //function for end
    printf("\n\n\n");
    printf("\n\n\n***********************  \tThank You \t ********************************************************** \n");
    printf("\n*********************** \tHave a Nice Day  !!!! \t ************************************************* \n");
    printf("\n\n \t \t \t     \n\n\n");
}






