#include <iostream>
using namespace std;
class a
{
public:
    void get()
    {
        cout << "this is aaaa";
    }
};
class b
{public:
    void put(){
        cout << "this is bbbb";
    }
};
class c:public a,public b{
    public:
    void print(){
        cout<<"this is cccc";
    }
};
int main(){
    c obj;
    obj.get();
    obj.put();
    obj.print();
    return 0;
}
