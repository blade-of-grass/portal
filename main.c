#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include "configs.h"
#include "shape.h"
#include <stdio.h>

int main(void)
{
    // create window
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    GLFWwindow* window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE, NULL, NULL);

    // log vulkan extension count
    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(NULL, &extensionCount, NULL);

    printf("%d extensions supported", extensionCount);

    // program loop
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    // cleanup
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}