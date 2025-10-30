int __fastcall sub_2839A8(int a1, int a2)
{
  int v4; // r4
  const char *v5; // r0
  const char **v6; // r7
  int v7; // r6
  int v8; // r0
  const char *v9; // r6
  __int64 v11; // r0

  LOWORD(v4) = -21560;
  v5 = (const char *)sub_2972FC();
  if ( a1 )
  {
    v6 = 0;
    HIWORD(v4) = 72;
    while ( 1 )
    {
      v5 = (const char *)sub_283664(*(_BYTE **)(v4 + 12), a2 + *(_DWORD *)v4, a2);
      if ( v5 == (const char *)-1 )
        break;
      *(_DWORD *)v4 = v5;
      v7 = sub_2978A8(v5);
      v8 = sub_2978B8(*(_DWORD *)v4);
      v6 = (const char **)sub_297918(v8);
      sub_2978B8(v7);
      v5 = *(const char **)(v4 + 8);
      v9 = *v6;
      if ( v5 )
      {
        if ( *(unsigned __int8 *)v5 == *(unsigned __int8 *)v9 )
        {
          v5 = (const char *)strcmp(v5, *v6);
          if ( !v5 )
            continue;
        }
      }
      --a1;
      *(_DWORD *)(v4 + 8) = v9;
      if ( !a1 )
        break;
    }
    if ( v6 )
    {
      sub_2837A8((int)*v6);
      dword_4900D8 = *(_DWORD *)(v4 + 4);
      dword_4900D4 = dword_4900DC;
      return 0;
    }
  }
  else
  {
    HIWORD(v4) = 72;
  }
  v11 = sub_29728C(v5);
  sub_2945C8(v11, HIDWORD(v11));
  dword_4900D8 = *(_DWORD *)(v4 + 4);
  dword_4900D4 = dword_4900DC;
  return 1;
}
