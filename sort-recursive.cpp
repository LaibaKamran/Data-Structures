//#include<iostream>
// 
//using namespace std;
//
//void selectionSort(int arr[],int beginIndex, int size)
//{
//	if (beginIndex >= size - 1)
//	{
//		return;
//	}
//	int minIndex = beginIndex;
//	for (int i = beginIndex; i < size; i++)
//	{
//		if (arr[i] < arr[minIndex])
//		{
//			minIndex = i;
//		}
//	}
//	int temp = arr[minIndex];
//	arr[minIndex] = arr[beginIndex];
//	arr[beginIndex] = temp;
//	selectionSort(arr, beginIndex+1, size);
//}
//
//int main()
//{
//	int ar[5] = { 5,2,7,3,8 };
//	selectionSort(ar,0, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		cout << ar[i] << endl;
//	}
//}
