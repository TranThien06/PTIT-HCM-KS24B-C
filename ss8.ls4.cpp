//Khai báo và gán giá trị cho một mảng hai chiều bất kỳ, in ra phần tử lớn nhất trong mảng đã khai
//báo
#include<stdio.h>
int main(){
    int arr[2][2] = {
        {15378536,4949498},
        {6867936,3378278}
    };
    
    int max = arr[0][0];
    
    
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    printf("Phần tử lớn nhất trong mảng là: %d", max);
    
 
    return 0;
}