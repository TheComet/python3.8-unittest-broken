cmake_minimum_required (VERSION 3.14)
project ("wtf" LANGUAGES C)
find_package (Python COMPONENTS Development REQUIRED)
add_executable (wtf "main.c")
target_link_libraries (wtf PRIVATE Python::Python)

