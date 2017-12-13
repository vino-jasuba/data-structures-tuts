#ifndef TREE_NODE_H
#define TREE_NODE_H

template <typename T> class Tree;

template <typename T>
class TreeNode{

    friend class Tree<T>;

    public:
        TreeNode(const T& value) 
            : data(value), leftNode(nullptr), rightNode(nullptr)
        {
            
        }

        void setData(const T& value)
        {
            data = value;
        }

        T getData() const 
        {
            return data;
        }

    private:
        T data;
        TreeNode<T> *leftNode;
        TreeNode<T> *rightNode;
};



#endif //TREE_NODE_H
