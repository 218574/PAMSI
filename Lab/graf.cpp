#include "graf.hh"

void Graf::Graf()
{
	Lists = new node[V];
	for(int i=0; i<V;i++)
		Lists[i]=NULL;
}

bool Graf::search(int x, int y)		//wykorzystuje listy
{
	 node* support;
          
     support=Lists[x] ;   //szuka wśród sąsiadów x  
     while(support!=NULL)  //dopóki nie sprawdzi wszystkich
     {           
         if((*support).Index()==u)
         {    
            uPrev=(*support).GetPrev();
            uNext=(*support).GetNext();
            return true;
         }
         support=(*support).GetNext();
     }
     
     if(DiGraph) return false;
          
     hand=Lists[y] ;   //szuka wśród sąsiadów y  
     while(hand!=NULL)  //dopóki nie sprawdzi wszystkich
     {           
         if((*hand).Index()==v)
         {    
            vPrev=(*hand).GetPrev();
            vNext=(*hand).GetNext();
            return true;
         }
         hand=(*hand).GetNext();
     }          
     return false; 
}