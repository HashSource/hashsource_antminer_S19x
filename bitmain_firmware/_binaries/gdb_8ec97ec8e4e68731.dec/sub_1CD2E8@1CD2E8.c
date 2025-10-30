int __fastcall sub_1CD2E8(int a1, int a2)
{
  int v4; // r5
  const char *v5; // r0
  int v6; // r0
  int v7; // r0

  v4 = dword_487D2C;
  ((void (*)(void))loc_1CD290)();
  v5 = *(const char **)(a2 + 16);
  if ( v5 )
    sub_94D50(v5, 0);
  v6 = *(_DWORD *)(a2 + 32);
  if ( v6 )
  {
    v7 = sub_1B87A8(v6);
    sub_213958(v7, 0);
  }
  ((void (__fastcall *)(int))loc_1CD290)(v4);
  return a1;
}
