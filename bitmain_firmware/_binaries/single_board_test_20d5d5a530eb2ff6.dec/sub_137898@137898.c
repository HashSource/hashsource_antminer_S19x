int __fastcall sub_137898(_DWORD *a1, int a2)
{
  int v3; // r0
  int v4; // r3
  int (__fastcall *v5)(int, int, int, _DWORD *); // r5
  int v6; // r0
  int v8; // r0
  int v9; // [sp+Ch] [bp-8h]

  if ( *a1 )
  {
    if ( *a1 != 1 )
      return 0;
    v9 = a2;
    v8 = *(_DWORD *)(a1[1] + 20);
    if ( !v8 )
      return 0;
    v3 = sub_DB988(v8);
    a2 = v9;
    if ( !v3 )
      return 0;
  }
  else
  {
    v3 = *(_DWORD *)(a1[1] + 20);
  }
  v4 = *(_DWORD *)(v3 + 12);
  if ( !v4 )
    return 1;
  v5 = *(int (__fastcall **)(int, int, int, _DWORD *))(v4 + 92);
  if ( !v5 )
    return 1;
  v6 = v5(v3, 7, a2, a1);
  if ( v6 != -2 )
  {
    if ( v6 > 0 )
      return 1;
    sub_D0048(46, 171, 111, (int)"crypto/cms/cms_env.c", 75);
    return 0;
  }
  sub_D0048(46, 171, 125, (int)"crypto/cms/cms_env.c", 71);
  return 0;
}
