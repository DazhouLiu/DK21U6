
#ifndef QUEUE_H_
#define QUEUE_H_

#include <string>

namespace ubcse{

    #include "node.h"


    template <typename T>
    class queue {
    
    private:
        Node<T>* head;
        Node<T>* tail;
        size_t num_items;

    public:

    /** 
     *  Default constructor.
     *  this constructor initializes the following:
     *         head to nullptr, 
     *         tail to nullptr,
     *         num_items to zero. 
     */
    queue<T>(){
        head = nullptr;
        tail = nullptr;
        num_items = 0;
    }

    

    /** 
     *  TO DO: Step9.1 
     *  Implement copy constructor.
     * 
     *  This constructor performs deep copy of the queue. 
     *  Input argument for this constructor is a constant 
     *      reference of another queue. 
     *  The input Queue is not allowed to change. 
     *  
     *  Copy all the data members from the given queue to 
     *      this queue. That means you have to copy the whole queue,
     *      update the head and tail pointer, and the num_items.
     *  
     *  Also consider any edge/boundary cases that can arise. 
     *
     */
    queue<T>(queue<T>& other){
        // put your code here
        Node<T>* ptr = other.head;
        num_items = other.num_items;
        // Empty case
        if (ptr == nullptr) {
            head = nullptr;
            tail = nullptr;
        }
        else {
            Node<T>* deepcopy = new Node<T>(ptr->data);
            head = deepcopy;
            ptr = ptr->next;
            while (ptr != nullptr) {
                Node<T>* copies = new Node<T>(ptr->data);
                deepcopy->next = copies;
                deepcopy = copies;
                ptr = ptr->next;
            }
            tail = deepcopy;
            
        }
    }



    /*
     *  TO DO: 10.1 
     *  Implement destructor. 
     *  Write a destructor to release all heap memory without any memory leak.
     */

     // Write the destructor here.
        ~queue() {
            delete head;
            delete tail;
        }



     /******* getter function declarations  *******************/

    /* returns the head pointer   */
    Node<T>* get_head() const;

    /* returns the tail pointer.  */
    Node<T>* get_tail() const;

    /* returns the size of the queue.   */
    int size() const;

    /* checks whether queue is empty or not.   */
    bool is_empty() const;




    /******** setter/ modifier function declarations  *************/

    /*  assign the given pointer val to head pointer   */
    void set_head(Node<T>* ptr);

    /*  assign the given pointer val to tail pointer   */
    void set_tail(Node<T>* ptr);

    /* update the current number of items in the queue   */
    void set_size(int n_items);



    /********************* Core queue operations  **********/
    
    /* pushes an item onto the tail.   */
    void push(const T& val);

    /* removes the front item from the queue   */
    void pop();

    /*   return the front element, however, it is not going
     to delete the front element.       */
    T& front();
    //const dtype& front() const;




    /******** For portability **********************/

    /* performs swap between two queues  */
    void swap(queue<T>& other);



    /********* operations for unfair queue **************/


    /* deletes the whole queue without memory leak  */
    void delete_all();

    /* delete data from any position   */
    void delete_from_anywhere(int position);

    /* insert data in the any position   */
    void insert_anywhere(const T& val, const int position);


    /******* printing *******************************/


    /*  prints the whole queue   */
    void print();

    }; // end of Stack class



    /* **************  Accessor FUNCTIONS *************************/

    /**
     *  TO DO: Step1.1 
     *
     *  Implement get_head function.
     *  This function returns the head pointer. 
     */
    template <typename T>
    Node<T>* queue<T>::get_head() const{
        // put your code here
	return head;
    } // End of get_head function.


    /**
     *  TO DO: Step1.2 
     *
     *  Implement get_tail function.
     *  This function returns the tail pointer. 
     */
    template <typename T>
    Node<T>* queue<T>::get_tail() const{
        // put your code here
        return tail;
    } // End of get_tail function.



    /**
     *  TO DO: Step1.3 
     *
     *  Implement  size function.
     *  This function returns the size of the queue.
     *  return type is 'int'.
     */
    template <typename T>
    int queue<T>::size() const{
        // put your code here
     	return num_items;   
    } // End of size method



    /**
     *  TO DO : Step1.4
     *
     *  Implement is_empty function.
     *  This function returns whether the queue is empty
     *      or not. 
     *  If empty it returns true, otherwise returns
     *      false.
     */
    template <typename T>
    bool queue<T>::is_empty() const {
        // put your code here
        return num_items == 0;
    } // End of is_empty function.



    /************   Modifier FUNCTIONS ***********************/


    /**
     *  TO DO : Step1.5 
     *
     *  Implement set_head function.
     *  This function updates the head pointer 
     *      using input pointer.
     */
    template <typename T>
    void queue<T>::set_head(Node<T>* ptr){
        // put your code here
        head = ptr;
    } // End of set_head function.

    /**
     *  TO DO : Step1.6
     *
     *  Implement set_tail function.
     *  This function updates the tail pointer 
     *      using input pointer.
     */
    template <typename T>
    void queue<T>::set_tail(Node<T>* ptr){
        // put your code here
        tail = ptr;
    } // End of set_tail function.


    /** 
     *  TO DO: Step1.7
     * 
     *  implement set_size function.
     *  This function update the num_items using the input 
     *      size. 
     */
    template <typename T>
    void queue<T>::set_size(int n_items){
        // put your code here
        num_items = n_items;
    } // End of set_size function.




    /************   CORE QUEUE OPERATIONS   **********************/



    /**
     *  TO DO: Step2.1
     *  
     *  Implement the push function. 
     *  This function adds item at the back 
     *      of the queue. 
     *  It also updates the tail pointer accordingly.
     *  and also increase 'num_items' by 1. 
     *  
     *  Push function should work for both empty and nonempty queue.
     *
     */
    template <typename T>
    void queue<T>::push(const T& val){
        // put your code here
        Node<T>* val_node = new Node<T>(val);  
        if (num_items == 0) {
		head = val_node;
		tail = val_node;			
					
	}
	else {
		tail->next = val_node;
		tail = val_node;
	
	}
	
	num_items++;
	
    } // end of push function




    /**
     *  TO DO: Step3.1
     *
     *  Implement pop function.
     *  This function removes an item from the front of the queue. 
     *  It returns nothing. 
     *  
     *  If queue is empty it will print a message "Queue is empty" 
     *  and DO NOT exit the program. You can return.
     *  
     *  Don't forget to reduce the 'num_items' by 1.
     *  
     *  After performing pop, if the queue becomes empty, 
     *      set the head and tail pointer to nullptr.
     *
     */
    template <typename T>
    void queue<T>::pop(){
        // put your code here
	if (is_empty()) {
		std::cout << "Queue is empty" << std::endl;
		return;	
	}
	//Queue is not empty.
	else {
		Node <T>* temp = head;
		if (head != tail) {
			head = head->next;
		}
		else {
			head = nullptr;
			tail = nullptr;		
		}
		delete temp;
		num_items--;
	}
		
    } // end of pop function 




    /**
     *  TO DO: Step 4.1 
     *
     *  Implement front function.
     *
     *  This function returns the front data of the queue. 
     *  if the queue is empty is prints a message 
     *      "Queue is empty" and exit the program. 
     *    
     */
    template <typename T>
    T& queue<T>::front(){
        if (is_empty())    {
            std::cout << "Queue is empty" << std::endl;
            exit(1);
        }
            return head->data;
        // put your code here
    } // End of front function.




    /************ FOR PORTABILITY **********************************/

    /**
     * TO DO : Step5.1 
     *
     *  Implement swap method.
     *  Input argument:
     *  @param other - reference to a queue. 
     *  This function swaps contents between current queue 
     *      and in input queue, other .
     *  It also swaps the 'num_items' values.
     *
     */
    template <typename T>
    void queue<T>::swap(queue<T>& other){
        // put your code here
        Node<T>* temp = other.head;
        Node<T>* temp_tail = other.tail;
        other.head = head;
        other.tail = tail;
        head = temp;
        tail = temp_tail;
        size_t temp_size = other.size();
        other.num_items = num_items;
        num_items = temp_size;
        
    } // End of swap function.



    /******* UNFAIR QUEUE OPERATIONS **********************************/



    /**
     * TO DO: Step6.1
     *
     *  Implement inset_anywhere function.
     *  This method enables the queue to become unfair. Using this function
     *      you can push an item anywhere in the queue. 
     *
     *  This function takes two arguments - 
     *      (1) the value that you want to push, and  
     *      (2) the position where user wants to push. 
     *  The position argument is similar to index, 
     *      it starts from 0. That means, the front of 
     *      the queue has position 0.
     *  For example, a single linked list - [z]->[k]->[c]->[g], 
     *      you can think, z is in position 0, k is in position 1,
     *      c is in position 2, and g is in position 3.
     *  When user performs an insert_anywhere(e,2) the new list should look like - 
     *      [z]->[k]->[e]->[c]->[g]. 
     *  Now, 'z' is in position 0, 'k' is in position 1, 'e' is in position 2, 
     *      'c' is in position 3, and 'g' is in position 4.
     *  If you perform another insert_anywhere(d,1) the new list should look like - 
     *      [z]->[d]->[k]->[e]->[c]->[g]. 
     *  Now, 'z' is in position 0, 'd' is in position 1, 'k' is in position 2, 
     *      and 'e' is in position 3, 'c' is in position 4, and 'g' is in position 5.
     *  
     *  You can use a for loop and next pointer to reach appropriate position. 
     *
     *  Don't forget to update num_items. 
     *  Also keep in mind your function should work even when queue is empty. 
     *  
     *  Also take care of invalid positions. (position < 0 or position > list size)
     *  In such case, print "Position is not valid" and DO NOT exit the program. 
     *      You can return.
     * 
     */

    template <typename T>
    void queue<T>::insert_anywhere(const T& val, const int position){
        // put your code here
        // validate index
        if (position < 0 || position > size()) {
            std::cout << "Position is not valid" << std::endl;
            return;
        }
        // create new node
        Node<T>* node_val = new Node <T> (val);
        // empty
        if (is_empty()) {
            head = node_val;
            tail = node_val;
        }
        // normal case
        else {
            Node<T>* ptr = head;
            int pos = 0;
            // insert head
            if (position == 0) {
                node_val->next = ptr;
                head = node_val;
            }
            // insert after tail
            else if (position == size()) {
                tail->next = node_val;
                tail = node_val;
            }
            //elsewhere
            else {
                for (; pos < position - 1; pos++) {
                    ptr = ptr->next;
                    }
                node_val->next = ptr->next;
                ptr->next = node_val;
                }
        }
        num_items++;
    } // End of insert_anywhere function.



    /** 
     *  TO DO: Step7.1 
     *
     *  Implement delete_from_anywhere
     *
     *  This method also enables the queue to become unfair. 
     *  User can remove something from the middle of the queue. 
     *  The input argument -
     *      the position that you want to delete. 
     *  The position argument is similar to index, it starts from 0. 
     *  That means, the front of the queue has position 0. 
     * 
     *  For example, a single linked list - [z]->[k]->[c]->[g], 
     *      you can think, z is in position 0, k is in position 1, 
     *      c is in position 2, and g is in position 3.
     *  If you perform deleter_from_anywhere(2) the new list should look like - 
     *      [z]->[k]->[g]. 
     *  Now, 'z' is in position 0, 'k' is in position 1,  
     *      and 'g' is in position 2.
     *  If you perform another deleter_from_anywhere(2) the new list should look like - 
     *      [z]->[k]. 
     *  Now, 'z' is in position 0 'k' is in position 2, 
     *  You can use a for loop and next pointer to reach appropriate position. 
     * 
     *  Don't forget to update num_items. 
     *  Also take cake of the edge cases - empty queue.  
     *  IF your queue becomes empty after deletion, update head and tail pointers.
     *  
     *  Also take care of invalid positions. (position < 0 or position > list size)
     *  In such case, print "Position is not valid" and DO NOT exit the program.
     *  
     */
    template <typename T>
    void queue<T>::delete_from_anywhere(int position){ 
        // put your code here
        if (position < 0 || position > size()) {
            std::cout << "Position is not valid" << std::endl;
            return;
        }
        if (size() == 0) {
            std::cout << "Queue is alreday empty" << std::endl;
            return;
        }
        
        Node<T>* del_node = head;
        int pos = 0;
        // remove head
        if (pos == position) {
            head = del_node->next;
            delete del_node;
        }
        else {
            for (; pos < position - 1; pos++) {
                del_node = del_node->next;
            }
            Node<T>* temp = del_node->next;
            del_node->next = del_node->next->next;
            if (position == (size() - 1)) {
                tail = del_node;
            }
            delete temp;
        }
        num_items--;
        if (num_items == 0) {
            head = nullptr;
            tail = nullptr;
        }
    } // End of delete_from_anywhere function.


    /**
     *  TO DO: Step8.1
     *
     *  Implement delete_all function.
     *
     *  This function deletes all the elements in the queue 
     *      without any memory leak.
     *  If the queue is empty, print "Nothing to delete!" and DO NOT exit 
     *      the program. You can return.  
     *  
     */
    template <typename T>
    void queue<T>::delete_all(){
        // put your code here
        if (is_empty()) {
            std::cout << "Nothing to delete!" <<std::endl;
            return;
        }
        Node<T>* del = head;
        while (!is_empty()) {
            head = del->next;
            delete del;
            del = head; 
            num_items--;
        }
        head = nullptr;
        tail = nullptr;
        
    } // End of delete_all function







    /******************** PRINT *************************************/

    /**
     * This method prints the queue.
     */
    template <typename T>
    void queue<T>::print(){
        if (num_items == 0 ){
            std::cout << "Queue is empty"<< std::endl;
        }
        else{
            Node<T>* iter = head;
            while( iter != nullptr ){
                std::cout << iter->data << " ";
                iter = iter->next;
            }
            std::cout << std::endl;
        }
        if (head == nullptr)
            std::cout << "Head Points to: Null " << std::endl;
        else
            std::cout << "Head Points to: "<< head->data << std::endl;
        if (tail == nullptr)
            std::cout << "Tail Points to: Null " << std::endl;
        else
            std::cout << "Tail Points to: "<< tail->data << std::endl;
        std::cout << "Number of items in the queue: "<< num_items << std::endl;
    
    } /*  end of print method    */       

} // end of namespace ubcse


#endif 
