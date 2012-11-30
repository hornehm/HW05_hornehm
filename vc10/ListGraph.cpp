#include "ListGraph.h"

//Constructor from CSE 274
ListGraph::ListGraph(int numNodes){
	edgeList.resize(numNodes);
	//numNodes= 0;
}

void ListGraph::addEdge(NodeID u, NodeID v, EdgeWeight weight){
}

//Code from CSE 274
EdgeWeight ListGraph::weight(NodeID u, NodeID v) const{
	edgeList[u];
	EList::const_iterator it;
	for(it = edgeList[u].begin(); it!=edgeList[u].end(); it++){
		NWPair theEdge = *it;
		if(theEdge.first == v){
			return theEdge.second;
		}
	}
}

//Code from CSE 274
std::list<NWPair> ListGraph::getAdj(NodeID u) const{
	return edgeList[u];
}

unsigned ListGraph::degree(NodeID u) const{
}

unsigned ListGraph::size() const{
}

unsigned ListGraph::numEdges() const{
}


