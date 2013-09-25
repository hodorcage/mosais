#include "mosais.General.hpp"
#include "mosais.System.hpp"

int main(int argc, char** argv)
{
	mosais::System sys;
	sys.nlp.dictManager.addDictionary("hal", "hal_data.xml");
	
	LOG(sys.nlp.dictManager.dicts["hal"].doc->child("Atom").child("Name").child_value());
	
	return EXIT_SUCCESS;
}
