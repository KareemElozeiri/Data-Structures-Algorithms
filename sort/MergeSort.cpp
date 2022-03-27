template<typename T>
T* Merge(T* arr1, T* arr2, int size){
    int currentIndex = 0;
    int i = 0;
    int j = 0;
    T* arr = new T[size*2];
    while(currentIndex != 2*size-1){
        if(arr1[i] <= arr2[j]){
            arr[currentIndex] = arr1[i];
            i++;
        }
        else{
            arr[currentIndex] = arr2[j];
            j++;
        }
        currentIndex++;
    }

    return arr;

}

template<typename T>
void MergeSort(T* arr, int arrSize){


}


