void bubble_sort(int array [], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                print_array(array, n);
            }
            
        }
    
    }                   

}
