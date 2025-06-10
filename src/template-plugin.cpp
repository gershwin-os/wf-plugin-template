#include <wayfire/plugin.hpp>
#include <wayfire/core.hpp>

class wf_template_plugin : public wf::plugin_interface_t
{
public:
    void init() override
    {
        grab_interface->name = "template-plugin";
        LOGI("Template plugin loaded.");
    }

    void fini() override
    {
        LOGI("Template plugin unloaded.");
    }
};

DECLARE_WAYFIRE_PLUGIN(wf_template_plugin);
