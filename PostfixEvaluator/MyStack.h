
class MyStack
{
	private:
		char *stack;
		int top;

	public:
		MyStack();
		MyStack(int);
		~MyStack();

		void push(char);
		char pop();
		char peek();

		bool isFull();
		bool isEmpty();
		void print();
};
