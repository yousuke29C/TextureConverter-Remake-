#pragma once
#include <DirectXTex.h>
#include <string>

class TextureConverter
{
public:
	
	void ConvertTextureWICToDDS(const std::string& filePath);

private:
	
	void SaveDDSTextureToFile();

	void LoadWICTextureFromFile(const std::string& filePath);

	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

	void SeparateFilePath(const std::wstring& filePath);

private:
	
	DirectX::TexMetadata metadata_;
	
	DirectX::ScratchImage scratchImage_;

	std::wstring directoryPath_;
	
	std::wstring fileName_;
	
	std::wstring fileExt_;
};