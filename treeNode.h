

class treeNode {

public:
	
	treeNode(int numKeys_, treeNode* parent_, bool isLeaf_);
	
	~treeNode(); 		// Default destructor

	void makeLeaf(treeNode* node_);
//======================================================================================================================================	
	
	
	int numKeys;		// Size of the node i.e number of possible keys
	treeNode** pointers;	// Poniter to the array of pointer
	int* keys;			// Points to the array of keys
	treeNode* parent;		// Pointer to the parent node (null if root)
	bool isLeaf;		// Checks if the current node is a leaf

};