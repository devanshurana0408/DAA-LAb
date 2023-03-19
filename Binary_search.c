#include <stdio.h>
int binarysearch(int key, int l, int h, int arr[])
{
    if (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
            binarysearch(key, l, mid - 1, arr);
        else
            binarysearch(key, mid + 1, h, arr);
    }
    else{
    return 0;
}
}
int main()
{
    int n, l = 0, h, pos = 0, arr[100], key;
    printf("ENTER SIZE OF ARRAY");
    scanf("%d", &n);
    h = n - 1;
    for (int i = 0; i < n; i++)
    {
        printf("ENTER ELEMENT %d OF ARRAY", i);
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE KEY");
    scanf("%d", &key);
    pos = binarysearch(key, l, h, arr);
    if (pos == 0)
    {
        printf("%d NOT FOUND", key);
    }
    else
    {
        printf("ELEMENT IIS FOUND AT %d", pos);
    }
}
