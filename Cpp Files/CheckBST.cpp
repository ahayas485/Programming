bool isBSTCheck(Node* root, int min, int max){
    if(root==NULL){
        return 1;
    }else if(root->data<min || root->data>max){
        return 0;
    }else{
        isBSTCheck(root->left,min,root->data-1)  && 
        isBSTCheck(root->right,root->data+1,max);
    }
}

bool isBST(Node* root) {
    // Your code here
    return isBSTCheck(root,INT_MIN,INT_MAX);
}