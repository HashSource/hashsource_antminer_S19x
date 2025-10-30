int __fastcall sub_31368(_BYTE *a1)
{
  unsigned int v2; // r0
  int v3; // r6
  int v4; // r8
  int result; // r0
  int v6; // r6
  int v7; // r0

  v2 = sub_312D8();
  v3 = dword_1AEA20;
  v4 = sub_3014C(v2, (_DWORD *)(dword_1AEA20 + 4), *(_DWORD *)dword_1AEA20, 0);
  result = sub_3014C(dword_241D20, (_DWORD *)(v3 + 72), *(_DWORD *)(v3 + 68), 1);
  *a1 = 0;
  if ( dword_241D20 <= 20 )
  {
    v6 = result + 8 * v4 + 26;
    v7 = sub_1A1B0() + 100;
    if ( v7 >= *(_DWORD *)(dword_1AEA20 + 4 * v6) )
      v7 = *(_DWORD *)(dword_1AEA20 + 4 * v6);
    result = sub_1A150(v7);
    *a1 = 1;
  }
  return result;
}
