int __fastcall sub_A0E38(int a1, const char *a2)
{
  int v3; // r3
  const char *v4; // r4
  size_t v6; // r7
  size_t v7; // r8
  _DWORD savedregs[8]; // [sp+0h] [bp-1Ch] BYREF

  if ( !a1 )
    return 0;
  v3 = *(_DWORD *)(a1 + 24);
  v4 = *(const char **)(v3 + 8);
  if ( !v4 )
  {
    v4 = *(const char **)(v3 + 12);
    if ( !v4 )
      return 0;
  }
  v6 = strlen(v4);
  v7 = strlen(a2);
  memcpy(savedregs, v4, v6);
  memcpy((char *)savedregs + v6, a2, v7 + 1);
  return sub_A0D3C(a1, (char *)savedregs);
}
