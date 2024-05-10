#pragma once
#include<string>
#include <vector>

namespace VGE {
	class EngineRenderPipeline {
	public:
		EngineRenderPipeline(const std::string& vertFilePath, const std::string& fragFilePath); 
	private:
		static std::vector<char> readFile(const std::string& filePath); //to reaf shader files.
		void createEnginePipeline(const std::string& vertFilePath, const std::string& fragFilePath);
	};
}