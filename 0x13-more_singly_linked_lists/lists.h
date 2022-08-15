Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@spasmflow 
MelissaN
/
holbertonschool-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
holbertonschool-low_level_programming/0x12-more_singly_linked_lists/lists.h

MelissaN add more function prototypes
Latest commit 60dd197 on Mar 7, 2018
 History
 0 contributors
38 lines (34 sloc)  1.09 KB

#ifndef LISTS_H
#define LISTS_H

#include <stdio.h> /* printf */
#include <stdlib.h> /* malloc, free */
#include <string.h> /* size_t */

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* function prototypes */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
listint_t *find_listint_loop(listint_t *head);

#endif
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
You have no unread notifications
