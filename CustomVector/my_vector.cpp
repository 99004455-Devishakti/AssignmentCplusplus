#include <bits/stdc++.h>
#include <iostream>
using namespace std;
template <typename T> class myVector
{
    T* arr;
    int capacity;
    int current;
public:
    /* Constructor of class*/
    myVector()
    {
        arr = new T[1];
        capacity = 1;
        current = 0;
    }
    /* Pushing with parameter*/
    void push(T data)
    {
        if (current == capacity) 
        {
            T* temp = new T[2 * capacity];
            for (int i = 0; i < capacity; i++) 
            {
                temp[i] = arr[i];
            }
            delete[] arr;
            capacity *= 2;
            arr = temp;
        }
        arr[current] = data;
        current++;
    }
    /* Pushing with index*/
    void push(int data, int index)
    {
        if (index == capacity)
        {
            push(data);
        }
        else{
            arr[index] = data;
        }
    }
    /* Getting elements according to index*/
    T get(int index)
    {
        if (index < current)
        {
            return arr[index];
        }
    }
    /* Popong of elements*/
    void pop() 
    { 
        current--; 
    }
    /* getting size of vector*/
    int size() 
    { 
        return current;
    }
    /* getting capacity of vector*/
    int getcapacity() 
    { 
        return capacity; 
    }
    /* displaying the vector elements */
    void display()
    {
        for (int i = 0; i < current; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    // front element
    T front()
    { 
        return arr[0]; 
    }
    //back element
    T back()
    { 
        return arr[current]; 
    }  
};
//Main function Implementation*/
int main()
{
    myVector<int> v;
    myVector<int> v1;
    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);
    v.push(50);
    v1.push(71);
    v1.push(72);
    v1.push(73);
    v1.push(74);
    cout << "Vector size : " << v.size() << endl;
    cout << "Vector capacity : " << v.getcapacity() << endl;
    cout << "Vector elements : ";
    v.display();
    v.push(100, 1);
    cout << "\nAfter updating 1st index" << endl;
    cout << "Vector elements of type int : " << endl;
    v.display();
    cout << "Vector elements of type int-2 : " << endl;
    v1.display();
    cout << "Element at 1st index of type int: " << v.get(1)  << endl;
    cout << "Element at 1st index of type int-2 "<< v1.get(1) << endl;
    v.pop();
    //checking of front back functions
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v1.pop();
    cout << "\nAfter deleting last element" << endl;
    cout << "Vector size of type int: " << v.size() << endl;
    cout << "Vector size of type int-2: " << v1.size()<< endl;
    cout << "Vector capacity of type int : "<< v.getcapacity() << endl;
    cout << "Vector capacity of type int-2 : "<< v1.getcapacity() << endl;
    cout << "Vector elements of type int: ";
    v.display();
    cout << "Vector elements of type int-2: ";
    v1.display();
    return 0;
}