//∂—≈≈–Ú 30ms
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

void swap(int &a, int &b)
{
        int temp = a;
        a = b;
        b = temp;
}
void adjust_heap(int* A, int i, int heap_size)
{
        while (1)
        {
                int largest = i; 
                int left = 2*i;
                int right = 2*i+1;
                if (left <= heap_size && A[left] > A[largest])
                {
                        largest = left;
                }
                if (right <= heap_size && A[right] > A[largest])
                {
                        largest = right;
                }
                if (largest != i)
                {
                        swap(A[largest], A[i]);
                        i = largest;
                }
                else
                        break;
        }
}

void build_heap(int* A, int heap_size)
{
        int j = floor((float)heap_size/2);
        for (int i = j; i >= 1; i--)
                adjust_heap(A, i, heap_size);
}

void heapsort(int* A, int n, int m)
{
        if (m > n)
        {
                m = n;
        }
        int heap_size = n;
        build_heap(A, heap_size);
        while (heap_size >= n-m+1)
        {
                swap(A[1], A[heap_size]);
                heap_size--;
                adjust_heap(A, 1, heap_size);
        }
        for (int i = n; i >= n-m+1; i--)
        {
                if (i == n-m+1)
                        printf("%d", A[i]);
                else
                        printf("%d ", A[i]);
        }
        printf("\n");
}
int main()
{
        int n,m;
        int* A;
        while (scanf("%d%d", &n, &m) != EOF)
        {
                if (n == 0 && m == 0)
                        break;
                A = new int[n+1];
                for (int i = 1; i <= n; i++)
                        scanf("%d", &A[i]);
                heapsort(A, n, m); 
                delete A;
        }
        return 0;
}