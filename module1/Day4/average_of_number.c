// sum & average of 1D array number
// 12 84 20 36 64 56 72 10 45 90
// average = sum/n

#include<stdio.h>
int averageNumber(int arr[], int n){
    int sum = 0;
    
    for(int i =0; i<n; i++){
        sum = sum+arr[i];

    }
    int average = sum/n;

    return average;

}
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[10];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int averageno = averageNumber(arr, n);
    printf("%d", averageno);

    return 0;
}