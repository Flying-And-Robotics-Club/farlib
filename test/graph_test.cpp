#include <farlib/data/graph.hpp>

int main(int argc, char **argv)
{
    far::Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);
    g.addEdge(0, 2);
    g.printGraph();
    g.printEdgeList();
    std::cout << "Number of vertices: " << g.getNumVertices() << std::endl;
    std::cout << "Number of edges: " << g.getNumEdges() << std::endl;
    return 0;
}