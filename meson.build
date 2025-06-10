project('wayfire-plugin-template', 'cpp',
  default_options: ['cpp_std=c++17'])

wayfire_dep = dependency('wayfire', required: true)

srcs = files('src/template-plugin.cpp')

shared_module(
  'template-plugin',
  srcs,
  dependencies: [wayfire_dep],
  name_suffix: '',
  install: true,
  install_dir: join_paths(get_option('libdir'), 'wayfire')
)
