#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x24E.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x24E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x24E * __fastcall Percept0x24E::Construct(Percept0x24E *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x24e;
		(this->parent).vtable = &Percept_VT_ID_0x24e;
		return this;
		}
		
	*/
	return;
}

void Percept0x24E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x24E * __thiscall Percept0x24E::Dispose(Percept0x24E *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x24E::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x24E::GetUtilityScore(Percept0x24E *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((*(uint *)((int)(param_1->parent).field14_0x20.matrix2.m42 + 0x40) >> 0x12 & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

