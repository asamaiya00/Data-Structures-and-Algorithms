class Solution {
	public:
    int getMinVaccine(Node *root, int &vaccineCount) {
        if (root == NULL)
            return 0;
        int left = getMinVaccine(root->left, vaccineCount);
        int right = getMinVaccine(root->right, vaccineCount);
        if (left == -1 or right == -1) {
            vaccineCount++;
            return 1;
        }
        if (left == 1 or right == 1)
            return 0;
        return -1;
    }
	int supplyVaccine(Node *root) {
		int vaccineCount = 0;
		if (getMinVaccine(root, vaccineCount) == -1) {
			vaccineCount++;
		}
		return vaccineCount;
	}
};