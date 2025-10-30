int __fastcall sub_25D92C(int a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r5
  _DWORD *v6; // r0
  int v7; // r0
  int v8; // r1
  char *v9; // r2
  int v10; // r4
  int v11; // r3
  bool v12; // zf
  bool v13; // zf
  size_t v14; // r7
  size_t v15; // r10
  _BYTE *v16; // r8
  const void *v17; // r0
  const void *v18; // r0
  int v19; // r4
  bool v21; // zf
  __int64 v22; // r0
  int v23; // r0
  size_t v24; // r8
  int v25; // r9
  size_t v26; // r11
  char *v27; // r10
  int v28; // r3
  char *v29; // r7
  int i; // r5
  const void *v31; // r0
  bool v32; // zf
  int v33; // r0
  int v34; // r0
  int v35; // r0
  char v36; // r0
  char *v37; // r3
  char *v38; // r9
  int c; // [sp+4h] [bp-8h]

  v4 = (_DWORD *)sub_26BC70(a1);
  v5 = sub_171258(v4);
  v6 = (_DWORD *)sub_26BC70(a2);
  v7 = sub_171258(v6);
  v8 = **(char **)(v7 + 24);
  if ( v8 == 8 )
  {
    v11 = **(char **)(v5 + 24);
    if ( v11 != 8 )
    {
      v32 = v11 == 20;
      if ( v11 != 20 )
        v32 = v11 == 13;
      if ( !v32 )
      {
LABEL_41:
        if ( v11 == 21 )
        {
          if ( v8 != 21 )
            sub_946E0("Booleans can only be concatenated with other bitstrings or booleans.");
          sub_946E0("unimplemented support for boolean concatenation.");
        }
        sub_946E0("illegal operands for concatenation.");
      }
LABEL_55:
      sub_946E0("Strings can only be concatenated with other strings.", v8);
    }
    goto LABEL_49;
  }
  v9 = *(char **)(v5 + 24);
  v10 = v7;
  v11 = *v9;
  if ( v11 == 8 )
  {
    v21 = v8 == 20;
    if ( v8 != 20 )
      v21 = v8 == 13;
    if ( v21 )
    {
      v22 = sub_26EB1C(a1);
      v23 = sub_26725C(v22, HIDWORD(v22));
      v24 = *(_DWORD *)(v10 + 20);
      v25 = v23;
      v26 = v23 * v24;
      if ( v23 * v24 )
      {
        v27 = (char *)sub_9836C(v23 * v24);
        memset(v27, 0, v26);
      }
      else
      {
        v27 = 0;
      }
      v28 = *(_DWORD *)(v10 + 24);
      if ( *(_BYTE *)v28 == 20 )
      {
        v35 = sub_26E978(a2);
        v36 = sub_26D134(v10, v35);
        if ( v25 > 0 )
        {
          v37 = v27 - 1;
          v38 = &v27[v25 - 1];
          do
            *++v37 = v36;
          while ( v38 != v37 );
        }
      }
      else
      {
        v10 = *(_DWORD *)(v28 + 20);
        if ( v25 > 0 )
        {
          v29 = v27;
          for ( i = 0; i != v25; ++i )
          {
            v31 = (const void *)sub_26E978(a2);
            memcpy(v29, v31, v24);
            v29 += v24;
          }
        }
      }
      v19 = sub_262454(v27, v26, v10);
      if ( v27 )
        sub_339E64(v27);
      return v19;
    }
    if ( v8 == 21 )
      sub_946E0("unimplemented support for boolean repeats");
LABEL_49:
    sub_946E0("can't repeat values of that type");
  }
  v12 = v11 == 13;
  if ( v11 != 13 )
    v12 = v11 == 20;
  if ( !v12 )
    goto LABEL_41;
  v13 = v8 == 13;
  if ( v8 != 13 )
    v13 = v8 == 20;
  v8 = !v13;
  if ( !v13 )
    goto LABEL_55;
  v14 = *(_DWORD *)(v5 + 20);
  v15 = *(_DWORD *)(v7 + 20);
  if ( v14 + v15 )
  {
    c = v8;
    v16 = sub_9836C(v14 + v15);
    memset(v16, c, v14 + v15);
    v9 = *(char **)(v5 + 24);
  }
  else
  {
    v16 = 0;
  }
  if ( *v9 == 20 )
  {
    v34 = sub_26E978(a1);
    *v16 = sub_26D134(v5, v34);
  }
  else
  {
    v5 = *((_DWORD *)v9 + 5);
    v17 = (const void *)sub_26E978(a1);
    memcpy(v16, v17, v14);
  }
  if ( **(_BYTE **)(v10 + 24) == 20 )
  {
    v33 = sub_26E978(a2);
    v16[v14] = sub_26D134(v10, v33);
  }
  else
  {
    v18 = (const void *)sub_26E978(a2);
    memcpy(&v16[v14], v18, v15);
  }
  v19 = sub_262454(v16, v14 + v15, v5);
  if ( v16 )
    sub_339E64(v16);
  return v19;
}
