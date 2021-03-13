#ifndef NODE_H_
#define NODE_H_

template <typename ntype>
    struct Node {
            // Data Fields
            /** The data */
            ntype data;
            /** The pointer to the next node. */
            Node* next;

            // Constructor
            /** Creates a new Node that points to another Node.
              @param data_item The data stored
              @param next_ptr Pointer to the Node that is
                              pointed to by the new Node
            */
            
            
            Node(const ntype& data_item, Node* next_ptr = nullptr) :
            data(data_item), next(next_ptr) {}
        };


#endif
