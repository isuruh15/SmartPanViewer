#pragma once

class panViewerUI
{
public:
	panViewerUI(int left, int middle, int right, int width, int height);

	void openCameraOutput();

	void stitchedOutput();

	void deleteUI();
};
