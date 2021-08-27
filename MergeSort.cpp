#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> R, vector<int> L, vector<int>& arr){
	int nR = R.size();
	int nL = L.size();
	int i = 0, j = 0, k = 0;

	while(i < nR && j < nL){

		if (R[i] >= L[j]) arr[k++] = L[j++];

		else arr[k++] = R[i++];
	}

	while(i < nR) arr[k++] = R[i++];

	while(j < nL) arr[k++] = L[j++];
}

void mergeSort(vector<int> &arr){
	int n = arr.size();

	if (n < 2) return;

	int mid = n / 2;

	vector<int> L, R;

	for (int i = 0; i < mid; ++i) L.push_back(arr[i]);
	for (int i = mid; i < n; ++i) R.push_back(arr[i]);

	mergeSort(L);
	mergeSort(R);
	merge(R, L, arr);
}

int main()
{
	vector<int> arr = {1, -1, 1, 3, 4};
	mergeSort(arr);
	for (int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] << ' ';
	}
}