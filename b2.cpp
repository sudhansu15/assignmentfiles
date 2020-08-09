#include <iostream>
#include <string>


enum grade {a,aminus,b,bminus,c,cminus,d,f};

class student{
    private:
        
        std::string name;
        grade g;
    public:
        std::string getname();
        void setname(const std::string &name);
        void setgrade(grade x);
        grade getgrade();

};

void student::setname(const std::string &name)
{
    this->name = name;
}

std::string student::getname()
{
    return this->name;
}

void student::setgrade(grade h){
    this->g=h;
}

grade student::getgrade(){
    return this->g;
}

int main(){
    student s;
    s.setname("sudhansu");
    s.setgrade(f);
    std::cout<<"the grade of student:"<<s.getname()<<" is :"<<std::endl;

        switch(s.getgrade()){

        case 0: 
            std::cout<<"A"<<std::endl;
            break;
        case 1:
            std::cout<<"A-"<<std::endl;
            break;
        case 2: 
            std::cout<<"B"<<std::endl;
            break;
        case 3: 
            std::cout<<"B-"<<std::endl;
            break;
        case 4: 
            std::cout<<"C"<<std::endl;
            break;
        case 5: 
            std::cout<<"C-"<<std::endl;
            break;
        case 6: 
            std::cout<<"D"<<std::endl;
            break;
        case 7: 
            std::cout<<"F"<<std::endl;
            break;
    }


     return 0;

}







