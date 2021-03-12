#include "PriorityQueue.cpp"
#include "Queue.cpp"

int main()
{
    Queue<int> Q;
    for (int i = 0; i < 12; i++)
    {
        try
        {
            Q.enqueue(i);
            cout << endl;
        }
        catch (string const s)
        {
            cout << s << " Element: " << i << endl;
        }
    }
    Q.print();
    for (int i = 0; i < 13; i++)
    {
        try
        {
            cout << Q.dequeue() << endl;
        }
        catch (string const s)
        {
            cout << s << " Percobaan ke: " << i << endl;
        }
    }

    PriorityQueue<int> PQ;
    for (int i = 0; i < 13; i++)
    {
        try
        {
            PQ.enqueue(i, i * 2);
            cout << endl;
        }
        catch (string const s)
        {
            cout << s << endl;
        }
    }
    PQ.print();
    for (int i = 0; i < 13; i++)
    {
        try
        {
            cout << PQ.dequeue() << endl;
        }
        catch (string const s)
        {
            cout << s << " Percobaan ke: " << i << endl;
        }
    }
}