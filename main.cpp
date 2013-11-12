#include <iostream> 
#include <sstream>
#include <fstream>
#include "Graph.h"
#include "Person.h"


using namespace std;

int input[]= {0};

void parse (string, char);
void parseGraph(Graph* );


int main()
{
	Graph socialNetwork(5);
	socialNetwork.initArray();


	vector<Person> Users;
	Person person0("stephen","tai");
	Users.push_back(person0);
	Person person1("shaun","chang");
	Users.push_back(person1);
	Person person2("ted","wu");
	Users.push_back(person2);

	person0.addFriend(2);
	person2.addFriend(0);
	//socialNetwork.addConnection(0,2);
	
	
	parseGraph(&socialNetwork);

	socialNetwork.printGraph();




	
	system("pause");
	return 0;
}

string intToString ( int i )
{
	stringstream ss;
	ss << i;
	return ss.str();
}

/** Parse each line of the input file, seperated by the character c
  * @param string containing the line of input
    @param char containing the character that seperates the input
	@returns the input in the global array input
  **/

void parse(string s, char c){
	if (s.length() ==0)
		return;
   int startingIndex=0;
   int i=0;
 
   // find index of first occurrence of c
   int endingIndex = s.find(c,0);
   while (endingIndex != -1)
   {
       //stoi function turns a string into integer.
       input[i] = stoi(s.substr(startingIndex, endingIndex-startingIndex));
       startingIndex = endingIndex +1;
       endingIndex = s.find(c,startingIndex);
       i++;
   }
   input[i]= stoi(s.substr(startingIndex));
}


/* @param - none
 *  Parse the input file 'graph.txt' into a 2by2 array, with
 *  each row and column index corresponds to n1 and n2 respectively
 */


void parseGraph(Graph* socialNetwork)
{
	string line;
	ifstream myfile ("graph.txt");
	if (myfile.is_open())
	{
		while ( getline (myfile,line) )
		{
			parse(line,',');
			int n1 = input[0];
			int n2 = input[1];

			socialNetwork->addConnection(n1,n2);
		}
		myfile.close();
	}
	else 
		cout << "Unable to open file\n";
}
