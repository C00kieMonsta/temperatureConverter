#include <stdio.h>

int main(void){
    
    int n;
    printf("Press 1 for F to C and press 2 for C to F\n");
    scanf("%d", &n);
     
    switch(n){
        
            case 1:{
                printf("|Converting Farenheit to Celsius|\n");
                
                int n;
                do
                {
                    printf("How many computings needs to be done? \n");
                    scanf("%d", &n);
                }while(n<1);
                
                double Farenheit1[n];
                double Celsius1[n];
                
                printf("Enter the degree Farenheit you want to convert: \n");
                
                for(int i=0; i<n;i++)
                {
                    printf("What degree is the measure %i ? ", i);
                    scanf("%lf", &Farenheit1[i]);
                    Celsius1[i] = ((Farenheit1[i] - 32.0)/1.8);
                }
                
                for(int i=0; i<n;i++)
                {
                    printf("%.1f degree Farenheit equals to %.1f degrees celsius\n", Farenheit1[i], Celsius1[i]);
                }
                break;
                }
        
            case 2:{
                printf("|Converting Celsius to Farenheit|\n");
                int n;
                do
                {
                    printf("How many computings needs to be done? \n");
                    scanf("%d", &n);
                }while(n<1);
                
                double Farenheit2[n];
                double Celsius2[n];
                
                printf("Enter the degree Celsuis you want to convert: \n");
                
                for(int i=0; i<n;i++)
                {
                    printf("What degree is the measure %i ? ", i);
                    scanf("%lf", &Celsius2[i]);
                    Farenheit2[i] = (Celsius2[i]*1.8 + 32.0);
                }
                
                for(int i=0; i<n;i++)
                {
                    printf("%.1f degree Celsius equals to %.1f degrees Farenheit\n", Celsius2[i], Farenheit2[i]);
                }
                break;
                }
            
            default:{
                printf("You entered the wrong number\n");
                }
    }
}

