

int square(int number){
	return number*number;
	
}

//------------------------------------------------------------------------------------------------------

int gcd(int a, int b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
}

//------------------------------------------------------------------------------------------------------

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 
/*

int binarySearch(int arr[],  int x) {
	int n = sizeof(arr) / sizeof(arr[0]); 
	return binarySearchHelper(arr,0,n-1,x);
}
*/

//------------------------------------------------------------------------------------------------------

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(int arr[],int n)  
{  
	

    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
} 

//------------------------------------------------------------------------------------------------------


int fib(int n) 
{ 
  int a = 0, b = 1, c, i; 
  if( n == 0) 
    return a; 
  for (i = 2; i <= n; i++) 
  { 
     c = a + b; 
     a = b; 
     b = c; 
  } 
  return b; 
} 
//------------------------------------------------------------------------------------------------------

/* Function to get sum of digits */
int getSum(int n) 
{  
   int sum = 0; 
   while (n != 0) 
   { 
       sum = sum + n % 10; 
       n = n/10; 
   } 
   return sum; 
} 
//------------------------------------------------------------------------------------------------------

int largest(int arr[],int n) 
{ 
    int i;  
      
    // Initialize maximum element 
    int max = arr[0]; 
  
    // Traverse array elements  
    // from second and compare 
    // every element with current max  
    for (i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
    return max; 
} 

//------------------------------------------------------------------------------------------------------

int sumOfArr(int arr[],int n)
{
	int sum = 0; // initialize sum 
  
    // Iterate through all elements  
    // and add them to sum 
    for (int i = 0; i < n; i++) 
    sum += arr[i]; 
  
    return sum; 

}

//------------------------------------------------------------------------------------------------------

int arraySortedOrNot(int arr[], int n) 
{ 
    // Array has one or no element or the 
    // rest are already checked and approved. 
    if (n == 1 || n == 0) 
        return 1; 
  
    // Unsorted pair found (Equal values allowed) 
    if (arr[n - 1] < arr[n - 2]) 
        return 0; 
  
    // Last pair was sorted 
    // Keep on checking 
    return arraySortedOrNot(arr, n - 1); 
} 




//------------------------------------------------------------------------------------------------------

double average(int a[],int n) 
{ 
    // Find sum of array element 
    int sum = 0; 
    for (int i=0; i<n; i++) 
       sum += a[i]; 
  
    return sum/n; 
} 