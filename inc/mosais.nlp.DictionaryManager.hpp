#pragma once

#include <map>
#include <string>

#include "pugixml.hpp"

#include "mosais.General.hpp"
#include "mosais.nlp.Dictionary.hpp"

namespace mosais { namespace nlp {

	class DictionaryManager
	{
	public:
		DictionaryManager();
		std::map<std::string, Dictionary> dicts;
		
		RetType addDictionary(std::string name, std::string file);
		
		std::string activeDictionary;
	};

}}
