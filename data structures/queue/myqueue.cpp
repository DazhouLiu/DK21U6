#include <iostream>
#include "queue.h"

int main() {


    /* IMPLEMENTATION INSTRUCTIONS */
    /* If you compile the skeleton code it will not generate any error. */

    /*  The codes are organized in BLOCKs here in the main. 
     *  Each block is self sufficient and can be commented out if necessary.
     *  
     */

    ///*
    //BLOCK-0
    std::cout << "BLOCK-0: results - " << std::endl;
    ubcse::queue<int> q0;
    std::cout << "q0 is created using default constructor"<< std::endl;
    std::cout << "q0 content: " << std::endl ;
    q0.print();
    std::cout << "-----------------------------------------------" << std::endl;
    // BLOCK-0 ends
    //*/
    

    /* 
     *  Output of the BlOCK-0 is in Block-0.txt file
     */

    
    
    /*
     *  INSTRUCTIONS:  
     *  Comment out everything in BLOCK-0
     */



    /* 
     *  IMPLEMENTATION INSTRUCTIONS: 
     *  Implement the queue.h step by step, First Step - 1, 
     *      then Step - 2, and so on ...
     *  
     *  After implementing each step, uncomment the corresponding
     *      "Code Block" in this main function and test whether 
     *      your implementation is correct or not. 
     *  
     *  The expected output is provided in the .txt files (e.g. Block-0.txt, ...)
     *  
     *  When you are done, you can comment the block again 
     *      and proceed to next Step.
     *
     */



    /*  
     *  INSTRUCTIONS: 
     *  Step - 1:
     *  Implement the accessor functions and modifier functions
     *    in the queue.h 
     *  You can find the instructions to implement these functions with tags - 
     *          "TO DO: Step1.1"
     *          "TO DO: Step1.2" 
     *          "TO DO: Step1.3" 
     *          "TO DO: Step1.4" 
     *          "TO DO: Step1.5" 
     *          "TO DO: Step1.6" 
     *          "TO DO: Step1.7" 
     *      in the queue.h file.
     *
     *
     *  After implementing the above mentioned functions, 
     *      uncomment the following code block named - BLOCK-1. 
     *  
     *  This block is simply an example, however, your code
     *  will be tested using different cases(including edge examples).
     */



    /*
    //  BLOCK-1
    //  uncomment this block after implementing (To Do: Step1.1 - TO DO: Step1.7)
    std::cout << "BLOCK-1: results - " << std::endl;
    ubcse::queue<int> q1;
    std::cout << "An empty queue object is created as q1" << std::endl;
    std::cout << "Head of the queue, q1: " << q1.get_head() << std::endl;
    std::cout << "Tail of the queue, q1: " << q1.get_tail() << std::endl;
    std::cout << "Size of the queue, q1: " << q1.size() << std::endl;
    std::cout << "Queue, q1 is empty: " << (q1.is_empty() ? "True": "False") << std::endl;
    
    ubcse::Node<int>* node_s1_1 = new ubcse::Node<int>(1200);
    std::cout << "A Node pointer variable is created as node_s1_1, and initilized with :"<< 1200 << std::endl;
    q1.set_head(node_s1_1);
    std::cout << "Head of the queue contains: " << q1.get_head()->data << std::endl;
    q1.set_tail(node_s1_1);
    std::cout << "Tail of the queue contains: " << q1.get_tail()->data << std::endl;
    q1.set_size(14);
    std::cout << "Size of the queue: " << q1.size() << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    
    //End of BLOCK-1
    */



    /* 
     *  Output of the BlOCK-1 is in Block-1.txt file
     */


    /*
     *  INSTRUCTIONS:  
     *  Comment out everything in BLOCK-1
     */

    

    /*
     *  INSTRUCTIONS:  
     *  Step - 2:
     *  Implement the push function in queue.h 
     *  You can find the instructions to implement push functions 
     *      with tags - "TO DO: Step2.1" in the queue.h file.
     *  
     * 
     *  After implementing (To do : Step 2.1) uncomment the 
     *      following code block, BLOCK-2 
     *  Then check - whether your push function works or not. 
     *  
     *  This block is simply an example, however, your code
     *      will be tested using different cases(including edge examples).
     */


    /*
    //  BLOCK - 2 : 
    //  uncomment this block after implementing (To Do: Step2.1) 
    std::cout << "BLOCK-2: results - " << std::endl;
    ubcse::queue<int> q2;
    std::cout << "An empty queue object is created as q2" << std::endl;
    std::cout << "Push three values into queue, q2: 10, -200, 30"<< std::endl;
    q2.push(10);
    q2.push(-200);
    q2.push(30);
    std::cout << "q2 content: " << std::endl;
    q2.print();
    std::cout << "-----------------------------------------------" << std::endl;
    //  End of BLOCK-2
    */


    /* 
     *  Output of the BlOCK-2 is in Block-2.txt file
     */


    /*
     *  INSTRUCTIONS:  
     *  Comment out everything in BLOCK-2
     */



    /*
     *  INSTRUCTIONS:  
     *  Step - 3:
     *  Implement the pop function in queue.h 
     *  *  You can find the instructions to implement pop functions with tags - "TO DO: Step3.1" 
     *  in the queue.h file.
     *   
     *  After implementing (To do : Step 3.1) uncomment the following code block, BLOCK-3 
     *  Then check - whether your pop function works or not. 
     *  
     *  This block is simply an example, however, your code
     *      will be tested using different cases(including edge examples).
     */


    /*
    //  BLOCK - 3 : 
    //  uncomment this block after implementing (To Do: Step3.1) 
    std::cout << "BLOCK-3: results - " << std::endl;
    ubcse::queue<char> q3;
    std::cout << "An empty queue object is created as q3" << std::endl;
    std::cout << "Push three characters into the queue, q3: a, z, c"<< std::endl;
    q3.push('a');
    q3.push('z');
    q3.push('c');
    std::cout << "q3 content: " << std::endl;
    q3.print();
    std::cout << "-----------------------------------------------" << std::endl;

    std::cout << "Perform three pop operations-" << std::endl;
    for (int i = 1 ; i <= 3 ; i++){
        std::cout << "Pop operation - "<< i << std::endl;
        q3.pop();
        std::cout << "q3 content: " << std::endl;
        q3.print();
        std::cout << "-----------------------------------------------" << std::endl;
    }

    std::cout << "Perform another pop operation-" << std::endl;
    q3.pop();
    std::cout << "q3 content: " << std::endl;
    q3.print();
    std::cout << "-----------------------------------------------" << std::endl;
    
    std::cout << "Push 'k' in to the queue:"<< std::endl;   
    q3.push('k');
    std::cout << "q3 content: " << std::endl;
    q3.print();
    std::cout << "-----------------------------------------------" << std::endl;

    std::cout << "Pop an item from the queue:"<< std::endl;   
    q3.pop();
    std::cout << "q3 content: " << std::endl;
    q3.print();
    std::cout << "-----------------------------------------------" << std::endl;
    
    //  End of BLOCK-3
    */


    /* 
     *  Output of the BlOCK-3 is in Block-3.txt file
     */
  

    /*
     *  INSTRUCTIONS:  
     *  Comment out everything in BLOCK 3
     */




    /*
     *  INSTRUCTIONS:  
     *  Step - 4:
     *  Implement the "front" member function of the template class queue.
     *  You can find the instructions to implement front functions with tags - "TO DO: Step4.1" 
     *  in the queue.h file.
     *
     *  After implementing "TO DO: Step4.1",
     *  uncomment the following code block named BLOCK-4  to test your implementation.
     *  
     *  This block is simply an example, however, your code
     *      will be tested using different cases(including edge examples).
     *
     */



    /*
    //  BLOCK - 4 : 
    //  uncomment this block after implementing (To Do: Step4.1) 
    std::cout << "BLOCK-4: results - " << std::endl;
    ubcse::queue<float> q4;
    std::cout << "An empty queue object is created as q4"<< std::endl;
    std::cout << "Push three floats into queue, q4: 1000.1, 22.2, 333.3"<< std::endl;
    q4.push(1000.1);
    q4.push(22.2);
    q4.push(333.3);
    std::cout << "q4 content: " << std::endl;
    q4.print();
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "Front of the queue: "<< q4.front() << std::endl;
    std::cout << "Perform front operation again "<< std::endl;
    std::cout << "Front of the queue: "<< q4.front() << std::endl;

    std::cout << "Perform 3 pop operations on the queue"<< std::endl;
    for (int i = 0 ; i < 3; i++)
        q4.pop();
    std::cout << "Front of the queue: "<< q4.front() << std::endl;
    
    //  End of BLOCK-4
    */


    /* 
     *  Output of the BlOCK-4 is in Block-4.txt file
     */


    /*
     *  INSTRUCTIONS:  
     *  Comment out everything in BLOCK 4
     */


    /*
     *  INSTRUCTIONS:  
     *  Step - 5:
     *  Implement the "swap" member function of the template class queue.
     *  You can find the instructions to implement swap functions 
     *      with tags - "TO DO: Step5.1" in the queue.h file.
     *
     *  After implementing "TO DO: Step5.1",
     *      uncomment the following code block named BLOCK-5, 
     *      to test your implementation. 
     *  
     *  This block is simply an example, however, your code
     *      will be tested using different cases(including edge examples).
     */


    /*
    //  BLOCK - 5 : 
    //  uncomment this block after implementing (To Do: Step5.1) 
    std::cout << "BLOCK-5: results - " << std::endl;
    ubcse::queue<std::string> q5_1;
    std::cout << "An empty queue object is created as q5_1"<< std::endl;
    std::cout << "Push three strings in q5_1: good, morning, everyone" << std::endl;
    q5_1.push("good");
    q5_1.push("morning");
    q5_1.push("everyone");
    std::cout << "q5_1 content: " << std::endl;
    q5_1.print();
    std::cout << "-----------------------------------------------" << std::endl;
    
    ubcse::queue<std::string> q5_2;
    std::cout << "An empty queue object is created as q5_2"<< std::endl;
    std::cout << "Push four strings in q5_2: have, a, nice, day" << std::endl;
    q5_2.push("have");
    q5_2.push("a");
    q5_2.push("nice");
    q5_2.push("day");
    std::cout << "q5_2 content: " << std::endl;
    q5_2.print();
    std::cout << "-----------------------------------------------" << std::endl;
    
    q5_1.swap(q5_2);

    std::cout << "After swap operation ... " << std::endl;

    std::cout << "q5_1 content: " << std::endl;
    q5_1.print();
    std::cout << "-----------------------------------------------" << std::endl;

    std::cout << "q5_2 content: " << std::endl;
    q5_2.print();
    std::cout << "-----------------------------------------------" << std::endl;
    
    //  End of BLOCK-5
    */


    /* 
     *  Output of the BlOCK-5 is in Block-5.txt file
     */


    /*
     *  INSTRUCTIONS:  
     *  Comment out everything in BLOCK 5
     */


    /*
     *  INSTRUCTIONS:  
     *  Step - 6:
     *  Implement the "insert_anywhere" member function of the template class queue.
     *  You can find the instructions to implement "insert_anywhere" 
     *  functions with tags - "TO DO: Step6.1" in the queue.h file.
     *
     *  After implementing "TO DO: Step6.1",
     *      uncomment the following code block named BLOCK-6 to test your implementation. 
     *  
     *  This block is simply an example, however, your code
     *      will be tested using different cases(including edge examples).
     */


    /*
    //  BLOCK - 6 : 
    //  uncomment this block after implementing (To Do: Step6.1) 
    std::cout << "BLOCK-6: results - " << std::endl;
    ubcse::queue<char> q6;
    std::cout << "An empty queue object is created as q6"<< std::endl;
    std::cout << "Push four characters into the queue, q6: z, k, c, g" << std::endl;
    q6.insert_anywhere('z',0);
    q6.push('k');
    q6.push('c');
    q6.push('g');
    std::cout << "q6 content: " << std::endl;
    q6.print();
    std::cout << "-----------------------------------------------" << std::endl;

    std::cout << "Insert character 'e' into position 2 " << std::endl;
    q6.insert_anywhere('e',2);
    std::cout << "q6 content: " << std::endl;
    q6.print();
    std::cout << "-----------------------------------------------" << std::endl;

    std::cout << "Insert character 'd' into position 1 " << std::endl;
    q6.insert_anywhere('d',1);
    std::cout << "q6 content: " << std::endl;
    q6.print();
    std::cout << "-----------------------------------------------" << std::endl;

    std::cout << "Insert character 'h' into position 10 " << std::endl;
    q6.insert_anywhere('d',10);
    std::cout << "q6 content: " << std::endl;
    q6.print();
    std::cout << "-----------------------------------------------" << std::endl;

    // End of Block-6
    
    */


    /* 
     *  Output of the BlOCK-6 is in Block-6.txt file
     */



    /*
     *  INSTRUCTIONS:  
     *  Comment out everything in BLOCK 6
     */



    /*
     *  INSTRUCTIONS:  
     *  Step - 7:
     *  Implement the "delete_from_anywhere" member function of the template class queue.
     *  You can find the instructions to implement "delete_from_anywhere" 
     *      functions with tags - "TO DO: Step7.1" in the queue.h file.
     *
     *
     *  After implementing "TO DO: Step7.1",
     *      uncomment the following code block named BLOCK-7 to test your implementation. 
     *  
     *  This block is simply an example, however, your code
     *      will be tested using different cases(including edge examples).
     *
     */



    /*
    //  BLOCK - 7 : 
    //  uncomment this block after implementing (To Do: Step7.1) 
    std::cout << "BLOCK-7: results - " << std::endl;
    ubcse::queue<std::string> q7;
    std::cout << "An empty queue object is created as q7"<< std::endl;
    std::cout << "Delete item at position 0 of queue q7"<< std::endl;
    q7.delete_from_anywhere(0);

    std::cout << "Push seven strings into the queue, q7: Learning never exhausts the mind :) ." << std::endl;
    q7.push("Learning");
    q7.push("never");
    q7.push("exhausts");
    q7.push("the");
    q7.push("mind");
    q7.push(":)");
    q7.push(".");
    std::cout << "q7 content: " << std::endl;
    q7.print();
    std::cout << "-----------------------------------------------" << std::endl;

    
    std::cout << "Delete the string at position 1 " << std::endl;
    q7.delete_from_anywhere(1);
    std::cout << "q7 content: " << std::endl;
    q7.print();
    std::cout << "-----------------------------------------------" << std::endl;

    std::cout << "Delete the string at position 4 " << std::endl;
    q7.delete_from_anywhere(4);
    std::cout << "q7 content: " << std::endl;
    q7.print();
    std::cout << "-----------------------------------------------" << std::endl;

    std::cout << "Delete the string at position 14 " << std::endl;
    q7.delete_from_anywhere(14);
    std::cout << "q7 content: " << std::endl;
    q7.print();
    std::cout << "-----------------------------------------------" << std::endl;

    // End of Block-7
    
    */


    /* 
     *  Output of the BlOCK-7 is in Block-7.txt file
     */

    

    /*
     *  INSTRUCTIONS:  
     *  Comment out everything in BLOCK 7
     */



    /*
     *  INSTRUCTIONS:  
     *  Step - 8:
     *  Implement the "delete_all" member function of the template class queue.
     *  You can find the instructions to implement "delete_all" 
     *  functions with tags - "TO DO: Step8.1" in the queue.h file.
     *
     *  After implementing "TO DO: Step8.1",
     *      uncomment the following code block named BLOCK-8 to 
     *      test your implementation. 
     *  
     *  This block is simply an example, however, your code
     *      will be tested using different cases(including edge examples).
     *
     */


    /*
    //  BLOCK - 8 : 
    //  uncomment this block after implementing (To Do: Step8.1) 
    std::cout << "BLOCK-8: results - " << std::endl;
    ubcse::queue<std::string> q8_1;
    std::cout << "An empty queue object is created as q8_1"<< std::endl;
    std::cout << "Delete all items of queue q8_1"<< std::endl;
    q8_1.delete_all();

    std::cout << "Push seven strings into the queue, q8_1: There is nothing permanent except change." << std::endl;
    q8_1.push("There");
    q8_1.push("is");
    q8_1.push("nothing");
    q8_1.push("permanent");
    q8_1.push("except");
    q8_1.push("change");
    q8_1.push(".");
    std::cout << "q8_1 content: " << std::endl;
    q8_1.print();
    std::cout << "-----------------------------------------------" << std::endl;

    
    std::cout << "Change it!!" << std::endl;
    q8_1.delete_all();
    std::cout << "q8_1 content: " << std::endl;
    q8_1.print();
    std::cout << "-----------------------------------------------" << std::endl;

    std::cout << "Push There strings into the queue, q8_1: Got it !" << std::endl;
    q8_1.push("Got");
    q8_1.push("it");
    q8_1.push("!");
    std::cout << "q8_1 content: " << std::endl;
    q8_1.print();
    std::cout << "-----------------------------------------------" << std::endl;

    // End of Block-8
    
    */


    /* 
     *  Output of the BlOCK-8 is in Block-8.txt file
     */

    

    /*
     *  INSTRUCTIONS:  
     *  Comment out everything in BLOCK 8
     */


    /*
     *  INSTRUCTIONS:  
     *  Step - 9:
     *  Implement the copy constructor of the template class queue.
     *  You can find the instructions to implement copy constructor 
     *      with tags - "TO DO: Step9.1" in the queue.h file.
     *
     *
     *  After implementing "TO DO: Step9.1",
     *      uncomment the following code block named BLOCK-9 
     *      to test your implementation. 
     *  
     *  This block is simply an example, however, your code
     *  will be tested using different cases(including edge examples).
     *
     */



    /*
    //  BLOCK - 9 : 
    //  uncomment this block after implementing (To Do: Step9.1) 
    std::cout << "BLOCK-9: results - " << std::endl;
    ubcse::queue<int> q9_1;
    std::cout << "An empty queue object is created as q9_1"<< std::endl;
    

    std::cout << "Push four integers in q9_1: 16, 4, -5, 8" << std::endl;
    q9_1.push(16);
    q9_1.push(4);
    q9_1.push(-5);
    q9_1.push(8);

    std::cout << "q9_1 content: " << std::endl;
    q9_1.print();
    std::cout << "-----------------------------------------------" << std::endl;

    ubcse::queue<int> q9_2;
    std::cout << "An empty queue object is created as q9_2"<< std::endl;

    ubcse::queue<int> q9_3(q9_2);
    std::cout << "A queue object is created as q9_3, initialized with q9_2's content."<< std::endl;
    std::cout << "q9_3 content: " << std::endl;
    q9_3.print();
    std::cout << "-----------------------------------------------" << std::endl;

    ubcse::queue<int> q9_4(q9_1);
    std::cout << "A queue object is created as q9_4, initialized with q9_1's content."<< std::endl;
    std::cout << "q9_4 content: " << std::endl;
    q9_4.print();
    std::cout << "-----------------------------------------------" << std::endl;


    // End of Block-9
    
    */


    /* 
     *  Output of the BlOCK-9 is in Block-9.txt file
     */

    

    /*
     *  INSTRUCTIONS:  
     *  Comment out everything in BLOCK 9
     */



    /*
     *  INSTRUCTIONS:  
     *  Step - 10:
     *  Implement the destructor of the template class queue.
     *  You can find the instructions to implement destructor 
     *      with tags - "TO DO: Step10.1" in the queue.h file.
     *
     *
     */




} //end of main





