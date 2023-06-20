// difference between odd and even index element
// 64 84 21 36 17 90 77 10 48 55
// sum of even indexed= 64 + 21 + 17 + 77 + 48
// sum of odd indexed = 84 + 36 + 90 + 10 + 55

#include <stdio.h>
int sumofevenindex(int arr[], int n){
    int sumofeven = 0;
    for(int i =0; i<n; i++){
        if(i%2 ==0){
            sumofeven += arr[i];
        }
    }
    return sumofeven;
}
int sumofoddindex(int arr[], int n){
    int sumofodd = 0;
    for(int i =0; i<n; i++){
        if(i%2 !=0){
            sumofodd += arr[i];
        }
    }
    return sumofodd;
}

int main(){
    int arr[10];
    int n;
    printf("enter size of array");
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int sume = sumofevenindex(arr, n);
    int sumo = sumofoddindex(arr, n);

    printf("%d\n", sume);
    printf("%d", sumo);

    return 0;

}