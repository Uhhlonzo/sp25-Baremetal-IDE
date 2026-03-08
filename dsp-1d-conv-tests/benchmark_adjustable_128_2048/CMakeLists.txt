#################################
# Build Configuration
#################################

# 1. Define the executable and ALL source files in ONE command
add_executable(benchmark_adjustable_128_2048
  src/main.c
  ../common/simple_setup.c
)

# 2. Configure Include Directories
# Includes the 'include' folder inside the current test directory
target_include_directories(benchmark_adjustable_128_2048 PUBLIC include)

# Includes the 'common' folder so main.c can find simple_setup.h
target_include_directories(benchmark_adjustable_128_2048 PRIVATE ../common)

#################################
# Dependencies
#################################

# Link against the glossy library and standard hardware libs
target_link_libraries(benchmark_adjustable_128_2048 PRIVATE 
  -L${CMAKE_BINARY_DIR}/glossy -Wl,--whole-archive glossy -Wl,--no-whole-archive
)

# These are the hardware libraries needed for PLL and UART control
target_link_libraries(benchmark_adjustable_128_2048 PRIVATE chip-config)
target_link_libraries(benchmark_adjustable_128_2048 PRIVATE rocketcore)

if (PROF_COV)
  target_link_libraries(benchmark_adjustable_128_2048 PRIVATE gcov)
endif()