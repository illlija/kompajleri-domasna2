#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	string message = "Wow, you are really writing your homework! I'm impressed."

	// Try detecting the statements inside the following for loops.
	for(int i = 0; i < 15; i++)
	{
		std::cout << message[i]<<std::endl;
	}

	for ( int i=0; i<15; i++ ) std::cout <<message[i];
	std::endl;
	
	for (int i=0; i<7; i++ ) {
		if(i%2 == 0)
			std::cout<<i-2<<endl;
		std::cout<<"The increment element went up to: "<<i<<std::endl;
		i+=1;
		i--;
	}

	// Bonus!
	for (int i=0, i<87; i++) 
		std::cout<<"Try to find out how to detect if a for loop has a broken structure."<<std::endl;
	for (int i=50; i>34; i--)
		std::cout << "Like, ";
		std::cout << "for example,";
		std::cout << " this loop." << std::endl;
	}
	return 0;
}