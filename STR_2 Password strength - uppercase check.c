#include <stdio.h>
int main() {
    char pass[100]; int i=0, flag=0;
    scanf("%s", pass);
    while(pass[i]!='\0') {
        if(pass[i]>='A' && pass[i]<='Z') { flag=1; break; }
        i++;
    }
    if(flag) printf("Valid\n"); else printf("Invalid\n");
    return 0;
}
