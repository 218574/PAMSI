#ifndef IGRAF_HH
#define IGRAF_HH

class IGraf
{
	virtual void add_vertex(int v);
	virtual void add_edge(int x, int y);
	virtual void get_neighbours(int x);
	virtual void is_connected(int x, int y);
};
#endif