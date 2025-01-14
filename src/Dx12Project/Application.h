#pragma once

namespace tpot
{
	class Application
	{
	public:
		Application();
		~Application();

		int Initialize(HWND hwnd, unsigned int width, unsigned int height);
		void Finalize();

		int Update();
	};
}