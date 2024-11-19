/*2. Define a structure to represent a point in 2D space with x and y coordinates. Implement
functions to calculate the distance between two points and to check if a point lies within
a specific rectangular boundary.*/
#include <stdio.h>
#include <math.h>

typedef struct point
{
    int x;
    int y;
} point;

void calc_distance(point P1, point P2);
void inside_rect(point P1, point P2, point P3);

int main()
{
    point P1, P2, P3;
    printf("Enter coordinates of the two points of diagnol:\n");
    printf("enter x coordinate for point1: ");
    scanf("%d", &P1.x);
    printf("enter y coordinate for point1: ");
    scanf("%d", &P1.y);
    printf("enter x coordinate for point2: ");
    scanf("%d", &P2.x);
    printf("enter y coordinate for point2: ");
    scanf("%d", &P2.y);

    calc_distance(P1, P2);
    
    printf("Enter a point to check within the rectangle:\n");
    printf("x coordinate: ");
    scanf("%d", &P3.x);
    printf("y coordinate: ");
    scanf("%d", &P3.y);
    
    inside_rect(P1,P2,P3);
}


void calc_distance(point P1, point P2)
{
    int brac1, brac2;

    float ans;
    brac1 = pow((P2.x-P1.x),2);
    brac2 = pow((P2.y-P1.y),2);
    ans = pow((brac1+brac2), 0.5);
    printf("Length of diagonal: %f\n", ans);
}


void inside_rect(point P1, point P2, point P3)
{
    int xsmall, xlarge, ysmall, ylarge;

    if (P1.x < P2.x)
    {
        xsmall = P1.x;
        xlarge = P2.x;
    }
    else if (P2.x < P1.x)
    {
        xsmall = P2.x;
        xlarge = P1.x;
    }
    if (P1.y < P2.y)
    {
        ysmall = P1.y;
        ylarge = P2.x;
    }
    else if (P2.y < P1.y)
    {
        ysmall = P2.y;
        ylarge = P2.x;
    }
    int flag=0;
    if (P3.x >= xsmall && P3.x <= xlarge)
    {
        if (P3.y >= ysmall && P3.y <= ylarge)
            {flag=1;}
    }
    if (flag == 1)
        {printf("Point is inside the rectangle");}
    else
        {printf("Point is not inside the rectangle");}
}