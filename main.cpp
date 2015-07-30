#include "treeNode.h"
#include <iostream>
using namespace std;

int main(){

	treeNode* tree = new treeNode(3, NULL, true);

	cout<< tree->isLeaf;


	return 0;
}