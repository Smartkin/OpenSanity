#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderInstanceInstance : public SectionReaderAbstract {
	public:
		InstanceSectionResources * instanceResources;
		CollectionInstanceWrapper * collectionInstance;
		int number;

		virtual void Read(void* buffer, size_t size, size_t offset);
		void Dispose(byte param_1);

};
