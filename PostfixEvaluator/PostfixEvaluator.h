#include "MyStack.h"
using namespace std;
class PostfixEvaluator
{
    private:
        char *input;
    	int index;
    	MyStack stack;

    	char nextChar();
        bool isOperator(char);
        int solve(char);

    public:
        PostfixEvaluator(string);
        void scanner();
        void computeResult();
};
