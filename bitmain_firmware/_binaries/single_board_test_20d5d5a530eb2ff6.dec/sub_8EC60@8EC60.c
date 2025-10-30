int __fastcall sub_8EC60(_DWORD *a1)
{
  int v1; // r4
  _BYTE *v2; // r1
  int v3; // r7
  int v4; // r3
  int v5; // r2
  int v6; // r3
  unsigned __int8 *v7; // r3
  int v9; // r5

  v1 = a1[7];
  if ( v1 )
    return 1;
  if ( !a1[345] )
    return 1;
  if ( !a1[344] )
    return 1;
  v2 = (_BYTE *)a1[347];
  if ( !v2 )
    return 1;
  v3 = a1[346];
  if ( !v3 )
    return 1;
  v4 = *(_DWORD *)(a1[31] + 528);
  v5 = *(_DWORD *)(v4 + 16);
  v6 = *(_DWORD *)(v4 + 20);
  if ( (v5 & 4) == 0 && (v6 & 8) == 0 )
    return 1;
  v7 = v2 + 1;
  if ( !*v2 )
    return 1;
  do
  {
    v9 = v7 - v2;
    if ( &v2[v3] == v7 )
      break;
  }
  while ( *v7++ );
  if ( v9 != v3 )
    return 1;
  sub_95494(a1, 47, 485, 157, "ssl/statem/extensions.c", 1070);
  return v1;
}
