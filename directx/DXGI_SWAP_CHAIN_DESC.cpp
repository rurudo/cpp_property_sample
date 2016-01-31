// https://github.com/Microsoft/DirectX-Graphics-Samples/blob/master/Samples/D3D12HelloWorld/src/HelloWindow/D3D12HelloWindow.cpp
DXGI_SWAP_CHAIN_DESC swapChainDesc = {};
swapChainDesc.BufferCount = FrameCount;
swapChainDesc.BufferDesc.Width = m_width;
swapChainDesc.BufferDesc.Height = m_height;
swapChainDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
swapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
swapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
swapChainDesc.OutputWindow = Win32Application::GetHwnd();
swapChainDesc.SampleDesc.Count = 1;
swapChainDesc.Windowed = TRUE;