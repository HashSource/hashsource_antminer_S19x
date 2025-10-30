int __fastcall sub_86258(int *a1, int *a2, int *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, int a7)
{
  int v7; // r5
  int v12; // r0
  int v13; // r3
  int v14; // r0
  _BOOL4 v15; // r1
  _BOOL4 v16; // r3
  int v17; // r1
  int v18; // r3
  int v19; // r0
  int v21; // r0
  int v22; // r3
  int v23; // r1
  int v24; // r3
  int v26; // r3
  int v27; // r3
  int v28; // r0
  int v29; // r3
  int v30; // r3
  int v31[3]; // [sp+4h] [bp-Ch] BYREF

  v7 = a1[110];
  if ( !v7 )
    return 0;
  if ( a6 )
  {
    sub_10C594(&unk_6DF344, sub_855F4);
    v12 = dword_6DF278[0];
    v13 = a1[109];
    *a6 = 0;
    v31[0] = v13;
    if ( v12 )
    {
      v14 = sub_10BC4C(v12, v31);
      *a6 = sub_10C01C(dword_6DF278[0], v14);
    }
    v15 = a2 == 0;
    v16 = a3 == 0;
    if ( !v15 || !v16 )
    {
      v17 = v15 || v16;
      if ( !v17 )
        goto LABEL_7;
      return 0;
    }
    return 1;
  }
  v17 = a2 == 0 || a3 == 0;
  if ( v17 )
    return 0;
LABEL_7:
  while ( *(_DWORD *)(v7 + 24) != dword_1A9064[2 * v17] )
  {
    if ( ++v17 == 22 )
    {
      *a2 = 0;
      goto LABEL_10;
    }
  }
  if ( v17 == 5 )
    *a2 = sub_D6FA0();
  else
    *a2 = dword_6DF278[v17 + 2];
LABEL_10:
  v18 = *(_DWORD *)(v7 + 28);
  switch ( v18 )
  {
    case 1:
      v23 = 0;
      goto LABEL_37;
    case 2:
      v23 = 1;
      goto LABEL_37;
    case 4:
      v23 = 2;
      goto LABEL_37;
    case 8:
      v23 = 3;
      goto LABEL_37;
    case 16:
      v23 = 4;
      goto LABEL_37;
    case 32:
      v23 = 5;
      goto LABEL_37;
    case 128:
      v23 = 6;
      goto LABEL_37;
    case 256:
      v23 = 7;
      goto LABEL_37;
    case 512:
      v23 = 8;
      goto LABEL_37;
    case 0:
      v23 = 9;
LABEL_37:
      v24 = dword_6DF278[v23 + 25];
      *a3 = v24;
      if ( a4 )
        *a4 = dword_21F570[v23];
      if ( a5 )
        *a5 = dword_6DF278[v23 + 37];
      v19 = *a2;
      if ( !*a2 )
        return 0;
      if ( v24 )
        goto LABEL_44;
      goto LABEL_43;
  }
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v19 = *a2;
  if ( *(_DWORD *)(v7 + 28) == 64 )
    a4 = 0;
  if ( !v19 )
    return 0;
LABEL_43:
  if ( (sub_D8928(v19) & 0x200000) == 0 )
    return 0;
LABEL_44:
  if ( a4 && !*a4 )
    return 0;
  if ( a7 )
    return 1;
  if ( *a1 >> 8 != 3 || *a1 == 768 )
    return 1;
  v26 = *(_DWORD *)(v7 + 24);
  if ( v26 != 4 )
  {
LABEL_52:
    if ( v26 == 64 )
    {
      v29 = *(_DWORD *)(v7 + 28);
      if ( v29 != 2 )
        goto LABEL_72;
      v21 = sub_D99BC("AES-128-CBC-HMAC-SHA1");
      if ( v21 )
        goto LABEL_57;
      v22 = *(_DWORD *)(v7 + 24);
      if ( v22 != 128 )
      {
        if ( v22 != 64 )
          return 1;
LABEL_79:
        v29 = *(_DWORD *)(v7 + 28);
LABEL_72:
        if ( v29 != 16 )
          return 1;
        v21 = sub_D99BC("AES-128-CBC-HMAC-SHA256");
        if ( !v21 )
        {
          v30 = *(_DWORD *)(v7 + 24);
LABEL_75:
          if ( v30 != 128 )
            return 1;
          v27 = *(_DWORD *)(v7 + 28);
          goto LABEL_55;
        }
LABEL_57:
        *a2 = v21;
        *a3 = 0;
        return 1;
      }
    }
    else if ( v26 != 128 )
    {
      return 1;
    }
    v27 = *(_DWORD *)(v7 + 28);
    if ( v27 != 2 )
    {
LABEL_55:
      if ( v27 == 16 )
      {
        v21 = sub_D99BC("AES-256-CBC-HMAC-SHA256");
        if ( v21 )
          goto LABEL_57;
      }
      return 1;
    }
    v21 = sub_D99BC("AES-256-CBC-HMAC-SHA1");
    if ( v21 )
      goto LABEL_57;
    v30 = *(_DWORD *)(v7 + 24);
    if ( v30 != 64 )
      goto LABEL_75;
    goto LABEL_79;
  }
  if ( *(_DWORD *)(v7 + 28) != 1 )
    return 1;
  v28 = sub_D99BC("RC4-HMAC-MD5");
  if ( !v28 )
  {
    v26 = *(_DWORD *)(v7 + 24);
    goto LABEL_52;
  }
  *a2 = v28;
  *a3 = 0;
  return 1;
}
