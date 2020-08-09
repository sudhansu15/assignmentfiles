#include <iostream>
#include <string>
#define MAX 10


class student{
    private:
        std::string name;
        long books[MAX];
        int bookborrowed;
    public:
        int index;
        student();
        void setname(const std::string &);
        std::string getname();
        void issuebook(long id);
        void getissuedbooks(long (&x)[MAX]);
        
};

student::student(){
    this->bookborrowed=0;
    for(index=0;index<MAX;index++){
        this->books[index]=-1;

    }
}
void student::setname(const std::string &name){
    this->name = name;
}

std::string student::getname(){
        return this->name;
}

void student::issuebook(long id){
    if(bookborrowed>=MAX)
    {
        std::cout<<"cannot issue more than 10 books!!!"<<std::endl;
    }
    else{
        this->books[bookborrowed] = id;
        bookborrowed++;
    }

}

void student::getissuedbooks(long (&x)[MAX]){
    for(index=0;index<MAX;index++){
       x[index]=this->books[index];

    }
}


int main(){
    student s1;
    
    s1.setname("Sudhansu");
    std::cout<<s1.getname()<<std::endl;


    s1.issuebook(1234235);
    s1.issuebook(445792111);

    long bookid[MAX];
    int i;

    s1.getissuedbooks(bookid);
    for(int elem:bookid){
        std::cout<<elem<<std::endl;
    }




    return 0;
}




