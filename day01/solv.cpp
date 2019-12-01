#include <iostream>
#include <sstream>
#include <fstream>
#include <string> 
#include <vector>
#include <cmath>
#include <deque>

int 
main( int argc , char**argv )
{

	std::string line;
	std::fstream file;
	std::vector<int> v;
	long total;
	file.open("input", std::ifstream::in );
	while( std::getline( file , line ) ) 
	{
		v.push_back( std::stoi(line) );
	}
	file.close();

	for( int i : v )
	{
		total += ( std::floor( i / 3 ) - 2 );
	}

	std::cout << "Part 1 : " << total << "\n";

	std::fstream file2;
	std::deque<int> v2;
	file2.open("input2" , std::ifstream::in );
	while( std::getline( file2 , line ) )
	{
		v2.push_back( std::stoi(line) );
	}
	total = 0;
	long i;
	long res = 0;
	while( !v2.empty() ) {
		i = v2.front(); v2.pop_front();
		res = ( std::floor( i / 3 ) - 2 );
		if ( res > 0 ) {
		total += res;
		v2.push_back(res);
		
		}
	}

	std::cout << "Part 2: " << total << "\n";







	return 0;
}
