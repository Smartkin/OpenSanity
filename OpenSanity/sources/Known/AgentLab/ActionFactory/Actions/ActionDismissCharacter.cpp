#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDismissCharacter.h"

void ActionDismissCharacter::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDismissCharacter::Dispose(ActionDismissCharacter *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDismissCharacter::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionDismissCharacter * __fastcall ActionDismissCharacter::Construct(ActionDismissCharacter *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_DismissCharacter;
		this->unlabelled12 = 6;
		return this;
		}
		
	*/
	return;
}

int ActionDismissCharacter::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDismissCharacter::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionDismissCharacter::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDismissCharacter::UnkMethod(ActionDismissCharacter *this,int *param_1){
		char cVar1;
		short *psVar2;
		int iVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x239) {
		iVar3 = thunk_FUN_00066f00(*(undefined4 *)(psVar2 + 2));
		this->unlabelled12 = iVar3;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionDismissCharacter::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall ActionDismissCharacter::ExecuteFromCallContext(ActionDismissCharacter *this){
		InstanceContext *pIVar1;
		InstanceContextSub *this_00;
		if (this->unlabelled12 == 6) {
		pIVar1 = (InstanceContext *)0x0;
		}
		else {
		pIVar1 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[this->unlabelled12];
		if (pIVar1 != (InstanceContext *)0x0) {
		pIVar1 = *(InstanceContext **)&pIVar1->parent;
		}
		}
		if (pIVar1 == (InstanceContext *)0x0) {
		this_00 = (InstanceContextSub *)0x0;
		}
		else {
		this_00 = (InstanceContextSub *)(&pIVar1->findMe)[1];
		}
		if (this_00 != (InstanceContextSub *)0x0) {
		FUN_000f7470(this_00,(int *)pIVar1);
		}
		return;
		}
		
	*/
	return;
}

