#include <cstdio>
#include <cstdlib>
#include <DirectXTex.h>
#include "TextureConverter.h"

int main(int argc, char* argv[]) {

	for (int i = 0; i < argc; i++) {

		printf("argv[i]");

		printf("\n");

	}

	enum Argument {
		kApplicationPath,
		kFilePath,

		NumArgument
	};

	assert(argc >= NumArgument);

	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	TextureConverter converter;

	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	CoUninitialize();


	system("pause");
	return 0;
}