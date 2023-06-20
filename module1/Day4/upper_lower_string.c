
// Toggle case
// i/p = Abcd x Yz\0
// o/p = aBCD X yZ\0

#include<stdio.h>
void toggleString (char str[]){
    for(int i =0; str[i]!='\0'; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = str[i]+32;
        }
        else if(str[i] >='a' && str[i]<='z'){
            str[i] = str[i]-32;
        }
    }
}

int main(){
    char str[20];
    printf("enter string:");
    scanf("%s", &str);
    toggleString(str);
    printf("%s", str);

}