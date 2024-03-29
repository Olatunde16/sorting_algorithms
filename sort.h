#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Printing helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting Algorithms Functions */

/* Function to swap two integers */
void swap_ints(int *a, int *b);
/* Function to perform Bubble Sort on an array of integers */
void bubble_sort(int *array, size_t size);

/* Function to swap two nodes in a doubly linked list */
void swap_nodes(listint_t **list, listint_t **node1, listint_t *node2);
/* Function to perform Insertion Sort on a doubly linked list */
void insertion_sort_list(listint_t **list);

/* Function to perform Selection Sort on an array of integers */
void selection_sort(int *array, size_t size);

/* Function that implements the Lomuto partition for Quick Sort */
int lomuto_partition(int *array, size_t size, int left, int right);
/* Function that implements the Quick Sort algorithm using the Lomuto partition scheme */
void quick_sort_recursive(int *array, size_t size, int left, int right);
/* Function that calls the recursive function quick_sort_recursive to sort the entire array */
void quick_sort(int *array, size_t size);

/* Function that sorts an array of integers in ascending order using the Shell sort algorithm, using the Knuth sequence */
void shell_sort(int *array, size_t size);

void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **shaker);
void swap_node_behind(listint_t **list, listint_t **tail, listint_t **shaker);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /* SORT_H */
