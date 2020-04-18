int countPairs1(int *arr,int len,int value)
{
const int len=10;
cin >> value;
int counter=0;
int arr[len] = { 1,2,3,4,4,5,6,6,7,8,9 };
for (int i = 0; i < (len-1); i++) 
    {
        for (int j = 1; j < len; j++) 
        {
            if ((arr[i] + arr[j]) == value)
               counter++;
        }
    }
return counter;
}

int countPairs2(int *arr,int len,int value)
{
const int len=10;
cin >> value;
int arr[len] = { 1,2,3,4,4,5,6,6,7,8,9 };
int counter = 0;
int first = 0;
int last = len-1;
for (first = 0, last = (len-1); first < (len-1) && last>0; first++, last--)
     if ((arr[first] + arr[last]) == value)
        counter++;
return counter;
}

int countPairs3(int *arr,int len,int value)
{
const int len=10;
cin >> value;
int arr[len] = { 1,2,3,4,4,5,6,6,7,8,9 };
int counter = 0;
int first = 0;
int last = len-1;
int mid=((first+1)+last)/2;
for (int i = 0; i < (len-1); i++) 
  {    
    if ((arr[i]+arr[mid]) == value) counter++;
    if ((arr[i]+arr[mid+1]) == value) counter++;
    if ((arr[i]+arr[mid-1]) == value) counter++;
      else if ((arr[i]+arr[mid]) > value) mid--;
      else if ((arr[i]+arr[mid]) < value) mid++;
  }
  return counter;
}
