#include "quantum.h"
#include "pointing_device.h"

// initiator is transaction start side
void soft_serial_initiator_init(void) {}
// target is interrupt accept side
void soft_serial_target_init(void) {}

bool soft_serial_transaction(int sstd_index) { return true; }

void register_button(bool pressed, enum mouse_buttons button) {
    report_mouse_t currentReport = pointing_device_get_report();
    if (pressed) {
        currentReport.buttons |= button;
    } else {
        currentReport.buttons &= ~button;
    }
    pointing_device_set_report(currentReport);
}
