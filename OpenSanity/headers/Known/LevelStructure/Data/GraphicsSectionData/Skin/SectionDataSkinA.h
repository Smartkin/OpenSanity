#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skin/SectionDataSkin.h"

class SectionDataSkinA : public SectionDataSkin {
	public:
		TwinString folder;

		void Dispose();
		void Dispose_1(byte param_1);
		void Construct(char** param_1);

};
