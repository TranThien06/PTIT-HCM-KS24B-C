#include<stdio.h>
int main(){
    int array[] = {4,7,82,9,5,1,6};
    int kichthuocmang = sizeof(array) / sizeof(array[0]);
    int phantu;
    int vitri = -1;
    
    printf("Nhập một phần tử cần kiểm tra: ");
    scanf("%d", &phantu);
    
    for(int i=0; i<kichthuocmang; i++){
        if(phantu == array[i]){
            vitri = i;
            break;
        }
    }
    if(vitri!=-1){
        printf("Vị trí %d trong mảng là:%d ", phantu, vitri);
    }else{
        printf("%d không tồn tại trong mảng.", phantu);
    }
        
        
        
    return 0;
}