#include <stdio.h>

/**
 * @brief 插入排序（英语：Insertion Sort）是一种简单直观的排序算法。它的工作原理是通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。插入排序在实现上，通常采用in-place排序（即只需用到 {\displaystyle O(1)} {\displaystyle O(1)}的额外空间的排序），因而在从后向前扫描过程中，需要反复把已排序元素逐步向后挪位，为最新元素提供插入空间。
 * 
 * @param arr 
 * @param len 
 */
void sort_insertion(int arr[], int len){
    int i,j,tmp;
    for ( i = 0; i < len; i++)
    {
        tmp = arr[i];
        for ( j = i; j>0 && arr[j-1]>tmp; j--)
        {
            arr[j]=arr[j-1];
        }
        
        arr[j]=tmp;
    }
    
}

int main (int argc, char *argv[]) {
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    // 计算数组循环次数 len,  
    // 因为sizeof 计算大小是以字节形式返回,所以这里的sizeof(arr)=56返回的结果会是数组arr大小14 * 4 所以这里需要除以 sizeof(*arr) 这个计算的是arr指针的数据类型的大小 这里arr为int 所以 sizeof(*arr) =4
    int len = (int) sizeof(arr) / sizeof(*arr);

    printf(" sizeof(arr)=%lu sizeof(*arr)=%lu\n", sizeof(arr),sizeof(*arr));

    sort_insertion(arr, len);

    for (int i = 0; i < len; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
   return 0;
}
