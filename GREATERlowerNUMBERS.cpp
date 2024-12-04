#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Size: ";
	cin >> size;
	int data[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Elements of Array: ";
		cin >> data[i];
	}
	int j = 0;
	int word[size];
	for (int i = 1; i < size - 1; i++)
	{
		if (data[i] > data[i + 1] && data[i] > data[i - 1])
		{
			word[j] = data[i];
			j++;
		}
	}
	for(int i=0; i<j; i++){
	cout<<word[i]<<" ";
	}
}