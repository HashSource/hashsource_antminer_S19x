int sub_278E00()
{
  int (__fastcall *v0)(_DWORD); // r3
  int (__fastcall *v2)(_DWORD); // r0
  void *v3; // [sp+4h] [bp-4h] BYREF

  v0 = (int (__fastcall *)(_DWORD))off_48AA64;
  if ( !off_48AA64 )
  {
    sub_1634C0(&v3, "libcc1.so");
    v2 = (int (__fastcall *)(_DWORD))sub_163504(&v3, "gcc_c_fe_context");
    v0 = v2;
    if ( !v2 )
      sub_946E0("could not find symbol %s in library %s", "gcc_c_fe_context", "libcc1.so");
    off_48AA64 = v2;
  }
  if ( !v0(0) )
    sub_946E0("The loaded version of GCC does not support the required version of the API.");
  return sub_27AF10();
}
