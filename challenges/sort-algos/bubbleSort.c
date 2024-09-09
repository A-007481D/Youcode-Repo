#include <stdio.h>

void BubbleSort(int Tab[], int size){
    for(int i = 0; i < size; i++){
        for(int j =  0; j < size - i - 1; j++){
            if (Tab[j] > Tab[j+1]){
                int tmp = Tab[j+1];
                Tab[j+1] = Tab[j];
                Tab[j] = tmp;

            }
        }

    }

}


void printTab(int Tab[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", Tab[i]);

    }
    printf("\n");
}

int main(){
    int Tab[] = {12, 435,33,35,2,56,8,1};
    int size = sizeof(Tab) / sizeof(Tab[0]);

    printTab(Tab, size);
    BubbleSort(Tab, size);
    printTab(Tab, size);



    return 0;
}



