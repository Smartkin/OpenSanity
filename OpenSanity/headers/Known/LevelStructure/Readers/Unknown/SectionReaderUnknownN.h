#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownN : public SectionReaderAbstract {
	public:
		SectionRM * section;

		virtual void Read(void* param_1, size_t param_2);
		void Dispose(byte param_1);
		void Construct(uint param_1, uint param_2);

};
