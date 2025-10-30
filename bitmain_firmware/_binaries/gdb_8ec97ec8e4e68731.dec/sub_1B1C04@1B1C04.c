int __fastcall sub_1B1C04(char *s, _DWORD *a2, _DWORD *a3)
{
  int v4; // r0
  int v5; // r2
  __int64 v7; // r0
  int v8[2]; // [sp+0h] [bp-8h] BYREF

  sub_1B141C(v8, s, 0, a3);
  v4 = v8[0];
  if ( !v8[0] )
    return v4 == 0;
  v5 = *(__int16 *)(v8[0] + 22);
  if ( v5 != -1 )
  {
    *a2 = *(_DWORD *)(*(_DWORD *)(v8[1] + 144) + 4 * v5) + *(_DWORD *)(v8[0] + 8);
    return v4 == 0;
  }
  v7 = sub_94700((int)"minsyms.c", 445, "Section index is uninitialized");
  return sub_1B1C7C(v7, HIDWORD(v7));
}
