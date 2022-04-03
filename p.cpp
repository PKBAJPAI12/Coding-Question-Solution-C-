#include<iostream>

using namespace std;

struct cord                                //Structure for the cordinate

{

int xcord;

int ycord;

}p,q,r;                                     //objects of coordinates

int main()

{

cord p;

cout<<"Enter the coordinates of P1:";

cin>>p.xcord>>p.ycord;

cord q;

cout<<"Enter the coordinates of P2:";

cin>>q.xcord>>q.ycord;

cord r;

r.xcord=p.xcord+q.xcord;

r.ycord=p.ycord+q.ycord;

cout<<"\nCoordinates of P1+P2:"<<r.xcord<<","<<r.ycord;             //sum of coordinates

return 0; 

}