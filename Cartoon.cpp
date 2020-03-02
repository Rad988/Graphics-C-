#include <graphics.h>
#include<iostream>
using namespace std;


void boundaryFill4(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color &&
       getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryFill4(x + 1, y, fill_color, boundary_color);
        boundaryFill4(x, y + 1, fill_color, boundary_color);
        boundaryFill4(x - 1, y, fill_color, boundary_color);
        boundaryFill4(x, y - 1, fill_color, boundary_color);
    }
}


int main()
{
    cout<<"Cartoon drawn by Radil Koju"<<endl;
    initwindow(1000,1000,"Cartoon");
    //Face
    circle(500,200,100);
    boundaryFill4(500,200,10,15);


    //Eyes
    circle(450,200,25);
    boundaryFill4(450,200,3,15);
    circle(550,200,25);
    boundaryFill4(550,200,3,15);
    circle(450,200,10);
    boundaryFill4(450,200,0,15);
    circle(550,200,10);
    boundaryFill4(550,200,0,15);


    //glass
    line(475,200,525,200);
    line(425,200,402,185);
    line(575,200,598,185);


    //Nose
    int nose[]={500,215,485,200,515,200,500,215
    };
    drawpoly(4,nose);
    boundaryFill4(500,205,4,15);


    //Mouth
    int mouth[]={475,250,525,250,525,275,475,275,475,250
    };
    drawpoly(5,mouth);
    boundaryFill4(500,260,6,15);
    line(475,262,525,262);


    //neck
    int neck[]={485,299,485,350,515,350,515,299,485,299
    };
    drawpoly(5,neck);
    boundaryFill4(500,320,10,15);


    //Body
    int body[]={375,350,375,550,625,550,625,350,375,350
    };
    drawpoly(5,body);
     boundaryFill4(376,351,11,15);
    line(500,350,500,550);
    circle(500,400,4);
    boundaryFill4(501,400,0,15);
    boundaryFill4(499,400,0,15);
    circle(500,450,4);
    boundaryFill4(501,450,0,15);
    boundaryFill4(499,450,0,15);
    circle(500,500,4);
    boundaryFill4(501,500,0,15);
    boundaryFill4(499,500,0,15);


    //Hands
    int hand1[]={375,350,375,485,315,525,300,515,375,350
    };
    drawpoly(5,hand1);
    boundaryFill4(374,400,10,15);
    int hand2[]={625,350,625,485,685,525,700,515,625,350
    };
    drawpoly(5,hand2);
   boundaryFill4(626,400,10,15);


    //Pants
    int pants[]={375,550,375,720,425,720,500,600,575,720,625,720,625,550,375,550
    };
    drawpoly(8,pants);
    boundaryFill4(376,551,14,15);


    //Legs
    int leg1[]={387,720,387,760,413,760,413,720,387,720
    };
    drawpoly(5,leg1);
   boundaryFill4(410,740,10,15);
   int leg2[]={613,720,613,760,587,760,587,720,613,720
    };
    drawpoly(5,leg2);
   boundaryFill4(600,740,10,15);


    //Foot
    ellipse(400,775,0,360,30,15);
    boundaryFill4(400,775,2,15);
    ellipse(600,775,0,360,30,15);
    boundaryFill4(600,775,2,15);


    while (!kbhit( ))
    {
        delay(20);
    }
}
