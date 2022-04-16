template <typename T>
void BubleSort(T list[], int size){
    for(int i = 0; i<size;i++){
        for(int j = 0; j<size-i-1;j++){
            if(list[j] > list[j+1]){
                list[j] = list[j] + list[j+1];
                list[j+1] = list[j] - list[j+1];
                list[j] = list[j] - list[j+1];
            }
        }
    }
}

#include <iostream>
template<typename T>
void printList(T list[], int size){
    for(int i=0;i<size;i++) std::cout<< list[i] << " ";
    std::cout<< std::endl;
}

int main(){
    const int size = 5;
    int list[size] = {5,4,3,2,1};
    printList(list,size);
    BubleSort(list,size);
    printList(list,size);
}