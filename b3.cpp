#include <iostream>
#include <cmath>

class point{
    private:
        double x;
        double y;
    public:
        void setcoordinates(double x,double y);
        void getcoordinates(double &x,double &y);
        double distance(const point &anotherpoint);
};
void point::setcoordinates(double x,double y){
    this->x=x;
    this->y=y;
}
void point::getcoordinates(double & x,double & y){
    x=this->x;
    y=this->y;
} 



double point::distance(const point &anotherpoint){
    double sq_xdiff,sq_ydiff;
    sq_xdiff=pow(anotherpoint.x-this->x,2);
    sq_ydiff=pow(anotherpoint.y-this->y,2);
    return sqrt(sq_ydiff+sq_xdiff);

}

class rectangle{
    private:
        point p;
        point q;
    public:
        void setpoints(const point &,const point &);
        void getdimensions(double &,double &);
        double perimeter();
};
void rectangle::setpoints(const point &a,const point &b){
    this->p=a;
    this->q=b;
}
void rectangle::getdimensions(double & l, double & w ){
    point r,s;
   double x1,x2,y1,y2;
   p.getcoordinates(x1,y1);
   q.getcoordinates(x2,y2);
   r.setcoordinates(x2,y1);
   s.setcoordinates(x1,y2);
   l=p.distance(r);
   w=q.distance(s);


}
double rectangle::perimeter(){
    double l,w;
    this->getdimensions(l,w);
    
    return 2*(l+w);
}




int main(){
    point p,q;
    double pe;
    p.setcoordinates(2,6);
    q.setcoordinates(6,12);
    rectangle a;
    a.setpoints(p,q);
    pe=a.perimeter();
    std::cout<<"the distance is "<<p.distance(q)<<std::endl;
    std::cout<<"the perimeter of the rectangle is:"<<pe<<std::endl;


    return 0;

}