#include <iostream>
#include <fstream>
#include <vector>
#include <istream>
#include <iterator>
#include <string>
#include <sstream>


int 
main( int argc , char**argv )
{
	std::fstream input,output;
	input.open("input1", std::fstream::in);
	// output.open("output",std::fstream::out);
	std::string line;
	std::getline( input , line );
	std::istringstream iss(line);
	std::vector<std::string> v( std::istream_iterator<std::string>{iss} , std::istream_iterator<std::string>());
	std::vector<int> v2;
	for( auto s : v )
		v2.push_back(stoi(s));

	std::cout << v2[1] << " " << v2[3] << " " << v2[2] << "\n";

	return 0;
}

