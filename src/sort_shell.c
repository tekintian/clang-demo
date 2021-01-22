#include <stdio.h>

/**
 * @brief 希尔排序，也称递减增量排序算法，是插入排序的一种更高效的改进版本。希尔排序是非稳定排序算法。
 * 希尔排序是基于插入排序的以下两点性质而提出改进方法的：
 * 插入排序在对几乎已经排好序的数据操作时，效率高，即可以达到线性排序的效率
 * 但插入排序一般来说是低效的，因为插入排序每次只能将数据移动一位
 * 
 * @param arr 
 * @param len 
 */
void sort_shell(int arr[], int len){
    int gap,i,j,tmp;
    for ( gap = len >> 1; gap >0; gap = gap >>1)
    {
        for ( i = gap; i < len; i++)
        {
            tmp = arr[i];
            for ( j = i- gap; j>=0 && arr[j]>tmp; j-=gap)
            {
                arr[j+gap]=arr[j];
            }
            arr[j+gap] =tmp;
        }
        
    }
    
}


int main (int argc, char *argv[]) {
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    // 计算数组循环次数 len,  
    // 因为sizeof 计算大小是以字节形式返回,所以这里的sizeof(arr)=56返回的结果会是数组arr大小14 * 4 所以这里需要除以 sizeof(*arr) 这个计算的是arr指针的数据类型的大小 这里arr为int 所以 sizeof(*arr) =4
    int len = (int) sizeof(arr) / sizeof(*arr);

    printf(" sizeof(arr)=%lu sizeof(*arr)=%lu\n", sizeof(arr),sizeof(*arr));

    sort_shell(arr, len);

    for (int i = 0; i < len; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
   return 0;
}