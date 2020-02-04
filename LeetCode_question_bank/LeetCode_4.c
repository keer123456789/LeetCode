//
// Created by keer on 2020/2/4.
//
#include <stdlib.h>
double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size) {
    int sum = nums1Size + nums2Size;
    int *a = (int *) malloc(sizeof(int) * sum);
    int i = 0, j = 0, k = 0;
    for (; i < sum; i++) {
        if (j >= nums1Size) {
            a[i] = nums2[k];
            k++;
            continue;
        }
        if (k >= nums2Size) {
            a[i] = nums1[j];
            j++;
            continue;
        }
        if (nums1[j] < nums2[k] || k >= nums2Size) {
            a[i] = nums1[j];
            j++;
        } else if (nums1[j] >= nums2[k] || j >= nums1Size) {
            a[i] = nums2[k];
            k++;
        }
    }

    if (sum % 2 != 0) {
        return (double) a[sum / 2];
    } else {
        return (a[sum / 2] + a[sum / 2 - 1]) / 2.0;
    }

}