#include <iostream>

// Complexity - (n^2);

void sortit(int *arr, int index, int n){
    if(index == 0) return ;
    else if(index < n && index > 0) {
        if(arr[index-1] > arr[index]) {
            int temp = arr[index-1];
            arr[index - 1] = arr[index];
            arr[index] = temp;
            sortit(arr, index-1, n);
        } else return ;
    } else return ;
};

//By default sort is in ascending(increasing) order, to choose descending(decreasing) order set "type" parameter to 0;
void insertionSort(int *arr, int n, int type = 1){
    int i = 0;
    while( i < n){
        sortit(arr, i, n);
        i++;
    };
};



int main(void){
    const int n = 8;
    int array[8] = {5,3,1,2,9,4,7,6};
    insertionSort(array, n);
    int i = 0;
    while(i < n){
        std::cout<<array[i]<<' ';
        i++;
    };
    std::cout<<std::endl;
};