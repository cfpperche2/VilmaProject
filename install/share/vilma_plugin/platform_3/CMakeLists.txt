set(MODEL_NAME platform_3)
set (files 
  model.config
  model.sdf
)

add_subdirectory(meshes)
add_subdirectory(materials)

install(FILES ${files} DESTINATION ${CMAKE_INSTALL_PREFIX}/share/${PROJECT_NAME}-${DRC_SIM_VERSION}/gazebo_models/environments/${MODEL_NAME}/)
