#include "Queue.cpp"
template <class T>
class PriorityQueue : public Queue<T>
{
private:
    int *priorities;

public:
    PriorityQueue() : Queue<T>()
    {
        this->priorities = new T[10];
    };

    ~PriorityQueue()
    {
        delete[] this->priorities;
    }

    void enqueue(const T &el, int prio)
    {
        if (this->nElements == 10)
        {
            throw "PrioQueue is Full";
        }
        else
        {
            int tempNEl = this->nElements;
            while (tempNEl > 0 && this->priorities[tempNEl - 1] < p)
            {
                tempNEl--;
            }

            for (int i = this->nElements; i > tempNEl; i--)
            {
                this->elements[i] = this->elements[i - 1];
                this->priorities[i] = this->priorities[i - 1];
            }

            this->elements[tempNEl] = el;
            this->priorities[tempNEl] = prio;
            this->nElements++;
        }
    }

    T dequeue()
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
                this->priorities[i] = this->priorities[i + 1];
            }
            return head;
        }
    }

    // Method print tidak perlu di override karena sama saja
    // kecuali prionya juga ikut di print, namun kali ini
    // saya asumsikan tidak, heheh.
};
