#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x073.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x073::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x073::Dispose(Action0x073 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x073::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x073::Construct(Action0x073 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x073;
		return;
		}
		
	*/
	return;
}

int Action0x073::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x073::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x073::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x073::ExecuteFromCallContext(Action0x073 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceContext *this_00;
		pIVar1 = (ctx->parent).ctx;
		this_00 = (InstanceContext *)(pIVar1->nodes).array[9];
		if (this_00 != (InstanceContext *)0x0) {
		InstanceContext::FUN_001703a0(this_00,(InstanceNodeAbstract *)pIVar1);
		}
		return;
		}
		
	*/
	return;
}

