const unsigned __int16 **__fastcall sub_1EA58(int a1, _DWORD *a2)
{
  unsigned __int8 *v2; // r7
  unsigned int v3; // r8
  int v5; // r9
  int v6; // r11
  unsigned __int8 *v7; // r6
  const unsigned __int16 **result; // r0
  int v9; // r4
  unsigned int v10; // r1
  unsigned __int8 *i; // r2
  int v12; // t1
  int v13; // r7
  unsigned __int8 *v14; // r3
  const unsigned __int16 *v15; // r12
  int v16; // r2
  unsigned __int8 *v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r9
  int v21; // t1
  unsigned int v22; // r9
  __int16 v23; // r3
  _BYTE *v24; // r1
  unsigned __int8 *v25; // r3
  unsigned __int8 *v26; // r2
  int v27; // r1
  int v28; // t1
  int v29; // t1
  int v30; // r3
  bool v31; // zf
  const char *v32; // r0

  v2 = (unsigned __int8 *)dword_BA408;
  v3 = dword_BA40C;
  if ( dword_BA408 >= (unsigned int)dword_BA40C )
    return 0;
  v5 = dword_BA408;
  while ( 1 )
  {
    v6 = *v2;
    v7 = v2++;
    if ( v6 != 44 )
    {
      result = _ctype_b_loc();
      v9 = (*result)[v6] & 0x2000;
      if ( ((*result)[v6] & 0x2000) == 0 )
        break;
    }
    v5 = (int)v2;
    if ( v2 == (unsigned __int8 *)v3 )
    {
      dword_BA408 = (int)v2;
      return 0;
    }
  }
  if ( (unsigned int)v7 >= v3 )
    result = (const unsigned __int16 **)((*result)[v6] & 0x2000);
  dword_BA408 = v5;
  if ( (unsigned int)v7 >= v3 )
    return result;
  v10 = v3 - 1;
  for ( i = v7; ; ++i )
  {
    v13 = (int)i;
    if ( v6 != 61 )
      break;
    if ( !v9 )
      v9 = (int)i;
    if ( i == (unsigned __int8 *)v10 )
      goto LABEL_20;
LABEL_15:
    v12 = i[1];
    v6 = v12;
  }
  if ( v6 == 44 )
    goto LABEL_21;
  if ( i != (unsigned __int8 *)v10 )
    goto LABEL_15;
LABEL_20:
  v13 = v3;
LABEL_21:
  *a2 = 0;
  if ( v9 )
  {
    v14 = (unsigned __int8 *)(v9 + 1);
    if ( v9 + 1 == v13 )
      goto LABEL_37;
    v15 = *result;
    while ( 1 )
    {
      v16 = *v14;
      v17 = v14++;
      if ( (v15[v16] & 0x2000) == 0 )
        break;
      if ( (unsigned __int8 *)v13 == v14 )
        goto LABEL_37;
    }
    v18 = (int)v17;
    if ( (unsigned __int8 *)v13 == v17 )
    {
LABEL_37:
      v18 = v13;
LABEL_38:
      v22 = 0;
    }
    else
    {
      v19 = v13;
      while ( 1 )
      {
        v20 = v19;
        v21 = *(unsigned __int8 *)--v19;
        if ( (v15[v21] & 0x2000) == 0 )
          break;
        if ( (unsigned __int8 *)v19 == v17 )
          goto LABEL_38;
      }
      v22 = v20 - (_DWORD)v17;
      if ( v22 > 0x7F )
      {
        ++numctlbadpkts;
        if ( (ntp_syslogmask & 2) != 0 && dword_BA490 <= (unsigned int)current_time )
        {
          dword_BA490 = current_time + 300;
          v32 = (const char *)sub_6D2C0(dword_BA494);
          sub_65D40(
            4,
            "Possible 'ntpdx' exploit from %s#%u (possibly spoofed)",
            v32,
            HIBYTE(*(_WORD *)(dword_BA494 + 2)) | (unsigned __int16)(*(_WORD *)(dword_BA494 + 2) << 8));
          v3 = dword_BA40C;
        }
        dword_BA408 = v3;
        return 0;
      }
    }
    _memcpy_chk(&unk_BA410, v18, v22, 128);
    *((_BYTE *)&dword_BA3F4 + v22 + 28) = 0;
    *a2 = &unk_BA410;
  }
  else
  {
    v9 = v13;
  }
  if ( !a1 )
    return (const unsigned __int16 **)&unk_950F8;
  v23 = *(_WORD *)(a1 + 2);
  if ( (v23 & 0x80) != 0 )
  {
LABEL_54:
    *a2 = 0;
    return (const unsigned __int16 **)a1;
  }
  while ( 2 )
  {
    if ( (v23 & 0x40) != 0 )
      goto LABEL_53;
    v24 = *(_BYTE **)(a1 + 4);
    if ( (unsigned __int8 *)v9 == v7 )
      goto LABEL_50;
    if ( !*v24 || *v7 != (unsigned __int8)*v24 )
      goto LABEL_53;
    v25 = v24 + 1;
    v26 = v7;
    while ( 1 )
    {
      v24 = v25;
      if ( v26 == (unsigned __int8 *)(v9 - 1) )
        break;
      v28 = *v25++;
      v27 = v28;
      if ( v28 )
      {
        v29 = *++v26;
        if ( v29 == v27 )
          continue;
      }
      goto LABEL_53;
    }
LABEL_50:
    v30 = (unsigned __int8)*v24;
    v31 = v30 == 0;
    if ( *v24 )
      v31 = v30 == 61;
    if ( !v31 )
    {
LABEL_53:
      a1 += 8;
      v23 = *(_WORD *)(a1 + 2);
      if ( (v23 & 0x80) != 0 )
        goto LABEL_54;
      continue;
    }
    break;
  }
  if ( v13 != v3 )
    ++v13;
  dword_BA408 = v13;
  return (const unsigned __int16 **)a1;
}
