#include<stdio.h>
int main()
{
    int i,arr[99],num;

    printf("How Many Number You Want to Sum ?\n");
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        printf("Number[i+1]");
        scanf("%d",&arr[i]);
    }
    arrValue(arr,num);
    printf("%d",arrValue);

    getch();
    return 0;
}
int arrValue(int arr, int num)
{
    int result=0,i;
    for(i=0;i<num;i++)
    {
        result=result+arr[i];
    }
    return result;
}
