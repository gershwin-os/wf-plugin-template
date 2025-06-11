#include <wayfire/plugin.hpp>
#include <wayfire/core.hpp>

class wf_template_plugin : public wf::plugin_interface_t
{
public:
    void init() override
    {
        // Plugin initialized
    }

    void fini() override
    {
        // Plugin cleaned up
    }
};

extern "C" wf::plugin_interface_t* newInstance()
{
    return new wf_template_plugin();
}

