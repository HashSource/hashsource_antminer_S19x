void __fastcall sub_1A5708(char *a1, int a2)
{
  char *v4; // r0
  const void *v5; // r4
  char *v6; // r0
  _BYTE *v7; // r0
  int v8; // r3
  int v9; // r4
  int v10; // r2
  void *v11; // r0
  char v12; // r3
  int v13; // r1
  void *v14; // r0
  int v15; // [sp+4h] [bp-10h] BYREF
  int v16; // [sp+8h] [bp-Ch] BYREF
  int v17; // [sp+Ch] [bp-8h] BYREF

  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( a1 )
  {
    if ( !sub_54048((unsigned __int8 *)a1, &v15, &v16, &v17) )
    {
      sub_259F10("Can't find command '%s' to deprecate.\n", a1);
      return;
    }
    if ( a2 && (v4 = strchr(a1, 34)) != 0 && (v5 = v4 + 1, (v6 = strrchr(v4 + 1, 34)) != 0) )
    {
      v7 = sub_93330(v5, v6 - (_BYTE *)v5);
      v8 = v15;
      v9 = (int)v7;
      v10 = v15;
      if ( v15 )
      {
        if ( (*(_BYTE *)(v15 + 12) & 4) == 0 )
          goto LABEL_19;
LABEL_8:
        v11 = *(void **)(v8 + 36);
        if ( v11 )
        {
          free(v11);
          v10 = v15;
        }
        else
        {
          v10 = v8;
        }
        goto LABEL_11;
      }
      v13 = v17;
      v10 = v17;
      if ( v17 )
      {
        if ( (*(_BYTE *)(v17 + 12) & 4) == 0 )
          goto LABEL_19;
LABEL_22:
        v14 = *(void **)(v13 + 36);
        if ( v14 )
        {
          free(v14);
          v10 = v17;
        }
        else
        {
          v10 = v13;
        }
LABEL_11:
        if ( !a2 )
        {
          *(_BYTE *)(v10 + 12) &= 0xFCu;
LABEL_13:
          v12 = *(_BYTE *)(v10 + 12);
          *(_DWORD *)(v10 + 36) = v9;
          *(_BYTE *)(v10 + 12) = v12 | 4;
          return;
        }
LABEL_19:
        *(_BYTE *)(v10 + 12) |= 3u;
        goto LABEL_13;
      }
      if ( v7 )
        free(v7);
    }
    else
    {
      v8 = v15;
      v10 = v15;
      if ( v15 )
      {
        v9 = *(_BYTE *)(v15 + 12) & 4;
        if ( (*(_BYTE *)(v15 + 12) & 4) == 0 )
          goto LABEL_11;
        v9 = 0;
        goto LABEL_8;
      }
      v13 = v17;
      v10 = v17;
      if ( v17 )
      {
        v9 = *(_BYTE *)(v17 + 12) & 4;
        if ( (*(_BYTE *)(v17 + 12) & 4) == 0 )
          goto LABEL_11;
        v9 = v15;
        goto LABEL_22;
      }
    }
  }
}
