#pragma once

#ifndef GRAPH_DISAMB_H
#define GRAPH_DISAMB_H

#include <vector>

#include "Eigen/Core"

class Graph_disamb {
public:
	Graph_disamb(const int node_num_);

	~Graph_disamb() {};

	// Return the layout
	Eigen::MatrixXi getLayout();

	// Add an edge between two nodes
	void addEdge(
		int source_index_,
		int desti_index_
	);

	// Return the status for a node
	int get_node_status(int index_);

	// Return the number of nodes in the graph
	int number_nodes_inGraph();

private:
	const int node_num;

	// The status of each node
	std::vector<int> node_status;
		
	// Layout of the graph, only upper triangle is used !
	Eigen::MatrixXi layOut;
};


#endif // !GRAPH_DISAMB_H
