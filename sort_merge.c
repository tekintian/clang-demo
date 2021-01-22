#include <stdio.h>
#include <stdlib.h>

int min(int x, int y){
    return x<y?x:y;
}
/**
 * @brief 归并排序  迭代法
 * 把数据分为两段，从两段中逐个选最小的元素移入新数据段的末尾。
 * 可从上到下或从下到上进行。
 * 
 * @param arr 
 * @param len 
 */
void sort_merge(int arr[], int len) {
    int* a = arr;
    int* b = (int*) malloc(len * sizeof(int));
    int seg, start;
    for (seg = 1; seg < len; seg += seg) {
        for (start = 0; start < len; start += seg + seg) {
            int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);
            int k = low;
            int start1 = low, end1 = mid;
            int start2 = mid, end2 = high;
            while (start1 < end1 && start2 < end2)
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
            while (start1 < end1)
                b[k++] = a[start1++];
            while (start2 < end2)
                b[k++] = a[start2++];
        }
        int* temp = a;
        a = b;
        b = temp;
    }
    if (a != arr) {
        int i;
        for (i = 0; i < len; i++)
            b[i] = a[i];
        b = a;
    }
    free(b);
}
/**
 * @brief 递归法
 * 
 * @param arr 
 * @param reg 
 * @param start 
 * @param end 
 */
void merge_sort_recursive(int arr[], int reg[], int start, int end) {
    if (start >= end)
        return;
    int len = end - start, mid = (len >> 1) + start;
    int start1 = start, end1 = mid;
    int start2 = mid + 1, end2 = end;
    merge_sort_recursive(arr, reg, start1, end1);
    merge_sort_recursive(arr, reg, start2, end2);
    int k = start;
    while (start1 <= end1 && start2 <= end2)
        reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
    while (start1 <= end1)
        reg[k++] = arr[start1++];
    while (start2 <= end2)
        reg[k++] = arr[start2++];
    for (k = start; k <= end; k++)
        arr[k] = reg[k];
}
void merge_sort(int arr[], const int len) {
    int reg[len];
    merge_sort_recursive(arr, reg, 0, len - 1);
}

int main (int argc, char *argv[]) {
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    // 计算数组循环次数 len,  
    // 因为sizeof 计算大小是以字节形式返回,所以这里的sizeof(arr)=56返回的结果会是数组arr大小14 * 4 所以这里需要除以 sizeof(*arr) 这个计算的是arr指针的数据类型的大小 这里arr为int 所以 sizeof(*arr) =4
    int len = (int) sizeof(arr) / sizeof(*arr);

    printf(" sizeof(arr)=%lu sizeof(*arr)=%lu\n", sizeof(arr),sizeof(*arr));

    //sort_merge(arr, len);
    merge_sort(arr,len);

    for (int i = 0; i < len; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
   return 0;
}

