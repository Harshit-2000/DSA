#include <bits/stdc++.h>
using namespace std;

template <typename t> class DynamicArray{
	private:
		t* arr;
		int size;
		int currIndex;

	public:
		DynamicArray(){
			arr = new t[1];
			size = 1;
			currIndex = 0;
		}

		void push_back(int x){
			if (size == currIndex) {
				// increase size by 2
				size *= 2;
				t* temp = new t[size];

				for(int i = 0; i < currIndex; i++){
					temp[i] = arr[i];
				}

				delete arr;

				arr = temp;
			}

			arr[currIndex] = x;
			currIndex++;
		}

		void pop_back(){
			currIndex--;
		}

		int getSize(){
			return currIndex;
		}

		t get(int i){
			if (i < currIndex) return arr[i];
		}
};

int main()
{
	DynamicArray<int> arr;
	DynamicArray<char> arr2;

	arr2.push_back('a');
	arr2.push_back('b');
	arr2.push_back('c');
	arr2.push_back('d');


	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);


	for (int i = 0; i < arr.getSize(); ++i)
	{
		cout << arr.get(i) << ' ';
		cout << arr2.get(i) << ' ';
	}
}