// NOTE: second argument must be a number
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

#include <iostream>
#include <string>

using namespace std;

class Stack 
{
public:
	int max_len;
	int mark = 0;

	// gets the max data length
	Stack(int max_len)
	{
		max_len = max_len;
	}

	// prints the Stack to stdio
	void print()
	{
		for (int i = 0; i < mark; ++i)
			printf("%c", data[i]);
		printf("\n");
	}

	// adds a value (val) to the top
	void push(char val)
	{
		data[mark] = val;
		++mark;
	}

	// removes the top value
	void pop()
	{
		--mark;
		data[mark] = 0;
	}

private:
	char *data = (char*) malloc(max_len);
};

int main(int argc, char const *argv[])
{
	int max_len = stoi(argv[1]);
	Stack stack(max_len);

	for (;;)
	{
		printf("\nDo you wish to print(1), push(2), pop(3)? ");
		int choice;
		scanf("%d", &choice);
		printf("\n");
		switch (choice) 
		{
		case 1:
			stack.print();
			break;
		case 2:
			printf("Type letter to be added: ");
			// clears the buffer
			getchar();
			stack.push(getchar());
			break;
		case 3:
			stack.pop();
			break;
		}
	}

	return 0;
}