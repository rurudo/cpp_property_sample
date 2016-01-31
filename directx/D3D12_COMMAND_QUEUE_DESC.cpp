// https://github.com/Microsoft/DirectX-Graphics-Samples/blob/master/Samples/D3D12HelloWorld/src/HelloWindow/D3D12HelloWindow.cpp
D3D12_COMMAND_QUEUE_DESC queueDesc = {};
queueDesc.Flags = D3D12_COMMAND_QUEUE_FLAG_NONE;
queueDesc.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;