/*
 ** This is a program to calculate the electricity bill (Version-3)
 ** when the Number of Units used are given.(Based on TSSPDCL Billing)
 ** ~Faizuddin Mohammed || GitHub-@F21Z || LinkedIn-@faizuddinrm
 */
 
#include <stdio.h>
 
 // Since rates are constants, define all rates
#define CHARGE_CAT1A_50U_INR      72.50
#define CHARGE_CAT1B_100U_INR    330.00
#define CHARGE_CAT1B_200U_INR   1000.00
#define CHARGE_CAT1B_300U_INR   1720.00
#define CHARGE_CAT1B_400U_INR   2570.00
#define CHARGE_CAT1B_800U_INR   6170.00

#define RATE_CAT1A_50U_INR    1.45
#define RATE_CAT1A_100U_INR   2.60
#define RATE_CAT1B_100U_INR   3.30
#define RATE_CAT1B_200U_INR   4.30
#define RATE_CAT1B_300U_INR   7.20
#define RATE_CAT1B_400U_INR   8.50
#define RATE_CAT1B_800U_INR   9.00
#define RATE_CAT1B_MORE_INR   9.50


int main(){
    int units;
    printf("Please enter Units used:");
    scanf("%d",&units);
    float charges;
    if(units<=0){
        printf("No charges");
    }
    else if(units<100){
        printf("CAT-1A");
        if(units<50){
            charges = (float)units*RATE_CAT1A_50U_INR;
        }
        else if(50<units<100){
            charges= CHARGE_CAT1A_50U_INR + ( (units-50)*RATE_CAT1A_100U_INR );
        }
    }
    else if((100<=units)&&(units<=200)){
        printf("CAT-1B(i)");
        charges= CHARGE_CAT1B_100U_INR +( (units-100)*RATE_CAT1B_200U_INR );
    }
    else if(units>200){
        printf("CAT-1B(ii)");
        if(units<=300){
            charges= CHARGE_CAT1B_200U_INR +( (units-200)*RATE_CAT1B_300U_INR );
        }
        else if((300<units)&&(units<=400)){
            charges= CHARGE_CAT1B_300U_INR +( (units-300)*RATE_CAT1B_400U_INR );
        }
        else if((400<units)&&(units<=800)){
            charges= CHARGE_CAT1B_400U_INR +( (units-400)*RATE_CAT1B_800U_INR );
        }
        else if(units>800){
            charges= CHARGE_CAT1B_800U_INR +( (units-800)*RATE_CAT1B_MORE_INR );
        }
    }
    printf("\nUnits=%d",units);
    printf("\nCharges=%.2f",charges);
}
