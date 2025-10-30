int __fastcall sub_8EB88(int a1, int a2, int a3)
{
  int *v3; // r2
  int v4; // r2
  _BOOL4 v5; // r1
  int v6; // r4

  if ( a3 )
    return 1;
  v3 = *(int **)(a1 + 4);
  if ( (*(_DWORD *)(v3[25] + 48) & 8) != 0 )
    return 1;
  v4 = *v3;
  v5 = v4 >= 772;
  if ( v4 == 0x10000 )
    v5 = 0;
  if ( !v5 )
    return 1;
  v6 = *(_DWORD *)(a1 + 140);
  if ( v6 )
    return 1;
  sub_95494(a1, 109, 497, 112, "ssl/statem/extensions.c", 1291);
  return v6;
}
