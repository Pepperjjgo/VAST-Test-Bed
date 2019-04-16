//Virtual Autonomous System Testbed
//ODU Capstone 2018-2019

#include "VComponent.h"
#include <iostream>
#include <map>
#include<variant>
#include "VType.h"
#include "AV.h"
#include <Windows.h>
#include "ParseXML.h"


int main(int argc, WCHAR *argv[])
{
	XMLParser *parser = new XMLParser(L"C:/Users/jaron/Downloads/test.xml");
	parser->Parse();

	return 0;
}

/*
void sumoConnection() {
	Client client;
	client.connect("localhost", 1337);
	std::cout << "time in ms: " << client.simulation.getCurrentTime() << "\n";
	std::cout << "run 5 steps ...\n";
	client.simulationStep(5 * 1000);
	std::cout << "time in ms: " << client.simulation.getCurrentTime() << "\n";
	client.close();
} */

