#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x28B : public ActionAbstract {
	public:
		int unnamed_1;

		void Dispose(byte param_1);
		void Construct();
		static int GetSize();
		virtual void ExecuteFromCallContext();

};
