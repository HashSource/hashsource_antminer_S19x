int __fastcall sub_2B369C(int a1, int a2, int a3, int a4, const char *a5, const char *a6, const void *a7)
{
  int v12; // r10
  char s[184]; // [sp+14h] [bp-98h] BYREF
  int varg_r3; // [sp+CCh] [bp+20h]

  varg_r3 = a4;
  if ( a4 == 1 )
  {
    v12 = 148;
    memset(s, 0, 0x94u);
    (*(void (__fastcall **)(const char *, char *))(*(_DWORD *)(a1 + 4) + 48))(a5, &s[24]);
    (*(void (__fastcall **)(const char *, char *))(*(_DWORD *)(a1 + 4) + 60))(a6, &s[12]);
    memcpy(&s[72], a7, 0x48u);
  }
  else
  {
    if ( a4 != 3 )
      return 0;
    v12 = 124;
    memset(s, 0, 0x7Cu);
    strncpy(&s[28], a5, 0x10u);
    strncpy(&s[44], a6, 0x50u);
  }
  return sub_2DA3B0(a1, a2, a3, (int)"CORE", a4, s, v12);
}
