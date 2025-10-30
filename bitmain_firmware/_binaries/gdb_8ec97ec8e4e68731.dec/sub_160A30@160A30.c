int __fastcall sub_160A30(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  int v4; // r4
  _DWORD *v5; // r6
  int result; // r0

  v2 = sub_15ECB4(a1);
  v3 = (_DWORD *)((int (__fastcall *)(int, int))loc_16EC88)(v2, dword_487764);
  v4 = *v3;
  v5 = v3;
  if ( !*v3 )
    return v5[2];
  while ( 1 )
  {
    result = (*(int (__fastcall **)(int))v4)(a1);
    if ( result )
      break;
    v4 = *(_DWORD *)(v4 + 4);
    if ( !v4 )
      return v5[2];
  }
  return result;
}
