/************************************************
 * Author: Kyle De Laurell
 * Date: 2/22/16
 * Description: Queue Node header file
 ************************************************/
#ifndef QueueNode_HPP
#define QueueNode_HPP

struct QueueNode{
    int value;
    QueueNode *next;
    QueueNode *previous;
};

#endif
