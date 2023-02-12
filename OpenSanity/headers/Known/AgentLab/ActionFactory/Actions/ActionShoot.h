#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionShoot : public ActionAbstract {
	public:
		int unnamed_1;
		int unnamed_2;
		int unnamed_3;
		int unnamed_4;
		int unnamed_5;
		int unnamed_6;
		int unnamed_7;
		int unnamed_8;
		int unnamed_9;

		void Dispose(byte param_1);
		virtual void Execute(InstanceContext* ctx);
		void Construct();
		virtual void UnkMethod(int* param_1);
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		static int GetSize();

};
