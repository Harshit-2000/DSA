// Cracking the coding Interview - Linked List - Question - 1

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

void removeDublicates(Node *head){

	// Soln - 1
	// Time Complexity - O(n)
	// Space Complexity - O(n)

	if (!head) return;

	unordered_set<int> s;
	s.insert(head->val);

	Node* curr = head;

	while(curr->next){
		int v = curr->next->val;
		if (s.find(v) == s.end()){
			s.insert(v);
			curr = curr->next;
		}
		else{
			curr->next = curr->next->next;
		}
	}
}

void removeDublicatesConstantSpace(Node* head){

	// Time Complexity - O(n^2) 
	// Space Complexity - O(1)

	Node* start = head;

	while(start){
		Node *curr = start;

		while(curr->next){
			if (curr->next->val == start->val) {
				curr->next = curr->next->next;
			}
			else{
				curr = curr->next;
			}
		}

		start = start->next;
	}
}

int main()
{
	Node *head = new Node(4);

	head->next = new Node(2);

	head->next->next = new Node(5);

	head->next->next->next = new Node(4);

	head->next->next->next->next = new Node(5);

	Node *curr = head;

	// removeDublicates(head);

	removeDublicatesConstantSpace(head);

	while(curr){
		cout << curr->val << ' ';
		curr = curr->next;
	}

	return 0;
}