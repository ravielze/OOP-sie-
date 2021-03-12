#include <iostream>

using namespace std;

template <class T>
class Queue
{
protected: //Diubah jadi protected biar prioqueue bisa akses
    T *elements;
    int nElements;

public:
    Queue()
    {
        this->elements = new T[10];
        this->nElements = 0;
    }

    // Divirtualkan karena anaknya pasti punya dtor yang berbeda
    virtual ~Queue()
    {
        delete[] this->elements;
    }

    // Divirtualkan karena enqueue anaknya akan berbeda
    virtual void enqueue(const T &)
    {
        if (this->nElements == 10)
        {
            throw "Queue is Full";
        }
        else
        {
            this->elements[this->nElements] = t;
            this->nElements++;
        }
    }

    // Divirtualkan karena dequeue anaknya akan berbeda
    // dan akan merusak prioqueue apabila bisa dequeue yang ini terpakai
    virtual T dequeue()
    {
        if (this->nElements == 0)
        {
            throw "Queue is Empty";
        }
        else
        {
            T head = this->elements[0];
            this->nElements--;
            for (int i = 0; i < this->nElements; i--)
            {
                this->elements[i] = this->elements[i + 1];
            }
            return head;
        }
    }

    void print()
    {
        cout << "[";
        if (nElements > 0)
        {
            cout << elements[0];
        }
        for (int i = 1; i < nElements; i++)
        {
            cout << "," << elements[i];
        }
        cout << "]" << endl;
    }
};
