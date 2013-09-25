#include "mosais.nlp.Dictionary.hpp"

mosais::nlp::Dictionary::Dictionary()
	: doc(new pugi::xml_document())
{}
mosais::nlp::Dictionary::Dictionary(std::string file)
	: doc(new pugi::xml_document())
{
	res = doc->load_file(file.c_str());
	
	LOG("Load result: " << res.description());
}
