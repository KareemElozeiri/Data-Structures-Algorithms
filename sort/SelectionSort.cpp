template <typename T>
void SelectionSort(T list[],int size){
    int minIndex;
    T temp;
    for(int i=0; i<size; i++){
        minIndex = i;
        for(int j = i; j<size; j++){
            if(list[minIndex]>list[j]){
                minIndex = j;
            }
        }
        T temp = list[i];
        list[i] = list[minIndex];
        list[minIndex] = temp;
    }

}
