// https://github.com/Microsoft/DirectX-Graphics-Samples/blob/master/Samples/D3D12Multithreading/src/DXSampleHelper.h
CREATEFILE2_EXTENDED_PARAMETERS extendedParams = {};
extendedParams.dwSize = sizeof(CREATEFILE2_EXTENDED_PARAMETERS);
extendedParams.dwFileAttributes = FILE_ATTRIBUTE_NORMAL;
extendedParams.dwFileFlags = FILE_FLAG_SEQUENTIAL_SCAN;
extendedParams.dwSecurityQosFlags = SECURITY_ANONYMOUS;
extendedParams.lpSecurityAttributes = nullptr;
extendedParams.hTemplateFile = nullptr;