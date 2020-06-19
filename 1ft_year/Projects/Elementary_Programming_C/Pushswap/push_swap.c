/*
** EPITECH PROJECT, 2017
** push_swap
** File description:
** sort nbr
*/
#include<stdio.h>

void shell_sort (int *a, int n)
{
	int h, i, j, k;
	for (h = n; h /= 2;) {
		for (i = h; i < n; i++) {
			k = a[i];
			for (j = i; j >= h && k < a[j - h]; j -= h) {
				a[j] = a[j -h];
			}
			a[j] = k;
		}
	}
}

int main (int ac, int **av)
{
	int a[] = {4, 82, -28, -732, 28, 1, 29, 0, -12, -389};
	int n = sizeof a / sizeof a[0];
	int i;

	shell_sort(a, n);
	for (i = 0; i < n; i++)
	printf("%d%s", a[i], i == n - 1 ? "\n" : " ");
	return 0;
}