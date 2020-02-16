//
// Created by keer on 2020/2/16.
//
#define  flag 1


/**
 * 暴力检索法
 * @param height
 * @param heightSize
 * @return
 */
int maxArea1(int *height, int heightSize) {
    int max = 0;
    for (int i = 0; i < heightSize; i++) {
        for (int j = heightSize - 1; j > i; j--) {
            int area = 0;
            if (height[i] > height[j]) {
                area = (j - i) * height[j];
            } else {
                area = (j - i) * height[i];

            }

            if (area > max) {
                max = area;
            }
        }
    }

    return max;
}

/**
 * 双指针法
 * @param height
 * @param heightSize
 * @return
 */
int maxArea2(int *height, int heightSize) {
    int max = 0;
    int start, end;
    start = 0;
    end = heightSize - 1;
    for (int size = heightSize - 1; start != end; size--) {
        int area = 0;
        if (height[start] < height[end]) {
            area = size * height[start];
            start++;
        } else {
            area = size * height[end];
            end--;
        }
        if (area > max) {
            max = area;
        }
    }
    return max;
}

int maxArea(int *height, int heightSize) {
    switch (flag) {
        case 1: {
            return maxArea1(height, heightSize);
        }
            break;
        case 2: {

        }
            break;
    }
}