#include <iostream>

class Box
{
private:   
    int m_length;
    int m_breadth;
    int m_height;
    int m_volume;
   
public:
    /* Constructors */
    Box();
    Box(int val);
    Box(int arr[]);
    Box(int lenth, int breadth, int height);
    Box(const Box& ref);

    /* Getter function */
    int volume() const;
    int get_length() const;
    int get_breadth()const;
    int get_height()const;
    Box* construct(int index);

    /* destructors */
    ~Box();
};
Box::Box(/* args */):m_length(0.0), m_breadth(0.0), m_height(0.0), m_volume(0.0) {}

Box::Box(int val):m_length(val), m_breadth(val), m_height(val), m_volume(val * val * val) {}
Box::Box(int length, int breadth, int height):m_length(length), m_breadth(breadth), m_height(height), m_volume(length * breadth * height) {}
/* Array Constructors */
Box::Box(int arr[]):m_length(arr[0]), m_breadth(arr[1]), m_height(arr[2]), m_volume(arr[0]*arr[1]*arr[2]) { }
Box::Box(const Box& ref):m_length(ref.m_length), m_breadth(ref.m_breadth), m_height(ref.m_height), m_volume(ref.m_length * ref.m_height * ref.m_breadth) {}

Box::~Box() {}
int Box::volume() const{
    return m_length * m_breadth * m_height;
}

int Box::get_length() const{
    return m_length;
}


int Box::get_breadth() const{
    return m_breadth;
}

int Box::get_height() const{
    return m_height;
}

Box* construct(int index, Box* p, int s){
    int c=0;
    while(c<s){
        if(c==index){
            Box ab(20,14,36);
            *p=ab;
            return p;          
        }
        c++;
        p++;
    }
    return nullptr;
}

int main(){
    int arr1[]={5,12,13};
    Box bx(arr1);
    int n=5;
    int arr2[n][3];
    Box arr3[n];
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
        arr3[i]=Box(arr2[i]);
    }
    Box arr4[n];
    Box *ptr=arr4;
    Box *temp=construct(2, ptr, n);
    return 0;
}
