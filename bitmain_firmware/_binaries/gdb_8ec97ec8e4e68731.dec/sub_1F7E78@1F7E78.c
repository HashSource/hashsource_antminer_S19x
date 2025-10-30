int __fastcall sub_1F7E78(int a1)
{
  _DWORD *v2; // r0
  int v3; // r0
  int v4; // r4
  int v5; // r8
  int v6; // r7
  int v7; // r5
  const char *v8; // r0
  bool v9; // r3

  v2 = sub_1DDBBC();
  v3 = sub_1DD58C((int)v2);
  v4 = dword_489360;
  if ( dword_489360 )
  {
    v5 = v3;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(v4 + 4);
        if ( a1 == -1 || a1 == v7 )
          break;
        v4 = *(_DWORD *)v4;
        if ( !v4 )
          goto LABEL_7;
      }
      ++v6;
      v8 = (const char *)sub_25AC8C(v5, *(_DWORD *)(v4 + 8));
      sub_259F10("   %d       %s    '%s'\n", v7, v8, *(const char **)(v4 + 52));
      v4 = *(_DWORD *)v4;
    }
    while ( v4 );
LABEL_7:
    v9 = v6 == 0;
  }
  else
  {
    v6 = 0;
    v9 = 1;
  }
  if ( a1 > 0 && v9 )
    sub_259F10("No bookmark #%d\n", a1);
  return v6;
}
