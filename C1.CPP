#include <iostream>


class vector{
    private:
        int *x;
        int *y;
        int *z;
    public:
        vector();
        vector(int x,int y,int z);
        vector(const vector &v);
        vector add(const vector& other);
        ~vector();
        void print();

};
vector::vector(){
    x=nullptr;
    y=nullptr;
    z=nullptr;
}
vector::vector(int x,int y,int z=0 ){
    this->x=new int(x);
    this->y=new int(y);
    this->z=new int(z);
    std::cout<<"constructor called"<<std::endl;
}

vector vector::add(const vector &other){
    int a,b,c;
    a=*(this->x)+*(other.x);
    b=*(this->y)+*(other.y);
    c=*(this->z)+*(other.z);
    vector v(a,b,c);
    return v;
}

vector::vector(const vector &v){
    *(this->x)=*(v.x);
    *(this->y)=*(v.y);
    *(this->z)=*(v.z);
    std::cout<<"copy constructor called"<<std::endl;
}

vector::~vector(){
    delete x;
    delete y;
    delete z;
    std::cout<<"destructor called"<<std::endl;
}

void vector::print(){
    std::cout<<*(this->x)<<":"<<*(this->y)<<":"<<*(this->z)<<std::endl;
}

int main(){
    vector v1(3,6,7);
    vector v2(6,4);
    vector v3(v1.add(v2));
   v1.print();
   v2.print();
   v3.print();


    return 0;
}