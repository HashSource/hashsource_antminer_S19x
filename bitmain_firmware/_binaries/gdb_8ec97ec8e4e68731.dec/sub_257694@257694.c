int sub_257694(_DWORD *a1, int a2, const char *a3, ...)
{
  int v7; // [sp+14h] [bp-Ch] BYREF
  int v8; // [sp+18h] [bp-8h] BYREF
  int v9; // [sp+1Ch] [bp-4h] BYREF
  va_list varg_r3; // [sp+34h] [bp+14h] BYREF

  va_start(varg_r3, a3);
  sub_257414(a1, &v7, &v8, &v9);
  return (*(int (__fastcall **)(_DWORD *, int, int, int, int, const char *, char *))(*a1 + 44))(
           a1,
           v7,
           v8,
           v9,
           a2,
           a3,
           (char *)varg_r3);
}
