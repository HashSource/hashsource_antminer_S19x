int __fastcall sub_26040(_DWORD *a1, _DWORD *a2)
{
  int v3; // r0
  char v6[8]; // [sp+14h] [bp-808h] BYREF
  const char *v7; // [sp+814h] [bp-8h]

  if ( !a2 || *a2 != 1 )
    return 0;
  v3 = sub_65E88(a2, 0);
  v7 = (const char *)sub_66AE0(v3);
  if ( !v7 )
    return 0;
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
  {
    snprintf(v6, 0x800u, "Pool %d message: %s", *a1, v7);
    sub_1DB6C(5, v6, 0);
  }
  return 1;
}
