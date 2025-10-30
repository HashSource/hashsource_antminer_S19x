_DWORD *__fastcall sub_6E2B0(const char *a1)
{
  _QWORD *v2; // r0
  _DWORD *v3; // r4
  void *v4; // r0
  void *v6; // r0

  if ( !a1 )
    return 0;
  v2 = sub_6D500((void *)0xC);
  v3 = v2;
  if ( !v2 )
    return 0;
  *v2 = 0x100000002LL;
  v4 = sub_6D530(a1);
  v3[2] = v4;
  if ( !v4 )
  {
    v6 = v3;
    v3 = 0;
    sub_6D518(v6);
  }
  return v3;
}
