#ifndef H_ATOL
#define H_ATOL

#include <memory>
#include <functional>
#include <nan.h>

namespace TED {
  namespace Fptr {
    class IFptr;
  }
}

typedef std::function<void(TED::Fptr::IFptr*)> PrinterPtrDeleter;
typedef std::unique_ptr<TED::Fptr::IFptr, PrinterPtrDeleter> PrinterPtr;

class Atol : public Nan::ObjectWrap {
  PrinterPtr printer;

  explicit Atol(const char *libPath, const char *tty, int model, int protocol);
  ~Atol();

  static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);
  static void PrintText(const Nan::FunctionCallbackInfo<v8::Value>& info);
  static void PrintFooter(const Nan::FunctionCallbackInfo<v8::Value>& info);
  static void OpenCheck(const Nan::FunctionCallbackInfo<v8::Value>& info);
  static void ZReport(const Nan::FunctionCallbackInfo<v8::Value>& info);
  static void RegistrationFZ54(const Nan::FunctionCallbackInfo<v8::Value>& info);
  static void Registration(const Nan::FunctionCallbackInfo<v8::Value>& info);
  static void Discount(const Nan::FunctionCallbackInfo<v8::Value>& info);
  static void Payment(const Nan::FunctionCallbackInfo<v8::Value>& info);
  static void CloseCheck(const Nan::FunctionCallbackInfo<v8::Value>& info);
  static void CancelCheck(const Nan::FunctionCallbackInfo<v8::Value>& info);
  static Nan::Persistent<v8::Function> constructor;

  public:
    static void Init(v8::Local<v8::Object> exports);
};

#endif
