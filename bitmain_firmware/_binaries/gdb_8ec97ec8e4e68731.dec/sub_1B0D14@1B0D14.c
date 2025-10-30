int __fastcall sub_1B0D14(int a1, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  const char *v4; // r0
  const char *v5; // r1
  int v6; // r3
  bool v7; // zf

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a2 + 8);
  if ( v2 < v3 )
    return -1;
  if ( v2 > v3 )
    return 1;
  v4 = *(const char **)a1;
  v5 = *(const char **)a2;
  v6 = (int)v4;
  if ( v4 )
    v6 = 1;
  v7 = v5 == 0;
  if ( v5 )
    v7 = v4 == 0;
  if ( !v7 )
    return strcmp(v4, v5);
  if ( v5 )
    return 1;
  else
    return -v6;
}
