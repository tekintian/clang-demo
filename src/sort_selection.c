#include <stdio.h>

/**
 * @brief 选择排序（Selection sort）是一种简单直观的排序算法。它的工作原理如下。首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，然后，再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。以此类推，直到所有元素均排序完毕。
 * 
 * @param arr 
 * @param len 
 */
void selection_sort(int arr[],int len){
    int i,j,tmp;
    for ( i = 0; i < len-1; i++)
    {
        int min=i; // 定义一个最小值的下标min 设定为第一个
        for (j= i + 1; j < len; j++) //访问为排序的元素
        {
            if (arr[j]<arr[min])
            {
                min = j; //记录最小下标
            }
            
        }
        if (min !=i)
        {
            tmp = arr[min];
            arr[min] = arr[i];
            arr[i] = tmp;
        }
        // swap(&arr[min],&arr[i]);
        
    }
    
}
/**
 * @brief 交互2个变量
 * 
 * @param a 
 * @param b 
 */
void swap(int *a, int *b){
    int tmp= *a;
    *a = *b;
    *b = tmp;
}
/**
 * @brief 入口函数
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main (int argc, char *argv[]) {
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    
    int len = (int) sizeof(arr)/sizeof(*arr);
    selection_sort(arr, len);
    for (int i = 0; i < len; i++)
    {
        printf("%d  ", arr[i]);
    }
    
   return 0;
}