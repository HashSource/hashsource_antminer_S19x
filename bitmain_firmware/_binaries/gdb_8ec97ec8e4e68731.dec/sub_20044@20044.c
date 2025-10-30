int __fastcall sub_20044(_DWORD *a1, size_t n)
{
  int v4; // r6
  int v5; // r0
  _DWORD savedregs[6]; // [sp+0h] [bp-14h] BYREF

  memset(savedregs, 0, n);
  v4 = sub_230020(a1[2], savedregs, n);
  if ( v4 )
    return 1;
  v5 = ((int (__fastcall *)(_DWORD))loc_165C28)(*a1);
  a1[3] = sub_15C250(savedregs, n, v5);
  return v4;
}
