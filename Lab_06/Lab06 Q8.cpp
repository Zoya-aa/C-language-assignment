#include <stdio.h>
int main(){
    int arr[20];
    int size = 8;
    int i,largest,smallest,search_num,found_index = -1;
    int insert_num,insert_index,delete_index;

    printf("Enter 8 integers: ");
    for (i=0 ; i<size ; i++){
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The complete array is: ");
    for (i=0 ; i<size ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    largest = arr[0];
    smallest = arr[0];
    for (i=1 ; i<size ; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    printf("Largest element: %d \n", largest);
    printf("Smallest element: %d \n", smallest);

    printf("Enter a number to search: ");
    scanf("%d", &search_num);
    for (i=0 ; i<size ; i++) {
        if(arr[i]==search_num){
            found_index = i;
            break;
        }
    }
    if (found_index!=-1){
        printf("Number %d found at index %d", search_num, found_index);
    } 
	else{
        printf("Number %d not found in the array \n", search_num);
    }

    printf("Enter a new number to insert: \n");
    scanf("%d", &insert_num);
    printf("Enter the index where you want to insert (0 to %d): ", size);
    scanf("%d", &insert_index);

    for (i=size ; i>insert_index ; i--){
        arr[i] = arr[i-1];
    }
    arr[insert_index] = insert_num;
    size++;

    printf("Enter the index of the element to delete (0 to %d): ", size-1);
    scanf("%d", &delete_index);

    for (i=delete_index ; i<size-1 ; i++) {
        arr[i] = arr[i+1];
    }
    size--;

    printf("The final array is: \n");
    for (i=0 ; i<size ; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
