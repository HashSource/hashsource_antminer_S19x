const char **__fastcall sub_2EEE08(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  char *v10; // r0
  const char *v11; // r8
  const char **v12; // r4
  const char *v13; // r2
  int v14; // r0
  int v15; // r2

  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 140) + 112);
  if ( v5 )
    return (const char **)v5;
  v10 = sub_2DF24C(a4, *(const char **)a1, a5);
  v11 = v10;
  if ( !v10 )
    return (const char **)v5;
  v12 = sub_2AD864(a2, v10);
  if ( !v12 )
  {
    v13 = (_BYTE *)&loc_104108;
    if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
      v13 = (_BYTE *)(&loc_104108 + 3);
    v14 = sub_2ADB48(a2, v11, v13);
    v12 = (const char **)v14;
    if ( v14 )
    {
      if ( a5 )
        v15 = 4;
      else
        v15 = 9;
      *(_DWORD *)(*(_DWORD *)(v14 + 140) + 4) = v15;
      *(_DWORD *)(v14 + 64) = a3;
    }
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 140) + 112) = v12;
  return v12;
}
