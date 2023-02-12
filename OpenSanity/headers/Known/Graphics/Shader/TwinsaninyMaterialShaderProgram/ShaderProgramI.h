#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramAbstract.h"

class ShaderProgramI : public ShaderProgramAbstract {
	public:

		void Construct();
		void Dispose(byte param_1);
		static void EmptyFunction();
		static uint IsD();
		virtual void InitId();
		static uint GetNum();
		virtual int Method3(char param_1);

};
