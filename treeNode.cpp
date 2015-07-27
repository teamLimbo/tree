#include "treeNode.h"
#include <iostream>
using namespace std;


treeNode::treeNode(int numKeys_, treeNode* parent_, bool isLeaf_)	
{
	numKeys = numKeys_;
	parent = parent_;
	isLeaf = isLeaf_;
	keys[numKeys_];
	pointers[numKeys_ + 1];
	
}

void treeNode::makeLeaf(treeNode* treeNode_){

	if (treeNode_->isLeaf == false){
		treeNode_->isLeaf = true;
	}

}

treeNode::~treeNode() //default constructor
{
	//Destructs itself
}