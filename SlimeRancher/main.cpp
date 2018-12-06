#include <iostream>
#include "Engine\engine.h"

using namespace std;

int main()
{

	cout << "Hello World!" << endl;
	
	Engine engine;
	engine.Initialize();

	while (true)
	{
		engine.Update();
		engine.Render();
	}

	return 0;
}