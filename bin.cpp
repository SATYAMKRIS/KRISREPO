#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int val)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == val)
			return mid;
		if (arr[mid] > val)
			return binarySearch(arr, l, mid - 1, val);
		return binarySearch(arr, mid + 1, r, val);
	}
	return -1;
}
int main(void)
{
	int arr[100],i,k,val;
    cout<<"Enter no of elements in an array";
    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the value to be search";
    cin>>val;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, val);
	(result == -1)
		? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
	return 0;
}
