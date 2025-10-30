int __fastcall sub_C3368(unsigned int a1)
{
  int *v2; // r0
  int v3; // r0
  int v4; // r4
  int v6; // r2
  __int64 v7; // r0
  _DWORD v8[2]; // [sp+0h] [bp-8h] BYREF

  v2 = sub_C2574(a1);
  if ( v2 )
  {
    v3 = sub_C23B0((int)v2);
    if ( v3 )
      return **(_DWORD **)(v3 + 8);
  }
  sub_1B240C(v8, a1);
  if ( !v8[0] )
    return 0;
  v6 = *(__int16 *)(v8[0] + 22);
  if ( v6 != -1 )
  {
    v4 = *(_DWORD *)(v8[0] + 8) + *(_DWORD *)(*(_DWORD *)(v8[1] + 144) + 4 * v6);
    if ( ((int (__fastcall *)(int))loc_1B7C78)(v4) )
      return v4;
    return 0;
  }
  v7 = sub_94700((int)"blockframe.c", 106, "Section index is uninitialized");
  return sub_C3410(v7, HIDWORD(v7));
}
