#include <stdio.h>
int main (){
    int arr[5];
    int demsochanle;
    
    printf("Nhập các phần tử trong mảng.\n");
    for(int i=0; i<5; i++){
        printf("Phần tử thứ %d: ", i+1);
        scanf("%d", &arr[i]);
        
    }
    printf("Các số chẵn có trong mảng là:\n");
    for(int i=0; i<5; i++){
        if(arr[i] % 2 == 0){
            printf("%d", arr[i]);
            demsochanle = 1;
            
        } 
            if(demsochanle == 0){
                printf("Mảng không chứa số chẵn.");
                break;
            }
    }
    
    printf("\n");
    return 0;
}