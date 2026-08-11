/*Given the head of a linked list of integers, determine the middle node of the linked list.
 However, if the linked list has an even number of nodes, return the second middle node.*/

#include<iotream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long rev=0;
        int c=0;
        if(x<0)
        {
            x=x*-1;
            c++;
        }
        while(x>0)
        {
            rev=rev*10+x%10;
            x=x/10;
        }
        if(c==1)
        {
            return -x;
        }
        else
        {
            return x;
        }
    }
};