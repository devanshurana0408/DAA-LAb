#include<stdio.h>
int main()
{
    int s,i,k,c=0;
    printf("Enter size of array");
    scanf("%d",&s);
    int arr[s];
    printf("enter the array elments");
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter key");
    scanf("%d",&k);
    for(i=0;i<s;i++)
    {
        if(k==arr[i])
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("Element not found");

    }
    else
    {
        printf("Element found::%d",c);
    }
    return 0;
}
