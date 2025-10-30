int __fastcall sub_2DD4F0(int a1, _DWORD *a2)
{
  int v3; // r4
  size_t v4; // r1
  void *v5; // r0
  int v7; // r0
  void *v8; // r0

  v3 = *a2;
  v4 = a2[1] * *(_DWORD *)(*a2 + 40);
  *(_DWORD *)(v3 + 24) = v4;
  v5 = sub_2AD09C(a1, v4);
  *(_DWORD *)(v3 + 48) = v5;
  if ( !v5 && *(_DWORD *)(v3 + 24) )
    return 0;
  if ( a2[3] )
    return 1;
  v7 = a2[1];
  if ( !v7 )
    return 1;
  v8 = sub_2AB4EC(4 * v7);
  if ( !v8 )
    return 0;
  a2[3] = v8;
  return 1;
}
