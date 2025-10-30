int __fastcall sub_A8280(int a1)
{
  int v2; // r0
  int v3; // r3
  const char *v4; // r4
  size_t v5; // r5
  int v6; // r9
  int v7; // r0
  __int64 v8; // r0
  int v9; // r4
  int v11; // r0
  int v12; // r3
  char v13[4]; // [sp+0h] [bp-24h] BYREF
  int v14; // [sp+4h] [bp-20h] BYREF

  v2 = sub_A0870(a1);
  if ( !v2 || (v3 = *(_DWORD *)(v2 + 24), (v4 = *(const char **)(v3 + 8)) == 0) && (v4 = *(const char **)(v3 + 12)) == 0 )
  {
    v11 = sub_A0A60(a1);
    v4 = (const char *)v11;
    if ( !v11 )
      return (int)v4;
    v12 = *(_DWORD *)(v11 + 24);
    v4 = *(const char **)(v12 + 8);
    if ( !v4 )
    {
      v4 = *(const char **)(v12 + 12);
      if ( !v4 )
        return (int)v4;
    }
  }
  strlen(v4);
  v5 = sub_338BD4(v4, "___XP") - (_DWORD)v4;
  v6 = sub_A0A60(a1);
  memcpy(v13, v4, v5);
  v13[v5] = 0;
  v7 = sub_A0D3C(v6, v13);
  v4 = (const char *)v7;
  if ( !v7 )
  {
    sub_9B398((int)"could not find bounds information on packed array");
    return (int)v4;
  }
  v8 = sub_171258(v7);
  v9 = v8;
  if ( **(_BYTE **)(v8 + 24) == 2 )
  {
    v14 = ((int (__fastcall *)(int, _DWORD))loc_A12FC)(v6, HIDWORD(v8));
    return sub_A8108(v9, &v14);
  }
  sub_9B398((int)"could not understand bounds information on packed array", HIDWORD(v8));
  return 0;
}
