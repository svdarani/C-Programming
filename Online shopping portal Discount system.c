#include <stdio.h>
int main() {
    int membership;
    float purchase, final_amt;
    scanf("%d", &membership);
    scanf("%f", &purchase);
    if (membership==1){
        if (purchase>=100){
        final_amt= purchase-(purchase*0.20);
        printf("final_amt %.2f", final_amt);
    }
    
    else {
        final_amt= purchase-(purchase*0.10);
        printf("final_amt %.2f", final_amt);
    }}
     else if (membership==0){
        final_amt= purchase;
        printf("final_amt %.2f", final_amt);
    }
    else {
        printf("Invalid member details");
    }
    return 0;
}

// Online shopping portal Discount system
 

