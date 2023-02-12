#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"

class SectionScript : public SectionAbstract {
	public:
		SectionDataScriptBase * collection;
		int unkField;

		virtual SectionReaderScript* GetReader(uint param_1, int param_2);
		static byte ReturnNum();
		static bool IsOne(int param_1);
		virtual void Stub1();
		virtual void UnkMethod3();
		virtual void Stub2();
		virtual void Stub3();
		virtual void DisposeResources();
		void Dispose(byte param_1);
		virtual int GetElementCount(int param_1);
		virtual bool Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2);
		void Construct(uint collection, uint param_2);

};
