#include "imgui_osd_override.h"
#include "IconsFontAwesome5.h"
#include "common/assert.h"
#include "common/easing.h"
#include "common/lru_cache.h"
#include "common/file_system.h"
#include "common/string.h"
#include "common/string_util.h"
#include "common/timer.h"
#include "host_display.h"
#include "host_interface.h"
#include "imgui_internal.h"
#include "imgui_styles.h"
#include <cmath>
#include <mutex>

namespace ImGuiOSDOverride {

float osd_override_font_scale = 1.0f;
bool osd_override_scaling = false;
ImFont* g_osd_override_font = nullptr;

}