#include <string>
#include "treeNode.h"
using namespace std;


class BpTree{

public:


	BpTree(int n);
	bool insert(int n, string s);
	bool remove(int n);
	bool find(int n);
	void printKeys();
	void printValues();

private:
	
	treeNode* root;
	int keys_per_node;


	//TODO: put recursive helper functions
};