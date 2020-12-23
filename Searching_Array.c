#include<stdio.h>
int search(int a[],int n);
int max(int a[],int n);
int min(int a[],int n);
int tol(int a[],int n);
int main()
{
    int a[190];
    int n,i;
    int choice;
    // Array Element 
    printf("How many Element Do you have?:");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("%d.)",i+1);
        scanf("%d",&a[i]);

    }

    printf("\nElement Add successfully");
    printf("\n\n\n");

    
    printf("\n=*-=*-=*-=*-=*-=*-=*-=*-=*-=*-=*-=*-=*-=*-=*-=*-\n");
    printf("Element :");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Search Element - Enter - 1\n");
    printf("Maximum Number - Enter - 2\n");
    printf("Minimum Number - Enter - 3\n");
    printf("Total          - Enter - 4\n");
    printf("Enter Your choice:");
    scanf("%d",&choice);
    printf("\n=*-=*-=*-=*-=*-=*-=*-=*-=*-=*-=*-=*-=*-=*-=*-=*-\n");

    /// switch statement
    switch(choice)
    {
        case 1:
        {
            search(a,n);
            break;
        }
        case 2:
        {
            max(a,n);
            break;
        }
        case 3:
        {
            min(a,n);
            break;
        }
        case 4:
        {
            tol(a,n);
            break;
        }
    }

}

// Search element

int search(int a[],int n)
{
    int x,i;
    printf("\nwhat element should you find ?:");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("\nThe element is Found");
        }
    }    
    printf("\n\n");
}

//// Maximum Element
int max(int a[],int n)
{
    int i;
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i]) max=a[i];
    }
    printf("Maximum Number Is :%d",max);
    printf("\n\n");
}

/// Minmum Element
int min(int a[],int n)
{
    int i;
    int min=a[0];

    for(i=0;i<n;i++)
    {
        if(min>a[i]) min=a[i];

    }
    printf("Minimum Number Is :%d",min);
}

/// Total element
int tol(int a[],int n)
{
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    printf("\nTotal = %d",sum);
    printf("\n\n");
}















