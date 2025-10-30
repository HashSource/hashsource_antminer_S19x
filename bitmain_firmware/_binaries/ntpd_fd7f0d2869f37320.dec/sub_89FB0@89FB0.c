_DWORD *__fastcall sub_89FB0(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r4
  int v2; // r0
  int v3; // r3
  unsigned __int8 *v4; // r8
  int v5; // t1
  unsigned __int8 *v6; // r7
  int v7; // r5
  int v8; // r0
  unsigned __int8 *v9; // r6
  int v10; // r2
  int v11; // r3
  int v12; // t1
  int v13; // r3
  int v14; // t1
  _DWORD *v15; // r0
  _DWORD *v16; // r6
  int v17; // r3
  _BYTE *v18; // r5
  unsigned int v19; // r3
  int v20; // r0
  unsigned __int8 *v21; // r3
  int v22; // r2
  int v23; // t1
  int v24; // r3
  unsigned __int8 *v25; // r2
  int v26; // r2
  int v27; // r0
  unsigned int v28; // r1
  int *v29; // r0
  _DWORD *v30; // r2
  unsigned __int8 *v32; // [sp+4h] [bp-10h]
  char v33; // [sp+Bh] [bp-9h] BYREF

  v1 = a1;
  if ( !a1 )
    goto LABEL_81;
  v2 = dword_108358;
  if ( !dword_108358 )
    v2 = sub_7F738(12);
  v3 = *v1;
  v4 = v1;
  if ( *(_BYTE *)(v2 + v3) )
  {
    do
    {
      v5 = *++v4;
      v3 = v5;
    }
    while ( *(_BYTE *)(v2 + v5) );
  }
  if ( !v3 )
  {
LABEL_81:
    *_errno_location() = 2;
    return 0;
  }
  v6 = v4;
  v7 = 2;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = dword_108358;
      ++v7;
      v9 = v6 + 1;
      if ( dword_108358 )
        break;
      v8 = sub_7F738(12);
      if ( v6[1] )
      {
        v10 = dword_108358;
        if ( !*(_BYTE *)(v8 + v6[1]) )
          goto LABEL_14;
      }
      else
      {
        v10 = dword_108358;
      }
LABEL_15:
      if ( v10 )
        v8 = v10;
      else
        v8 = sub_7F738(12);
LABEL_17:
      if ( *(_BYTE *)(v8 + *v9) )
        goto LABEL_18;
      v6 = v9;
      if ( !*v9 )
        goto LABEL_21;
    }
    if ( v6[1] )
    {
      if ( *(_BYTE *)(dword_108358 + v6[1]) )
        goto LABEL_17;
      v10 = dword_108358;
      do
      {
LABEL_14:
        v12 = *++v9;
        v11 = v12;
      }
      while ( v12 && !*(_BYTE *)(v8 + v11) );
      goto LABEL_15;
    }
    if ( !*(_BYTE *)dword_108358 )
      break;
LABEL_18:
    v6 = v9;
    do
    {
      v14 = *++v6;
      v13 = v14;
    }
    while ( *(_BYTE *)(v8 + v14) );
    if ( !v13 )
      goto LABEL_21;
  }
  ++v6;
LABEL_21:
  v15 = sub_7FBE0(4 * v7 + 8 + v6 - v4);
  v16 = v15;
  if ( !v15 )
  {
    *_errno_location() = 12;
    return 0;
  }
  v17 = 0;
  v18 = &v15[v7];
  v15[1] = v18;
LABEL_23:
  *v16 = v17 + 1;
  v16[v17 + 1] = v18;
  v19 = *v1;
LABEL_24:
  while ( 2 )
  {
    if ( v19 > 0x7F )
      goto LABEL_26;
LABEL_25:
    if ( (dword_A0784[v19] & 0xC01) != 0 )
      goto LABEL_34;
LABEL_26:
    while ( v19 != 34 )
    {
      if ( v19 == 39 )
      {
        v24 = v1[1];
        v25 = v1 + 1;
        while ( 2 )
        {
          v1 = v25 + 1;
          if ( v24 == 39 )
          {
LABEL_44:
            if ( !v1 )
              goto LABEL_76;
            v19 = *v1;
            if ( v19 > 0x7F || (dword_A0784[v19] & 0xC01) == 0 )
              goto LABEL_24;
            v20 = dword_108358;
            v21 = v1 + 1;
            if ( !dword_108358 )
            {
LABEL_48:
              v32 = v21;
              v20 = sub_7F738(12);
              v21 = v32;
            }
LABEL_35:
            v22 = v1[1];
            v1 = v21;
            if ( *(_BYTE *)(v20 + v22) )
            {
              do
                v23 = *++v1;
              while ( *(_BYTE *)(v20 + v23) );
            }
LABEL_37:
            *v18++ = 0;
            if ( !*v1 )
            {
              v30 = v16;
              v16[*v16 + 1] = *v1;
              return v30;
            }
            v17 = *v16;
            goto LABEL_23;
          }
LABEL_41:
          if ( v24 == 92 )
          {
            v28 = v25[1];
            if ( v28 == 13 )
            {
              v24 = v25[2];
              if ( v24 == 10 )
              {
                v24 = v25[3];
                v25 += 3;
              }
              else
              {
                v25 += 2;
              }
              continue;
            }
            if ( v28 <= 0xD )
            {
              if ( !v25[1] )
                goto LABEL_76;
              if ( v28 == 10 )
              {
                v24 = v25[2];
                v25 += 2;
                continue;
              }
              break;
            }
            if ( v28 == 39 )
            {
              LOBYTE(v24) = 39;
            }
            else if ( v28 != 92 )
            {
              break;
            }
            v1 = v25 + 2;
          }
          else if ( !v24 )
          {
            goto LABEL_76;
          }
          break;
        }
        *v18 = v24;
        v25 = v1;
        v24 = *v1;
        ++v18;
        ++v1;
        if ( v24 == 39 )
          goto LABEL_44;
        goto LABEL_41;
      }
      if ( !v19 )
        goto LABEL_37;
      *v18 = v19;
      v19 = *++v1;
      ++v18;
      if ( v19 <= 0x7F )
        goto LABEL_25;
    }
    ++v1;
    while ( 1 )
    {
      v26 = *v1++;
      v33 = v26;
      if ( v26 == 34 )
        break;
      if ( v26 != 92 )
      {
        if ( !v26 )
          goto LABEL_76;
LABEL_53:
        *v18++ = v26;
        continue;
      }
      v27 = sub_83324((char *)v1, &v33, 127);
      LOBYTE(v26) = v33;
      v1 += v27;
      if ( v33 != 127 )
        goto LABEL_53;
    }
    if ( v1 )
    {
      v19 = *v1;
      if ( v19 <= 0x7F && (dword_A0784[v19] & 0xC01) != 0 )
      {
LABEL_34:
        v20 = dword_108358;
        v21 = v1 + 1;
        if ( !dword_108358 )
          goto LABEL_48;
        goto LABEL_35;
      }
      continue;
    }
    break;
  }
LABEL_76:
  free(v16);
  v29 = _errno_location();
  v30 = 0;
  *v29 = 22;
  return v30;
}
