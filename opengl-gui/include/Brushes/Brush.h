#pragma once
#include <string>
#include <Util.h>

namespace OpenGLGUI {
	class Util::ShaderProgram;
	class Brush
	{
	protected:
		Util::ShaderProgram *shader;
		Brush(Util::ShaderProgram *shaderProgram) : shader(shaderProgram) {}

	public:
		Brush();
		virtual ~Brush();

		virtual void activate();
		virtual void deactivate();

		void setUniform2f(const std::string& uniformName, glm::vec2 data);
		void setUniform3f(const std::string& uniformName, glm::vec3 data);
		void setUniform4f(const std::string& uniformName, glm::vec4 data);
	};
}
