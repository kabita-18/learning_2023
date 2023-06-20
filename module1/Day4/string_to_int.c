
// Convert String as Integer
// i/p: "5""2""7""8""\0"
// o/p: 5278
// hints = res = res*10 +ival

#include<stdio.h>
int stringToInteger(char str[]){
    int res =0;
    for(int i =0; str[i]!='\0'; i++){
        res = res*10+(str[i]-'0');
    }
    return res;
}

int main(){
    char str[30];
    printf("enter string:");
    scanf("%s", &str);

    int result = stringToInteger(str);
    printf("%d", result);
    return 0;
}