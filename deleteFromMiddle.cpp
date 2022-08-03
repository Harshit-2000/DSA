// Cracking the coding Interview - Linked List - Question - 3

#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int val;
		Node *next = NULL;
		Node(int v){
			val = v;
		}
};

void deleteFromMiddle(Node* head, Node * curr){
	if (!head) return;

	while(true){
		if (!curr->next->next){
			curr->val = curr->next->val;
			curr->next = NULL;
			return;
		}

		curr->val = curr->next->val;
		curr = curr->next;
	}
}

int main()
{
	Node *head = new Node(1);

	head->next = new Node(2);

	head->next->next = new Node(3);

	Node* k = head->next->next->next = new Node(4);

	head->next->next->next->next = new Node(5);

	deleteFromMiddle(head, k);

	Node* curr = head;

	while(curr){
		cout << curr->val << ' ';
		curr = curr->next;
	}

	return 0;
}