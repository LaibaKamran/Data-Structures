//#include<iostream>
//
//using namespace std;
//
//int max(int arr[], int size)
//{
//	if (size == 1)
//	{
//		return arr[0];
//	}
//	int prevmax = max(arr+1, size-1);
//	if (arr[0] > prevmax)
//	{
//		return arr[0];
//	}
//	return prevmax;
//}
//
//int main()
//{
//	int ar[4] = {8,2,4,7};
//	cout << max(ar, 4);
//}