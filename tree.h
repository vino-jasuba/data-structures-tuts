#ifndef TREE_H
#define TREE_H

#include "tree_node.h"
#include <iostream>

template <typename T>
class Tree {

    public:
        Tree() :rootNode(nullptr) {}

        void insertNode(const T& value)
        {
            insert_node(&rootNode, value);
        }

        void removeNode(const T& value)
        {
        
        }


        void inOrderTraverse() const 
        {
            in_order_helper(rootNode);
        }

        void preOrderTraverse() const
        {
            pre_order_helper(rootNode);
        }

        void postOrderTraverse() const 
        {
            post_order_helper(rootNode);
        }

        bool isEmpty()
        {
            return empty();
        }

    private:
        TreeNode<T> *rootNode;

        bool empty() const { return rootNode == nullptr; }

        TreeNode<T> *createNodeFromData(const T& value)
        {
            return new TreeNode<T>(value);
        }

        void insert_node(TreeNode<T> **nodePtr, const T& value)
        {
            //check if subtree is empty
            if(*nodePtr == nullptr)
            {
                *nodePtr = createNodeFromData(value);
                return;
            }
            
            if(value < (*nodePtr)->getData())
            {
                insert_node( &((*nodePtr)->leftNode), value );
                return;
            }

            if(value > (*nodePtr)->getData())
            {
                insert_node( &((*nodePtr)->rightNode), value );
                return;
            }

            std::cout << "(dup) " << value << std::endl;
    
        }

        void in_order_helper(const TreeNode<T> *nodePtr) const
        {
           if(nodePtr != nullptr)
           {
                in_order_helper(nodePtr->leftNode);
                std::cout << nodePtr->getData() << " ";
                in_order_helper(nodePtr->rightNode);
           }
        }

        void pre_order_helper(const TreeNode<T> *nodePtr) const 
        {
            if(nodePtr != nullptr)
            {
                std::cout << nodePtr->getData() << " ";
                pre_order_helper(nodePtr->leftNode);
                pre_order_helper(nodePtr->rightNode);
            }

        }

        void post_order_helper(const TreeNode<T> *nodePtr) const 
        {
            if(nodePtr != nullptr)
            {
                post_order_helper(nodePtr->leftNode);
                post_order_helper(nodePtr->rightNode);
                std::cout << nodePtr->getData() << " ";
            }
        }

};

#endif //TREE_H
