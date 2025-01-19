#include "GLFW/glfw3.h" 
#include <application.h>

int main()
{
  Application app(800, 600, "Aurora_Engine");

  while(app.IsActive())
  {
    app.Run([&]
    {
      glClearColor(0.4f, 0.4f, 0.4f, 1.0f);
      glClear(GL_COLOR_BUFFER_BIT);
    });
  }
  app.Exit();
  return 0;
}
