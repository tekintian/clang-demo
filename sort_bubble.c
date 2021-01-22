#include <stdio.h>

/**
 * @brief 冒泡排序（英语：Bubble Sort）是一种简单的排序算法。它重复地走访过要排序的数列，一次比较两个元素，如果他们的顺序（如从大到小、首字母从A到Z）错误就把他们交换过来。
 * 
 * @param arr 
 * @param len 
 */
void bubble_sort(int arr[], int len){
    int i, j, tmp;
    for ( i = 0; i < len - 1; i++)
    {
        for ( j = 0; j < len -1 - i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
            
        }
        
    }
    
}
int main (int argc, char *argv[]) {
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    // 计算数组循环次数 len,  
    // 因为sizeof 计算大小是以字节形式返回,所以这里的sizeof(arr)=56返回的结果会是数组arr大小14 * 4 所以这里需要除以 sizeof(*arr) 这个计算的是arr指针的数据类型的大小 这里arr为int 所以 sizeof(*arr) =4
    int len = (int) sizeof(arr) / sizeof(*arr);

    printf(" sizeof(arr)=%lu sizeof(*arr)=%lu\n", sizeof(arr),sizeof(*arr));

   bubble_sort(arr,len);

    for (int i = 0; i < len; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
   return 0;
}