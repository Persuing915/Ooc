#include<iostream>
using namesapce std;

class Shape
{
  public:
  	virtual void area()
	{
	  cout<<"Area of Shape="<<endl;
        }
};

class Circle: public Shape
{
 float radius;
 public: 
    Circle(float r)
    {
      radius=r;
    }
    void area() override
    {
      cout<<"AREA OF CIRCLE="<<3.14*radius*radius<<endl;
    }
};

class Rectangle: public Shape 
{
 	float length,width;
        public:
	       Rectangle(float l, float w)
               {
		length=l;
		 width=w;
	       }
 	   void area() override
		{
		  cout<<"Area Of Recatngle="<<length*width<<endl;
		}
};

int main()
{
 Shape *s;
 Circle c(5);
 Rectangle r(4,6);
 s=&c;
 s->area();
 s=&r;
 s->area();
 return 0;
}
