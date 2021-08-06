#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr){
	int n = arr.size();
	int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){
	vector<int> arr = {2, 3, 5, 23, 3, 1, 8, 6};
	insertionSort(arr);
	for (int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] << ' ';
	}
}