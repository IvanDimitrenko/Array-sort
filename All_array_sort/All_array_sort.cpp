#include<iostream>
#include<time.h>
#include <algorithm> 

 
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void Buble_Sort(int arr[], const int n);

void Selection_Sort(int arr[], const int n);

void Incer_Sort(int arr[], const int n);

void binuri_sort(int arr[], const int n);

void Buble_recursion(int arr[], const int n, int i = 0, int j = 0);

void Quick_Sortq(int arr[], const int n)
{
	int walk;
	





}


/*
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\\///
\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\///\\\    «она отчуждени€ !*/
void Bogo_Sort(int arr[], const int n);//\/\//\\\///
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\\\\\
\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//////

float  it = 0;
const int n = 9;

void Merge_Separat(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);

void main()
{
	srand(time(0));
	int arr[n];

	    //	cout << "Buble_sort\n";
		//	FillRand(arr, n);
		//	Print(arr, n);
		//	Buble_Sort(arr, n);

		//	cout << "Selection_sort\n";
		//	(arr, n);
		//	Print(arr, n);
		//	Selection_Sort(arr, n);

		//	cout << "Incer_sort\n";
		//	FillRand(arr, n);
		//	Print(arr, n);
		//	Incer_Sort(arr, n);	

	    //	 cout << "binuri_sort\n";
	   //    FillRand(arr, n);
	   //	 Print(arr, n);
	   //	 binuri_sort(arr, n);

		//	cout << "Buble_recursion\n";
		//	FillRand(arr, n);
		//	Print(arr, n);
		//	Buble_recursion(arr, n);

        cout << "Merge_Sort\n";
        FillRand(arr, n);
        Merge_Separat(arr, 0 , n - 1);
	    cout << endl << "counter: " << it << endl << endl;
	    Print(arr, n);


	  FillRand(arr,n);
	  Print(arr, n);
	  Bogo_Sort(arr,n);
	  Print(arr, n);
}


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
	//	if(arr[i] > 0 && arr[i] <= 100)
		cout << arr[i] << " ";
	}
	cout << endl;
}

void FillRand(int arr[], const int n)
{
	it = 0;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100+1;
	}

}

void Buble_recursion(int arr[], const int n, int i, int j) //чисто по приколу. ’з есть ли такой вариант сортировки, фигн€, из за того что только до 58 елементов работате
{
	int buff; 
	if (arr[i] < arr[j])
	{
		buff = arr[i];
		arr[i] = arr[j];
		arr[j] = buff;
		it++;
	}
	if (j <= n)
	{
		return Buble_recursion(arr, n, i, j + 1);
	}
	if (i < n - 1)
	{
		return Buble_recursion(arr, n, i + 1, j = 0);
	}
	else
	{
		cout << '\n';
		Print(arr, n);
		cout << "counter: " << it << endl;
		return;
	}

} 

void Buble_Sort(int arr[], const int n)
{   int temp = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			it++;
		}
	}
	Print(arr, n);
	cout << "counter: " << it << endl;
}

void Selection_Sort(int arr[], const int n)
{ int counter = 0;
	int temp = 0;               
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++) // n = 13, counter = 105
			{
				if (arr[i] > arr[j])
				{
					temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
					it++;
			}
		}
		//cout  << "counter: " << counter << "\t Selection sort " << endl;
		cout << "counter: " << it << endl;
	//	Print(arr, n);

}

void Incer_Sort(int arr[], const int n)
{
	int temp = 0;
	int j;
	for (int i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && temp < arr[j])
		{
			arr[j + 1] = arr[j];
			arr[j] = temp;
			j--;
			it++;
		}
	}
	//cout << "Incer sort\t" << "counter: " << counter1 << endl;
	//Print(arr, n);
	cout << "counter: " << it << endl;
}

int Search_Binary(int arr[], int left, int right, int key)
{
	int midd = 0;
	while (1)
	{
		midd = (left + right) / 2;
		if (key < arr[midd])       // если искомое меньше значени€ в €чейке
			right = midd - 1;      // смещаем правую границу поиска
		else if (key > arr[midd])  // если искомое больше значени€ в €чейке
			left = midd + 1;	   // смещаем левую границу поиска
		else                       // иначе (значени€ равны)
			return midd;           // функци€ возвращает индекс €чейки
				
		if (left > right)          // если границы сомкнулись 
			return -1;
	}
}

void binuri_sort(int arr[], const int n)
{
	int temp = 0;
	int mid = 0;
	for (int i = 1; i < n; i++)
	{
		int r = i, l = 0;
		temp = arr[i];
		while (l < r)
		{
			mid = l + (r - l) / 2;
			if (temp < arr[mid])
			{
				r = mid;
			}
			else
			{
				l = mid + 1;
			}
			it++;
		}
		for (int j = i; j > l; j--)
		{
			swap(arr[j], arr[j - 1]);
		}
		arr[l] = temp;
	}
		//Print(arr, n);
	cout << "counter: " << it << '\n';
}

void merge(int arr[], int l, int m, int r)
{
	int i , j , k ;
	int n1 = m - l + 1;
	int n2 = r - m;

	int* L; int* R;
	L = new int[n1 + 1];   
	R = new int[n2 + 1];

	for (i = 0; i < n1; i++)
	{
		L[i] = arr[l + i];
	}
	for (j = 0; j < n2; j++)
	{
		R[j] = arr[m + 1 + j];
	}
	i = 0, j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i]; i++;
		}
		else
		{
			arr[k] = R[j]; j++;
		}
		k++;
	}
	while (i < n1)
	{
		arr[k] = L[i]; i++; k++;
	}
	while (j < n2)
	{
		arr[k] = R[j]; j++; k++;
	}
	cout << "Left  arr[L]: "; Print(L, n);
	cout << "Right arr[R]: "; Print(R, n);
	cout << "Main  arr[N]: "; Print(arr, n);
	delete[] L;
	delete[] R;
}

void Merge_Separat(int arr[], int l, int r)
{
	if (l < r)
	{
		it++;
		int m = l + (r - l) / 2;

		Merge_Separat(arr, l, m);

		Merge_Separat(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}


void Bogo_Sort(int arr[], const int n)// To generate permuatation of the array
{
	for (int N = n - 1; N >= 0; --N)
	{
		if (arr[N] < arr[N - 1])
		{
			for (int i = 0; i < n; i++)
			{
				swap(arr[i], arr[rand() % n]);
			}
			it++;
			N = n;
		}
	}
	cout << "counter: " << it << endl;
	return;
} 








