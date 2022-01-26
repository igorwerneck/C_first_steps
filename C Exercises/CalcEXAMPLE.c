#include <stdio.h>
 #include <stdlib.h>

#define MAX_INPUT_SIZE 1000;
struct Node
{
    char operator;
    int result;
    struct Node* left;
    struct Node* right;
};

enum InputState{
    START = 0,
    NUMBER,
    OPERATOR
    };

void pushNodeToList( struct Node**head, struct Node**tail, char op, int result)
{
    struct Node* nodePtr = malloc(sizeof(*nodePtr));
    nodePtr->operator = op;
    result = result;
    if(!head)
    {
        *head = nodePtr;
        *tail = nodePtr;
        nodePtr->left = 0;
        nodePtr->right = 0;
    }
    else{
        nodePtr->left = *tail;
        (*tail)->right = nodePtr;
        *tail = nodePtr;
    }
}

void calculateNode( struct Node* nodePtr)
{
    if(nodePtr->left != 0 && nodePtr->right != 0)
    {
        if(nodePtr->left->operator == 'n' && nodePtr->right->operator == 'n' )
        {
            //calculate result
            switch(nodePtr->operator)
            {
                case '+':
                    nodePtr->result = nodePtr->left->result + nodePtr->right->result;
                    break;
                case '-':
                    nodePtr->result = nodePtr->left->result - nodePtr->right->result;
                    break;
                case '*':
                    nodePtr->result = nodePtr->left->result * nodePtr->right->result;
                    break;
                default:
                    printf("Calculation Error: %d \n", 5);
                    return;

            }
            //change type of node to 'n'
            nodePtr->operator == 'n';

            //reduce the numbers consumed
            struct Node* tempLeft = nodePtr->left;
            struct Node* tempRight = nodePtr->right;
            nodePtr->left = tempLeft->left;
            nodePtr->right = tempRight->right;
            free(tempLeft);
            free(tempRight);
        }
        else
        {
            printf("Calculation Error: %d \n", 4);
            return;
        }
    }
    else{
        printf("Calculation Error: %d \n", 3);
        return;
    }
}

int main(void) {

int ch;
struct Node* head = 0;
struct Node* tail = 0;

//have a state machine to handle the logics related to parsing input
int num = 0;
enum InputState mState = START;

int i = 1;
while ((ch = getchar()) != EOF)
{
    switch(mState)
    {
        case START:
            if (ch >= '0' && ch <= '9'){
                mState = NUMBER;
                num = 0;
                //initialize state to number
            }
            else if(ch == '+' || ch == '-' || ch == '*'){
                mState = OPERATOR;
                //initilize state to operator
            }
            else{
                //your error code
                printf("Input Error: %d \n", 1);
                return 0;
            }
        break;
        case NUMBER:
            if (ch >= '0' && ch <= '9'){
                num = num * 10 + ch - '0';
            }
            else if(ch == '+' || ch == '-' || ch == '*'){
                mState = OPERATOR;
                //we just got a number recorded
                pushNodeToList(&head,&tail,'n',num);//'n' for number
            }
            else{
                printf("Input Error: %d \n", 2);
                return 0;
            }
        break;
        case OPERATOR:
            if (ch >= '0' && ch <= '9'){
                mState = NUMBER;
                num = ch - '0';
            }
            else if(ch == '+' || ch == '-' || ch == '*'){
                pushNodeToList(&head,&tail,ch,0);//push in operator
            }
            else{
                printf("Input Error: %d \n", 3);
                return 0;
            }
        break;
    }
}
//terminal condition to push-in last number
if(mState == NUMBER)
{
    pushNodeToList(&head,&tail,'n',num);//'n' for number
}

//higher prioriety operation
struct Node* workingPtr = head;
while(workingPtr !=tail)//assuming the last input is number (not operator)
{
    if(workingPtr->operator == '*')
    {
        calculateNode(workingPtr);
    }
}
//lower prioriety operations
workingPtr = head;
while(workingPtr !=tail)
{
    if(workingPtr->operator == '+' || workingPtr->operator == '-' )
    {
        calculateNode(workingPtr);
    }
}
//print result
if(head == tail && head->operator == 'n')
{
    printf("Result : %d\n", head->result);
}
else
{
    printf("Error: %d \n", 7);
    return 0;
}


return 0;
}
