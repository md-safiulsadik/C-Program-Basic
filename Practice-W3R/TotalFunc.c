/*user input numbers to sum them */
#include<stdio.h>
int arrayValue(int arr[],int num);
int main()
{
    int i,arr[100],num,total;

    printf("How Many Number You Want to Sum ?\n");
    scanf("%d",&num);

    for(i = 0; i < num; i++)
    {
        printf("Input Number [%d] :",i+1);
        scanf("%d",&arr[i]);
    }

    total=arrayValue(arr,num);

    printf("Total = %d",total);

    return 0;
}

int arrayValue(int arr[],int num)
{
    int result=0,a;

    for ( a = 0; a < num; a++)
    {
        result = result + arr[a];
    }
    return result;
}
