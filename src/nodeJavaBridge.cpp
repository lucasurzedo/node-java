
#include "java.h"
#include "javaObject.h"

extern "C" {
  static void init(v8::Local<v8::Object> target) {
    Java::Init(target);
    JavaObject::Init(target);
  }

  //NODE_MODULE(nodejavabridge_bindings, init);
  NODE_MODULE_INIT() {
    Init(nodejavabridge_bindings);
}
}

#ifdef WIN32

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
  return TRUE;
}

#endif