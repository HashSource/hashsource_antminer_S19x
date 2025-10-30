void *__fastcall sub_1E820(int a1, _DWORD *a2)
{
  unsigned __int8 *v2; // r6
  unsigned int v3; // r8
  int i; // r7
  unsigned __int8 *v6; // r4
  int v7; // r11
  const unsigned __int16 *v8; // r0
  unsigned int v10; // r1
  unsigned __int8 *v11; // r2
  unsigned __int8 *v12; // r9
  int v13; // t1
  int v14; // r7
  unsigned int v15; // r4
  unsigned __int8 *v16; // r1
  unsigned __int8 *v17; // r3
  unsigned __int8 *v18; // r12
  int v19; // r2
  int v20; // r4
  unsigned __int8 *v21; // r12
  __int16 v22; // r3
  _BYTE *v23; // r1
  int v24; // r3
  unsigned __int8 *v25; // r2
  int v26; // t1
  int v27; // t1
  bool v28; // zf
  const char *v29; // r0

  v2 = (unsigned __int8 *)dword_B9408;
  v3 = dword_B940C;
  if ( dword_B940C <= (unsigned int)dword_B9408 )
    return 0;
  for ( i = 0; ; i = 1 )
  {
    v6 = v2 + 1;
    v7 = *v2;
    if ( v7 != 44 )
    {
      v8 = *_ctype_b_loc();
      if ( (v8[v7] & 0x2000) == 0 )
        break;
    }
    ++v2;
    if ( (unsigned __int8 *)v3 == v6 )
    {
      dword_B9408 = v3;
      return 0;
    }
  }
  if ( i )
    dword_B9408 = (int)v2;
  if ( v3 <= (unsigned int)v2 )
    return 0;
  v10 = v3 - 1;
  v11 = v2;
  v12 = 0;
  while ( 1 )
  {
    v14 = (int)v11;
    if ( v7 != 61 )
      break;
    if ( !v12 )
      v12 = v11;
    if ( (unsigned __int8 *)v10 == v11 )
      goto LABEL_20;
LABEL_15:
    v13 = *++v11;
    v7 = v13;
  }
  if ( v7 == 44 )
    goto LABEL_21;
  if ( (unsigned __int8 *)v10 != v11 )
    goto LABEL_15;
LABEL_20:
  v14 = v3;
LABEL_21:
  v15 = 0;
  *a2 = 0;
  if ( !v12 )
  {
    v12 = (unsigned __int8 *)v14;
    if ( a1 )
      goto LABEL_32;
    return &unk_93B9C;
  }
  v16 = v12 + 1;
  if ( v12 + 1 == (unsigned __int8 *)v14 )
    goto LABEL_31;
  v17 = v12 + 1;
  while ( 1 )
  {
    v16 = v17;
    v18 = v17 + 1;
    v19 = *v17;
    v15 = v8[v19] & 0x2000;
    if ( (v8[v19] & 0x2000) == 0 )
      break;
    ++v17;
    if ( (unsigned __int8 *)v14 == v18 )
    {
      v16 = (unsigned __int8 *)v14;
LABEL_52:
      v15 = 0;
LABEL_31:
      _memcpy_chk(&unk_B9410, v16);
      *((_BYTE *)&dword_B93F4 + v15 + 28) = 0;
      *a2 = &unk_B9410;
      if ( a1 )
      {
LABEL_32:
        v22 = *(_WORD *)(a1 + 2);
        if ( (v22 & 0x80) != 0 )
        {
LABEL_50:
          *a2 = 0;
          return (void *)a1;
        }
        while ( 2 )
        {
          if ( (v22 & 0x40) == 0 )
          {
            v23 = *(_BYTE **)(a1 + 4);
            v24 = (unsigned __int8)*v23;
            if ( v2 == v12 )
            {
LABEL_43:
              v28 = v24 == 61;
              if ( v24 != 61 )
                v28 = v24 == 0;
              if ( v28 )
              {
                if ( v3 != v14 )
                  ++v14;
                dword_B9408 = v14;
                return (void *)a1;
              }
            }
            else if ( *v23 && *v2 == v24 )
            {
              v25 = v2;
              while ( 1 )
              {
                v27 = (unsigned __int8)*++v23;
                v24 = v27;
                if ( v12 - 1 == v25 )
                  goto LABEL_43;
                if ( v24 )
                {
                  v26 = *++v25;
                  if ( v26 == v24 )
                    continue;
                }
                break;
              }
            }
          }
          a1 += 8;
          v22 = *(_WORD *)(a1 + 2);
          if ( (v22 & 0x80) != 0 )
            goto LABEL_50;
          continue;
        }
      }
      return &unk_93B9C;
    }
  }
  if ( v17 == (unsigned __int8 *)v14 )
    goto LABEL_31;
  v20 = v14;
  while ( 1 )
  {
    v21 = (unsigned __int8 *)(v20 - 1);
    if ( (v8[*(unsigned __int8 *)(v20 - 1)] & 0x2000) == 0 )
      break;
    --v20;
    if ( v21 == v17 )
      goto LABEL_52;
  }
  v15 = v20 - (_DWORD)v17;
  if ( v15 <= 0x7F )
    goto LABEL_31;
  ++numctlbadpkts;
  if ( (ntp_syslogmask & 2) != 0 && dword_B9490 <= (unsigned int)current_time )
  {
    dword_B9490 = current_time + 300;
    v29 = (const char *)sub_6C2E8(dword_B9494);
    sub_64E00(
      4,
      "Possible 'ntpdx' exploit from %s#%u (possibly spoofed)",
      v29,
      (unsigned __int16)__rev16(*(unsigned __int16 *)(dword_B9494 + 2)));
    v3 = dword_B940C;
  }
  dword_B9408 = v3;
  return 0;
}
