#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[] = {2,5,7,8};
    int length;
    length = sizeof(arr)/sizeof(arr[1]);
    printf("%d ",length);
}
