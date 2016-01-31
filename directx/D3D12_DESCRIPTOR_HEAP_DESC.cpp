// https://github.com/Microsoft/DirectX-Graphics-Samples/blob/master/Samples/D3D12HelloWorld/src/HelloWindow/D3D12HelloWindow.cpp
D3D12_DESCRIPTOR_HEAP_DESC rtvHeapDesc = {};
rtvHeapDesc.NumDescriptors = FrameCount;
rtvHeapDesc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
rtvHeapDesc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;