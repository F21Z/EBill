/*
 ** This is a program to calculate the electricity bill (Version-1)
 ** when the Number of Units used are given.(Based on TSSPDCL Billing)
 ** ~Faizuddin Mohammed || GitHub-@F21Z || LinkedIn-@faizuddinrm
 */
 
 #include <stdio.h>
 
 int main(){
    int units;
    printf("Please enter Units used:");
    scanf("%d",&units);
    float charges;
    if(units<=0){
        printf("No charges");
    }
    else if(units<=100){
        printf("CAT-1A");
        if(units<50){
            charges=(float)units*1.45;  //Refer rate
        }
        else if(50<units<100){
            charges=(72.5)+((units-50)*(2.60));  //Refer rate
        }
    }
    else if((100<units)&&(units<=200)){
        printf("CAT-1B(i)");
        charges=(330)+((units-100)*(4.30));  //Refer rate
    }
    else if(units>200){
        printf("CAT-1B(ii)");
        if(units<=300){
            charges=(1000)+((units-200)*(7.20));  //Refer rate
        }
        else if((300<units)&&(units<=400)){
            charges=(1720)+((units-300)*(8.50));  //Refer rate
        }
        else if((400<units)&&(units<=800)){
            charges=(2570)+((units-400)*(9.00));  //Refer rate
        }
        else if(units>800){
            charges=(6170)+((units-800)*(9.50));  //Refer rate
        }
    }
    printf("\nUnits=%d",units);
    printf("\nCharges=%f",charges);
}
