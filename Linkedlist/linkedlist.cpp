#include <iostream>
using namespace std;

class linkedlist
{
    class node
    {
    public:
        int data;
        node *next;

        node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

    node *head = NULL;

public:
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int getFirst()
    {
        return head->data;
    }

    int getLast()
    {
        node *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
        }
        return temp->data;
    }

    int getAt(int idx)
    {
        node *temp = head;
        for (int i = 0; i <= idx; i++)
        {
            temp = temp->next;
        }
        return temp->data;
    }

    void addLast(int item)
    {
        node *nn = new node(item);
        if (head == NULL)
        {
            head = nn;
        }
        else
        {
            node *temp = head;
            while (temp != NULL)
            {
                temp = temp->next;
            }
            temp->next = nn;
        }
    }

    void addFirst(int item)
    {
        node *nn = new node(item);
        if (head == NULL)
        {
            head = nn;
        }
        else
        {
            nn->next = head;
            head = nn;
        }
    }

    void addAt(int item, int idx)
    {
        if (idx == 0)
        {
            addFirst(item);
        }
        else
        {
            node *nn = new node(item);
            node *temp = head;
            for (int i = 0; i < idx; i++)
            {
                temp = temp->next;
            }
            nn->next = temp->next;
            temp->next = nn;
        }
    }

    void removeLast()
    {
        if (head -> next == NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
            node *temp = head;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;
        }
    }

    void removeFirst()
    {
        if(head == NULL){
            delete head ;
            head = NULL;
        }else{
        node *temp = head->next;
        delete head ;
        head = temp;
        }
    }

    void removeAt(int idx)
    {
        if(idx = 0){
            removeFirst();
        }else{
        node *temp = head;
        for(int i=0; i < idx ; i++){
            temp = temp -> next;
        }
         node *temp1 = temp-> next;
         temp -> next = temp1 -> next;
         delete temp1;
        }
    }

    void reverse()
    {

    }

    int mid()
    {
    }

    int kthFromLast(int k)
    {
    }
};