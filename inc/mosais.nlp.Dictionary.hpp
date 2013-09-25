#pragma once

#include <memory>

#include "pugixml.hpp"

#include "mosais.General.hpp"

namespace mosais { namespace nlp {

	class Dictionary
	{
	public:
		Dictionary();
		Dictionary(std::string file);
		
		std::unique_ptr<pugi::xml_document> doc;
		pugi::xml_parse_result res;
	};

}}
