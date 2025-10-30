void __noreturn sub_649FC(int a1, int a2, int a3, int a4, int a5, int a6, int a7, void *ptr, ...)
{
  void *v8; // r0
  va_list va; // [sp+10h] [bp+10h] BYREF

  va_start(va, ptr);
  sub_256478((char *)va);
  v8 = ptr;
  if ( ptr )
    free(ptr);
  sub_338FFC(v8);
}
