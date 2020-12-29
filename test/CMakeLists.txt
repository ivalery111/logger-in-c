add_executable(test_logger test_logger.c)

target_include_directories(test_logger 
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)
add_test(
    NAME test_logger
    COMMAND test_logger
)