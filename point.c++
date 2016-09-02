#include<iostream.h>
using namespace std;
struct point
{
int x,y;
};
int distSq(int p,int q)
{
return(p,x-q,x)*(p,x-q,x)+(p,y-q,y)*(p,y-q,y);
bool isSquare(point p1,point p2,point p3,point p4)
{
int d2=distSq(p1,p2);
int d3=distSq(p1,p3);
int d4=distSq(p1,p4);
if(d2==d3&& 2*d2==d4)
{
int d=distSq(p2,p4);
return(d==distSq(p2,p4) && d==d3);
}
if(d3==d4 && 2*d2==d3)
