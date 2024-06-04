#include "quantum.h"
#include "pointing_device.h"

void register_button(bool pressed, enum mouse_buttons button) {
    report_mouse_t currentReport = pointing_device_get_report();
    if (pressed) {
        currentReport.buttons |= button;
    } else {
        currentReport.buttons &= ~button;
    }
    pointing_device_set_report(currentReport);
}
