// CSc 220 Homework 2
// Chris Panican

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int *grid, *grid1;

int left( int i);
int right( int i);
int up( int i);
int down( int i);
void visit( int i);
int DFS(int start);
void visited(int i);

class Grid {
private:
    int top;
    int capacity;
    int *storage;
public:
    Grid(int capacity) {
        storage = new int[capacity];
        this->capacity = capacity;
        top = -1;
    }
    void push(int value) {
        top++;
        storage[top] = value;
    }
    int peek() {
        return storage[top];
    }
    void pop() {
        top--;
    }
    bool isEmpty() {
        return (top == -1);
    }
    ~Grid() {
        delete[] storage;
    }
};

int DFS(int start) {
    Grid path(999999);
    path.push(start);
    visited(start);
    int i = start;
    int count = 0;
    while (!path.isEmpty()) {
        if (up(i) != -1 && *(grid1 + up(i)) == 0) {
            i = up(i);
            path.push(i);
            visited(i);
            count++;
        } else if (left(i) != -1 && *(grid1 + left(i)) == 0) {
            i = left(i);
            path.push(i);
            visited(i);
            count++;
        } else if (right(i) != -1 && *(grid1 + right(i)) == 0) {
            i = right(i);
            path.push(i);
            visited(i);
            count++;
        } else if (down(i) != -1 && *(grid1 + down(i)) == 0) {
            i = down(i);
            path.push(i);
            visited(i);
            count++;
        } else {
            path.pop();
            if (!path.isEmpty()) {
                i = path.peek();
            }
        }
    }
    return count;
}


// From Test File

int main(void)
{
    int *grid2, *tmp;
    int i,j1,j2,k1,k2; int count1, count2;
    grid =  (int *) malloc( 1000000*sizeof(int));
    grid1=  (int *) malloc( 1000000*sizeof(int));
    grid2=  (int *) malloc( 1000000*sizeof(int));
    /* initially: all accessible */
    for( i=0; i< 1000000; i++ )
    {  *(grid + i) = 1;
        *(grid1+ i) = 0;
        *(grid2+ i) = 0;
    }
    /* then block some vertices 10% probability blocked */
    for( i=0; i< 1000000; i++ )
    {  if( (rand()%10) < 1)
            *(grid + i) = 0;
    }
    /* then put in 100 square obstacles 10 by 10 */
    for( i=0; i< 100; i++)
    {  j1= rand()%990;
        j2= rand()%990;
        for( k1=j1; k1< j1+10; k1++)
        {  for( k2=j2; k2< j2+10; k2++)
                *(grid + 1000*k1 + k2) = 0;
        }
    }
    /* then put in 50 line obstacles 100 by 1 */
    for( i=0; i< 50; i++)
    {  j1= rand()%900;
        j2= rand()%1000;
        for( k1=j1; k1< j1+100; k1++)
            *(grid + 1000*k1 + j2) = 0;
    }
    /* then put in 50 line obstacles 1 by 100 */
    for( i=0; i< 50; i++)
    {  j1= rand()%900;
        j2= rand()%1000;
        for( k1=j1; k1< j1+100; k1++)
            *(grid + 1000*j2 + k1) = 0;
    }
    /* then put in 10 line connections 200 by 1 */
    for( i=0; i< 10; i++)
    {  j1= rand()%800;
        j2= rand()%1000;
        for( k1=j1; k1< j1+200; k1++)
            *(grid + 1000*k1 + j2) = 1;
    }
    /* then put in 10 line connections 1 by 200 */
    for( i=0; i< 10; i++)
    {  j1= rand()%800;
        j2= rand()%1000;
        for( k1=j1; k1< j1+200; k1++)
            *(grid + 1000*j2 + k1) = 1;
    }
    /* connect the diagonal */
    for( i=0; i< 1000; i++)
        *(grid + 1000*i + i) = 1;
    for( i=0; i< 999; i++)
        *(grid + 1000*(i+1) + i) = 1;
    /* now test */
    count1 = DFS(0);
    tmp = grid1; grid1 = grid2; grid2=tmp;
    count2 = DFS(999999);
    if( count1 != count2 )
    {  printf("counts inconsistent; failed test. count 1 %d, count2 %d\n",
              count1, count2); fflush(stdout); exit(-1);
    }
    else
        printf("visited %d vertices\n", count1);
    for(i= 0; i< 1000000; i++ )
    {  if( *(grid1 + i ) != *(grid2 + i) )
        {  printf("visited matrix inconsistent; failed test.\n");
            fflush(stdout); exit(-1);
        }
    }
    printf("passed test\n");
}

int left(int i)
{  int x,y, j;
    x= i/1000; y= i%1000;
    if( x==0 )
        return(-1);
    else
    {  j= 1000*(x-1) + y ;
        if( *(grid +j) == 1 )
            return(j);
        else
            return(-1);
    }
}
int right(int i)
{  int x,y, j;
    x= i/1000; y= i%1000;
    if( x==999 )
        return(-1);
    else
    {  j= 1000*(x+1) + y ;
        if( *(grid +j) == 1 )
            return(j);
        else
            return(-1);
    }
}
int up(int i)
{  int x,y, j;
    x= i/1000; y= i%1000;
    if( y==999 )
        return(-1);
    else
    {  j= 1000*x + (y+1) ;
        if( *(grid +j) == 1 )
            return(j);
        else
            return(-1);
    }
}
int down(int i)
{  int x,y, j;
    x= i/1000; y= i%1000;
    if( y==0 )
        return(-1);
    else
    {  j= 1000*x + (y-1) ;
        if( *(grid +j) == 1 )
            return(j);
        else
            return(-1);
    }
}
void visited(int i)
{  if ( *(grid+i) != 1 )
    {  printf("visited inaccessible vertex. failed test.\n");
        fflush(stdout); exit(-1);
    }
    else if ( *(grid1+i) != 0 )
    {  printf("revisited vertex. failed test.\n");
        fflush(stdout); exit(-1);
    }
    *(grid1+i) = 1; /* mark vertex visited */
}