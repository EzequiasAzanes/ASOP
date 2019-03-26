
class MyStack
{
	private:
		char *stack;

	public:
		MyStack();
		MyStack(int);
		~MyStack();

		void push(char);
		void pop();
		char peek();

		bool isFull();
		bool isEmpty();
		void print();
};
