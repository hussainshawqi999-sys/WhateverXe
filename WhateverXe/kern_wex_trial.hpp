// Dell Latitude 5440 trial gate (not upstream).
// The 6-bpc internal eDP admission is honoured only when the boot argument
// -wextry is present. Without it this build behaves exactly like upstream
// 0.8.2: the panel is rejected (InvalidDPSource) and the firmware framebuffer
// is kept. A userspace helper can therefore offer a one-shot, self-reverting
// test boot by adding and removing a single boot argument.
#ifndef KERN_WEX_TRIAL_HPP
#define KERN_WEX_TRIAL_HPP
namespace WEXTrial {
inline bool &sixBpcPanel() { static bool allowed=false; return allowed; }
}
#endif
