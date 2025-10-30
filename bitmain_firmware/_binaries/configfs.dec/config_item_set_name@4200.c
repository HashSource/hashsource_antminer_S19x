__int64 config_item_set_name(
        char *a1,
        const char *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        ...)
{
  __int64 *v12; // x21
  int v13; // w0
  int v14; // w19
  char *v15; // x0
  char *v16; // x25
  const char *v17; // x2
  char *v18; // x22
  __int64 result; // x0
  __int64 *v20; // x0
  bool v21; // zf
  gcc_va_list arg; // [xsp+50h] [xbp+50h] BYREF
  gcc_va_list va1; // [xsp+70h] [xbp+70h] BYREF
  __int64 vars0; // [xsp+90h] [xbp+90h]
  __int64 vars8; // [xsp+98h] [xbp+98h]
  __int64 vars10; // [xsp+A0h] [xbp+A0h]
  __int64 vars18; // [xsp+A8h] [xbp+A8h]
  __int64 vars20; // [xsp+B0h] [xbp+B0h]
  __int64 vars28; // [xsp+B8h] [xbp+B8h]

  va_start(arg, a10);
  vars0 = va_arg(arg, _QWORD);
  vars8 = va_arg(arg, _QWORD);
  vars10 = va_arg(arg, _QWORD);
  vars18 = va_arg(arg, _QWORD);
  vars20 = va_arg(arg, _QWORD);
  vars28 = va_arg(arg, _QWORD);
  va_end(arg);
  va_start(arg, a10);
  va_start(va1, a10);
  v12 = (__int64 *)(a1 + 8);
  v13 = vsnprintf(a1 + 8, 0x14u, a2, arg);
  if ( v13 <= 19 )
  {
    v18 = a1 + 8;
  }
  else
  {
    v14 = v13 + 1;
    v15 = (char *)_kmalloc(v13 + 1, 37748928);
    v16 = v15;
    if ( !v15 )
      return 4294967284LL;
    va_end(va1);
    va_start(va1, a10);
    v17 = a2;
    va_end(arg);
    va_start(arg, a10);
    v18 = v15;
    if ( v14 <= vsnprintf(v15, v14, v17, arg) )
    {
      kfree(v16);
      return 4294967282LL;
    }
  }
  v20 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
    v21 = v12 == v20;
  else
    v21 = 1;
  if ( !v21 )
    kfree(v20);
  result = 0;
  *(_QWORD *)a1 = v18;
  return result;
}
