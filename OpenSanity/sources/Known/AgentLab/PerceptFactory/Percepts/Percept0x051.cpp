#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x051.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x051::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x051 * __thiscall Percept0x051::Dispose(Percept0x051 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x051::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x051::GetUtilityScore(Percept0x051 *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((param_1->nodes).array[2] == (InstanceNodeAbstract *)0x0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void Percept0x051::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x051::Construct(Percept0x051 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x51;
		(this->parent).vtable = &Percept_VT_ID_0x51;
		return;
		}
		
	*/
	return;
}

