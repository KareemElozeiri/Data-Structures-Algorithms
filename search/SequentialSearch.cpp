template <typename T>
int SequentialSearch(T item,T list[], int size){
    for(int i = 0; i<size; i++){
        if(item == list[i]) return i;
    }
}