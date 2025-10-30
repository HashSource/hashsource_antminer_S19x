bool __fastcall sub_4D208(int a1, int a2)
{
  const char **v3; // r0
  const char **v4; // r4
  void *v5; // r5
  _QWORD v7[13]; // [sp+0h] [bp-6Ch] BYREF

  v3 = (const char **)((int (__fastcall *)(int))loc_4C680)(a2);
  v4 = v3;
  if ( !v3 )
    return 1;
  v5 = sub_4C614(v3, a1);
  if ( _xstat64(3, v5, v7) )
    sub_258B04(v5);
  return v7[12] == *((_QWORD *)v4 + 2);
}
