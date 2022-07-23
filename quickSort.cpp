#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high){
	int pivot = arr[high];
	int j = low;

	for(int i = low; i <= high; i++){
		if (arr[i] <= pivot) {
			swap(arr[i], arr[j++]);
		}
	}

	return j - 1;
}

void quickSort(vector<int> &arr, int low, int high){
	if (low < high){
		int mid = partition(arr, low, high);

		quickSort(arr, low, mid - 1);
		quickSort(arr, mid + 1, high);
	}
}

int main()
{
	vector<int> arr = {5, 4, 2, 1, 3};
	quickSort(arr, 0, arr.size() - 1);
	for (int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] << ' ';
	}

}