#pragma once

#include "mosais.General.hpp"
#include "mosais.nlp.DictionaryManager.hpp"

namespace mosais { namespace nlp {

	class Manager
	{
	public:
		Manager();
		
		DictionaryManager dictManager;
	};

}}
