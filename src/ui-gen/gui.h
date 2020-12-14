#ifndef _GUI_H
#define _GUI_H

#include "gfx.h"

typedef enum guiPage {
	DP_OSCILLOSCOPE,
} guiPage;

// Widget handles
extern GHandle ghPageContainerDp_oscilloscope;
extern GHandle ghLabelTitle;
extern GHandle ghGraph;
extern GHandle ghLabelSignalForm;
extern GHandle ghLabel;
extern GHandle ghPushButtonTimePlus;
extern GHandle ghPushButtonTimeMinus;
extern GHandle ghRedLed;
extern GHandle ghPushButtonTrigger;
extern GHandle ghLabelTimeDiv;
extern GHandle ghLabelSignalFrequ;

#ifdef __cplusplus
extern "C" {
#endif

	bool_t guiInit(void);
	void guiShowPage(guiPage page);

#ifdef __cplusplus
}
#endif

#endif // _GUI_H
