int __fastcall sub_306F0(int a1, int a2)
{
  int v4; // r6
  int v5; // r4
  int v6; // r0
  int v7; // r5
  int result; // r0

  v4 = sub_1A1C0();
  if ( a2 )
  {
    v5 = sub_3014C(a1, (_DWORD *)(dword_1AEA20 + 4), *(_DWORD *)dword_1AEA20, 1);
    v6 = sub_16940();
    v7 = dword_1AEA20;
    result = *(_DWORD *)(v7
                       + 4
                       * (sub_3014C(v6, (_DWORD *)(dword_1AEA20 + 72), *(_DWORD *)(dword_1AEA20 + 68), 1) + 8 * v5 + 26));
    if ( result == v4 )
      return result;
    return sub_1A4F0(result);
  }
  result = sub_1A1B0();
  if ( result != v4 )
    return sub_1A4F0(result);
  return result;
}
