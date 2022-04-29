option(ENABLE_SANITIZERS "Enables ASan." FALSE)

function(configure_sanitizers target)
    if(ENABLE_SANITIZERS)
        message(STATUS "Sanitizers disabled.")
        return()
    endif()

    set(asan_flags
        -fsanitize=address;
    )
    if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
        list(APPEND asan_flags "-shared-libasan")
    endif()

    target_compile_options("${target}"
        INTERFACE
            "${asan_flags}"
    )

    target_link_libraries("${target}"
        INTERFACE
            "${asan_flags}"
    )

    message(STATUS "Sanitizers enabled for target ${target} (Compiler: ${CMAKE_CXX_COMPILER_ID})")
endfunction()
