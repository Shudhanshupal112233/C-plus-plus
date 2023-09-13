
#include <iostream>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *insertatend(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void print(Node *&head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "\t";
        ptr = ptr->next;
    }
}
Node *solve(Node *first, Node *second)
{
    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }
    Node *curr1 = first;
    Node *curr2 = second;
    Node *next1 = curr1->next;
    Node *next2 = curr2->next;
    while (next1 != NULL && curr2 != NULL)
    {
        if (curr2->data >= curr1->data && curr2->data <= next1->data)
        {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            // update pointers
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = next1;
            next1 = next1->next;

            if (next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}
Node *merge(Node *first, Node *second)
{
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }
    if (first->data <= second->data)
    {
        return solve(first, second);
    }
    if (second->data <= first->data)
    {
        return solve(second, first);
    }
}
int main()
{
    Node *head1 = new Node(2);
    Node *tail1 = head1;

    print(head1);
    cout << endl;
    Node *head2 = new Node(1);
    Node *tail2 = head2;

    print(head2);
    Node *s=merge(head1, head2);
    cout << endl
         << "after merging two sorted nodes:" << endl;
    print(s);
}