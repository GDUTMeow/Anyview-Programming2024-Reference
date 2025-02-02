#include "allinclude.h" // DO NOT edit this line

void turningClockwise(char a[N][N])
{
    // 创建一个临时数组来存储周边元素
    char temp[N * 4 - 4];
    int index = 0;

    // 将上边存入临时数组
    for (int j = 0; j < N; j++)
    {
        temp[index++] = a[0][j];
    }

    // 将右边存入临时数组
    for (int i = 1; i < N; i++)
    {
        temp[index++] = a[i][N - 1];
    }

    // 将下边存入临时数组
    for (int j = N - 2; j >= 0; j--)
    {
        temp[index++] = a[N - 1][j];
    }

    // 将左边存入临时数组
    for (int i = N - 2; i > 0; i--)
    {
        temp[index++] = a[i][0];
    }

    // 将临时数组中的元素向右移动一位
    char last = temp[N * 4 - 5];
    for (int i = N * 4 - 5; i > 0; i--)
    {
        temp[i] = temp[i - 1];
    }
    temp[0] = last;

    // 将临时数组中的元素放回到原二维数组中
    index = 0;

    // 更新上边
    for (int j = 0; j < N; j++)
    {
        a[0][j] = temp[index++];
    }

    // 更新右边
    for (int i = 1; i < N; i++)
    {
        a[i][N - 1] = temp[index++];
    }

    // 更新下边
    for (int j = N - 2; j >= 0; j--)
    {
        a[N - 1][j] = temp[index++];
    }

    // 更新左边
    for (int i = N - 2; i > 0; i--)
    {
        a[i][0] = temp[index++];
    }
}
