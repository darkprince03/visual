/*
 * List.cpp
 *
 *  Created on: Sep 25, 2019
 *      Author: user
 */

#include<iostream>
using namespace std;
struct link {
	int a;
	struct link *next;
};
void insert(struct link **head)
{
	struct link *node,*node1;
	int data;
	node = *head;
	while (true) {
		cout << "Enter Data: ";
		cin >> data;
		if (data == -1)
			break;
		else
		{
			node1 = (struct link*)malloc(sizeof(struct link*));
			node->next = node1;
			node = node->next;
			node->a = data;
			node->next = NULL;

		}
	}
}
void print(struct link *head) {
	if (head == NULL)
		return;
	else
	{
		cout << head->a << endl;
		print(head->next);
	}
}

void insert1(struct link **head1, struct link **head2)
{
	struct link *node, *node1,*node2;
	int data;
	node1 = *head1;
	node2 = *head2;
	while (node1->next != NULL)
	{
		node1 = node1->next;
	}
	while (node2->next != NULL)
	{
		node2 = node2->next;
	}
	while (true) {
		cout << "Enter Data: ";
		cin >> data;
		if (data == -1)
			break;
		else
		{
			node = (struct link*)malloc(sizeof(struct link*));
			node1->next = node;
			node1 = node1->next;
			node1->a = data;
			node1->next = NULL;
			node2->next = node;
			node2 = node2->next;
			node2->a = data;
			node2->next = NULL;

		}
	}
}

void merge(struct link *list1, struct link *list2) {
	struct link *node1, *node2;
	node1 = list1;
	node2 = list2;
	while (node1->next != NULL)
	{
		node1 = node1->next;
	}
	while (node2->next != NULL)
	{
		node2 = node2->next;
	}
	if (node1 == node2)
	{
		cout << "Both List are merging into each other " << endl;
	}
	else
	{
		cout << "Both List are not merging"<<endl;
	}
}


int main()
{
	struct link *head1, *head2;
	int data;
	head1 = (struct link*)malloc(sizeof(struct link*));
	cout << "Enter Data:(head1) ";
	cin >> data;
	head1->a = data;
	head1->next = NULL;
	insert(&head1);
	cout << "Link List 1" << endl;
	print(head1);


	head2 = (struct link*)malloc(sizeof(struct link*));
	cout << "Enter Data:(head2) ";
	cin >> data;
	head2->a = data;
	head2->next = NULL;
	insert(&head2);
	cout << "Link List 2" << endl;
	print(head2);

	merge(head1, head2);

	insert1(&head1, &head2);
	cout << "Link List 1" << endl;
	print(head1);
	cout << "Link List 2" << endl;
	print(head2);
	merge(head1, head2);

	return 0;
}


