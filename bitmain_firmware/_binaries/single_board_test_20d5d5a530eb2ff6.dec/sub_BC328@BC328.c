void __fastcall __noreturn sub_BC328(const char *a1, const char *a2, int a3)
{
  sub_BC2F4("%s:%d: OpenSSL internal error: %s\n", a2, a3, a1);
  abort();
}
