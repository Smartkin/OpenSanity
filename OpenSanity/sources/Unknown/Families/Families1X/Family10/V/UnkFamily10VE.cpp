#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VE.h"

void UnkFamily10VE::Construct(int param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10VE * __thiscall UnkFamily10VE::Construct(UnkFamily10VE *this,int param_1,int param_2){
		undefined4 uVar1;
		UnkFamily8BA *this_00;
		UnkFamily8BC *element;
		uint uVar2;
		UnkFamily10Base::Construct(&this->parent,param_1 + 0x5e,1);
		(this->parent).field7_0x1c = param_2;
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_VE;
		this->field1_0x50 = (UnkFamily8Abstract *)param_1;
		this_00 = (UnkFamily8BA *)VirtualPool::AllocateMemory(0x14);
		if (this_00 == (UnkFamily8BA *)0x0) {
		param_1 = 0;
		}
		else {
		param_1 = (int)UnkFamily8BA::Construct(this_00,4,0x1d,param_2,1);
		}
		uVar2 = 0;
		do {
		element = (UnkFamily8BC *)VirtualPool::AllocateMemory(0x18);
		if (element == (UnkFamily8BC *)0x0) {
		element = (UnkFamily8BC *)0x0;
		}
		else {
		uVar1 = (&DAT_0039dde0)[uVar2];
		UnkFamily8B::Construct((UnkFamily8B *)element,uVar2 + 0x97,uVar2,(UnkFamily10Base *)0x0,1);
		(element->parent).parent.vtable = &UnkFamily8_VT_BB;
		*(undefined4 *)&element->field_0x14 = uVar1;
		}
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)element);
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < 0x10);
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)param_1);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10VE::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10VE::Dispose(UnkFamily10VE *this,byte param_1){
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily10VE::FUN_000a6f80() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10VE::FUN_000a6f80(UnkFamily10VE *this){
		GameController *pGVar1;
		int iVar2;
		uint uVar3;
		uint *puVar4;
		bool bVar5;
		pGVar1 = GameController3;
		uVar3 = 0;
		puVar4 = (GameController3->chunkDescriptor).uintArray;
		do {
		iVar2 = UnkFamily10Base::FUN_001a56e0(&this->parent,uVar3);
		bVar5 = (*(byte *)puVar4 & (byte)(1 << ((byte)this->field1_0x50 & 0x1f))) != 0;
		if (0xc < uVar3) {
		bVar5 = bVar5 && 0x17 < ((byte)((pGVar1->chunkDescriptor).flags >> 0x15) & 0x1f);
		}
		puVar4 = puVar4 + 1;
		uVar3 = uVar3 + 1;
		*(char *)(iVar2 + 0xd) = !bVar5 + -1;
		}
		 while (uVar3 < 0x10);
		return;
		}
		
	*/
	return;
}

