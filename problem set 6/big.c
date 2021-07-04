    #include <stdio.h>
    #define max 1000
    int large(int[], int, int);
 
    int main()
    {
 
        int size;
        int largest;
        int list[max];
        int i;
 
        printf("Enter size of the list:");
        scanf("%d", &size);
 
        printf("enter the elements :\n");
        for (int i = 0; i < size; i++)
        {
            scanf("%d",&list[i]);
        }
        
 
        if (size == 0) 
        {
            printf("Empty list\n");
        }
 
        else 
        {
            largest = list[0];
            largest = large(list, size - 1, largest);
            printf("\nThe largest number in the list is: %d\n", largest);
        }
 
    }
 
    int large(int list[], int position, int largest)
    {
 
        if (position == 0)
            return largest;
 
        if (position > 0) 
        {
            if (list[position] > largest)
            {
                largest = list[position];
            }
            return large(list, position - 1, largest);
        }
 
    }