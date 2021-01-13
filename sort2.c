#include<stdio.h>
void Merge(int a[], int low, int high, int mid)
{

int i=low,j=mid+1,k=0;
int temp[high-low+1];

while(i<=mid && j<= high)
{
    if(a[i]>a[j])
        temp[k++]=a[i++];

    else
        temp[k++]=a[j++];

}

while(i<=mid)
    {
        temp[k++]=a[i++];
    }

while(j<=high)
    {
        temp[k++]=a[j++];
    }

for(i=low;i<=high;i++)
{

    a[i]=temp[i-low];

}


return;
}


void MergeSort(int a[],int low, int high)
 {
int mid;

if(low<high)
{
    mid=(low+high)/2;

    MergeSort(a,low,mid);
    MergeSort(a,mid+1,high);

    Merge(a,low,high,mid);
}

return;
}


void output(int *a,int n)
{
	int i;
 for( i=0;i<n;i++)
 {
     printf("%d",a[i]);
     printf("\t");
 }
}

int main()
{
 int n=12;
 int a[]={23,45,1,2,8,0,9,56,73,507,20,16};
 MergeSort(a,0,n);
 output(a,n);
    printf("\n\n\n");
    return 0;
}
