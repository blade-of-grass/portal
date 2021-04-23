CFLAGS = -std=c11 -O2 -m64
LIBS = -lglfw3 -lvulkan-1 -lpthread -lgdi32


LIB_HINTS = -L"C:/apps/dependencies/glfw-3.3.4.bin.WIN64/lib-mingw-w64/" -L"C:/VulkanSDK/1.2.170.0/Lib/"
INCLUDES = -I"C:/apps/dependencies/glfw-3.3.4.bin.WIN64/include/" -I"C:/VulkanSDK/1.2.170.0/Include/"
BUILD_DIR = ./build/

main: main.c
	gcc $(CFLAGS) -o main main.c $(INCLUDES) $(LIB_HINTS) $(LIBS)
