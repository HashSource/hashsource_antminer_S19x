int sub_1C4D40(int a1, const char *a2, ...)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  va_list varg_r2; // [sp+10h] [bp+8h] BYREF

  va_start(varg_r2, a2);
  if ( stderr != a1 )
  {
    v2 = (_DWORD *)sub_242FB4(a1);
    a1 = sub_2594B0(*v2, " Unknown FILE used.\n");
  }
  v3 = (_DWORD *)sub_242FB4(a1);
  return sub_259344(*v3, a2, (char *)varg_r2);
}
