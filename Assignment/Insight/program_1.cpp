#include <iostream>

class box
{
private:   
    int m_length;
    int m_breadth;
    int m_height;
    int m_volume;
   
public:
    /* Constructors */
    box();
    box(int val);
    box(int arr[]);
    box(int lenth, int breadth, int height);
    box(const box& ref);

    /* Getter function */
    int volume() const;
    int get_length() const;
    int get_breadth()const;
    int get_height()const;
    box* construct(int index);

    /* destructors */
    ~box();
};
box::box(/* args */):m_length(0.0), m_breadth(0.0), m_height(0.0), m_volume(0.0) {}

box::box(int val):m_length(val), m_breadth(val), m_height(val), m_volume(val * val * val) {}
box::box(int length, int breadth, int height):m_length(length), m_breadth(breadth), m_height(height), m_volume(length * breadth * height) {}
box::box(int arr[]):m_length(arr[0]), m_breadth(arr[1]), m_height(arr[2]), m_volume(arr[0]*arr[1]*arr[2]) { }
box::box(const box& ref):m_length(ref.m_length), m_breadth(ref.m_breadth), m_height(ref.m_height), m_volume(ref.m_length * ref.m_height * ref.m_breadth) {}

box::~box() {}
int box::volume() const{
    return m_length * m_breadth * m_height;
}

int box::get_length() const{
    return m_length;
}


int box::get_breadth() const{
    return m_breadth;
}

int box::get_height() const{
    return m_height;
}

box* construct(int index, box* p, int size){
    int count=0;
    while(count<size){
        if(count==index){
            box ab(20,14,36);
            *p=ab;
            return p;          
        }
        count++;
        p++;
    }
    return nullptr;
}

int main(){
    int arr[]={5,12,13};
    box b(arr);
    int n=5;
    int arr2[n][3];
    box arr3[n];
    int val=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[i][j]=val++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        arr3[i]=box(arr2[i]);
    }
    box arr4[n];
    box *ptr=arr4;

    box *temptr=construct(2, ptr, n);
}