int __fastcall sub_FF3C8(int a1, int a2, int (__fastcall *a3)(_DWORD, int), int a4)
{
  size_t v6; // r6
  char *v7; // r4
  const char *v8; // t1
  int v9; // r3
  void *v11; // r4
  int v12; // r6
  int v13; // r4
  const char *v14; // r0
  int v15; // r0
  int v16; // r7
  int v17; // r6
  const char **v18; // r9
  int i; // r1
  int v20; // r3
  int v21; // [sp+8h] [bp-64h] BYREF
  int v22; // [sp+Ch] [bp-60h]
  _DWORD v23[3]; // [sp+2Ch] [bp-40h] BYREF
  char v24; // [sp+38h] [bp-34h] BYREF

  v6 = *(_DWORD *)(a2 + 12);
  v22 = a4;
  v21 = a1;
  v7 = (char *)off_39935C;
  memcpy(&v21, *(const void **)(a2 + 8), v6);
  *((_BYTE *)&v21 + v6) = 0;
  if ( !strcmp((const char *)&v21, "std::istream") )
    return 0;
  while ( "unsigned int cp_entire_prefix_len(const char*)" != v7 )
  {
    v8 = *(const char **)v7;
    v7 += 4;
    if ( !strcmp((const char *)&v21, v8) )
      return 0;
  }
  v11 = sub_92E28();
  sub_21D6B0(v23, &v21, 0, 1, 0);
  v12 = v23[0];
  sub_92E40((int)v11);
  if ( !v12 )
    return 0;
  v13 = *(_DWORD *)(v12 + 24);
  if ( !a3 )
  {
    if ( (unsigned int)**(unsigned __int8 **)(v13 + 24) - 23 <= 1 )
    {
      v15 = sub_171258(*(_DWORD *)(v12 + 24));
      v16 = *(_DWORD *)(v13 + 24);
      v17 = v15;
      v18 = *(const char ***)(v15 + 24);
      if ( *(_BYTE *)v16 == 24 )
      {
        v9 = strcmp(v18[2], (const char *)&v21);
        if ( !v9 )
          return v9;
      }
      if ( !v18[3] && (unsigned int)*(unsigned __int8 *)v18 - 3 <= 2 )
      {
        for ( i = v13; ; i = v20 )
        {
          v20 = *(_DWORD *)(v16 + 20);
          if ( !v20 )
            break;
          v16 = *(_DWORD *)(v20 + 24);
          if ( *(_BYTE *)v16 != 23 )
            break;
        }
        if ( v13 == v17 )
          return 0;
        v17 = i;
      }
      sub_256760(v23);
      v23[1] = &v24;
      v23[2] = 0;
      v23[0] = &off_3F2924;
      v24 = 0;
      sub_92E28();
      sub_255DB0(v17, "", v23, -1);
    }
    return 0;
  }
  v14 = (const char *)a3(*(_DWORD *)(v12 + 24), v22);
  if ( !v14 )
    return 0;
  *(_DWORD *)(a2 + 8) = v14;
  *(_DWORD *)(a2 + 12) = strlen(v14);
  return 1;
}
