#ifndef GRAPH_HH
#define GRAPH_HH

#define FIND
#define VISIT // Odwiedzone miejsce 
#define BEST // Najlepsza droga

#include "IGraph.hh"

struct Node
{
    int level;
    int profit;
    int weight;
    int bound;
};

class Graph: public IGraph
{
private:
  List<int> Verticies;
  int MatrixSize = 10;
  int** Matrix;
public:
  Graph();
  virtual ~Graph()
  {
  	for (int i =0; i<MatrixSize; ++i) delete [] Matrix[i];
  	delete [] Matrix;
}
  virtual void addVertex(int x);
  virtual void addEdge(int x, int y);
  virtual int removeVertex(int x);
  virtual int removeEdge(int x, int y);
  virtual List getNeighbours(int x);
  int bound
};

#endif