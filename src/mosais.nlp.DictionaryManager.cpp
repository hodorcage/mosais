#include "mosais.nlp.DictionaryManager.hpp"

mosais::nlp::DictionaryManager::DictionaryManager()
{}
mosais::RetType mosais::nlp::DictionaryManager::addDictionary(std::string name, std::string file)
{
	dicts[name] = Dictionary(file);
	
	return RetType();
}
