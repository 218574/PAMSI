#include "../inc/graf.hh"

using namespace std;



Graf::Graf()
{
}
void Graf::DFS(int v)
{
  slistEl *S,*p,*r;

  p = new slistEl;          
  p->v = v;
  p->next = NULL;
  S = p;

  visited[v] = true;    
  while(S)
  {
    v = S->v;               
    S = S->next;    



    for(p = A[v]; p; p = p->next)
    {
      if(!visited[p->v])
      {
        r = new slistEl;  
        r->v = p->v;     
        r->next = S;
        S = r;
        visited[p->v] = true; 
      }
    }
  

  }
}

void Graf::BFS( int v)
{
  slistEl *p,*q,*head,*tail; 

  q = new slistEl;        
  q->next = NULL;
  q->v = v;
  head = tail = q;

  visited[v] = true;      

  while(head)
  {
    v = head->v;          

    q = head;           
    head = head->next;
    if(!head) tail = NULL;
    delete q;
 
    for(p = A[v]; p; p = p->next)
    if(!visited[p->v])
    {
      q = new slistEl; 
      q->next = NULL;
      q->v = p->v;
      if(!tail) head = q;
      else      tail->next = q;
      tail = q;
      visited[p->v] = true; 
    }
  }
}

void Graf::prepare(int n)
{

  A = new slistEl * [n];       
  visited = new bool[n];       

  for(i = 0; i < n; i++)
  {
    A[i] = NULL;
    visited[i] = false;
  }

  for(i = 0; i < m; i++)
  {
    v1=rand()%n;
    v2=rand()%n;  
    p = new slistEl;
    p->v = v2;          
    p->next = A[v1];    
    A[v1] = p;
  }
}


Graf::~Graf()
{
  for(i = 0; i < n; i++)
  {
    p = A[i];
    while(p)
    {
      r = p;
      p = p->next;
      delete r;
    }
  }
  delete [] A;
  delete [] visited;
}