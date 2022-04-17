template <typename T>
int BinarySearch(T list[], int start, int end, T value){
    int middle = (start+end)/2;

    if(start == end && list[start] != value) 
        return -1;
    else if(value == list[middle])
        return middle;
    else if(value > list[middle])
        return BinarSearch(list,middle,end,value);
    else
        return BinarSearch(list,start,middle,value);
}