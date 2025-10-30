void *__fastcall sub_2AD188(int a1, unsigned int a2, unsigned int a3)
{
  _BOOL4 v3; // r3
  size_t v4; // r4
  void *v5; // r0
  void *v6; // r5

  v3 = (a2 | a3) >= 0x10000;
  if ( !a3 )
    v3 = 0;
  if ( !v3 || is_mul_ok(a2, a3) )
  {
    v4 = a3 * a2;
    v5 = (void *)sub_2ACBF4(a1, a3 * a2);
    v6 = v5;
    if ( v5 )
      memset(v5, 0, v4);
  }
  else
  {
    v6 = 0;
    ((void (__fastcall *)(int))loc_2A6C48)(6);
  }
  return v6;
}
