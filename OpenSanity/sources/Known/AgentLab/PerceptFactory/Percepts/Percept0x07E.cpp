#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x07E.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x07E::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall Percept0x07E::GetUtilityScore(Percept0x07E *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		InstanceTransform *pIVar3;
		bool bVar4;
		float fVar5;
		InstanceContext *local_48 [2];
		Vector4 local_40;
		Vector4 local_30;
		Vector4 local_20;
		local_48[0] = (InstanceContext *)0x0;
		bVar4 = InstanceContext::GetFocusRelated(param_1,local_48,&local_40);
		if (bVar4 != false) {
		if (local_48[0] != (InstanceContext *)0x0) {
		pIVar3 = (local_48[0]->parent).transform;
		if ((*(byte *)&pIVar3->field3_0x60 & 4) != 0) {
		fVar5 = (pIVar3->matrix).m44;
		fVar1 = (pIVar3->matrix).m43;
		fVar2 = (pIVar3->matrix).m42;
		(pIVar3->position).x = (pIVar3->matrix).m41;
		(pIVar3->position).y = fVar2;
		(pIVar3->position).z = fVar1;
		(pIVar3->position).w = fVar5;
		pIVar3->field3_0x60 = (float)((uint)pIVar3->field3_0x60 & 0xfffffffa);
		}
		local_40.x = (pIVar3->position).x;
		local_40.y = (pIVar3->position).y;
		local_40.z = (pIVar3->position).z;
		}
		InstanceContext::thunk_FUN_0005a4c0((param_1->parent).ctx,&local_30,&local_20);
		local_40.z = local_40.z - local_30.z;
		local_40.x = local_40.x - local_30.x;
		fVar5 = local_40.z * local_40.z + (local_40.y - local_30.y) * (local_40.y - local_30.y) +local_40.x * local_40.x;
		if (fVar5 <= _DAT_004963dc) {
		fVar5 = 0.0;
		}
		else {
		fVar5 = FLOAT_0038639c / SQRT(fVar5);
		}
		return local_20.x * local_40.x * fVar5 + local_20.z * local_40.z * fVar5;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x07E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x07E * __thiscall Percept0x07E::Dispose(Percept0x07E *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x07E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x07E::Construct(Percept0x07E *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x7e;
		(this->parent).vtable = &Percept_VT_ID_0x7e;
		return;
		}
		
	*/
	return;
}

