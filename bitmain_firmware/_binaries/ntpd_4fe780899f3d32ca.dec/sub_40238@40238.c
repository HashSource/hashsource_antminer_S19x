int __fastcall sub_40238(
        int result,
        unsigned __int16 *a2,
        _DWORD *a3,
        __int16 a4,
        unsigned __int16 a5,
        __int16 a6,
        int a7)
{
  unsigned int v9; // r7
  int v11; // r2
  char *v12; // lr
  int v13; // r1
  int v14; // r2
  int v15; // r3
  char *v16; // r9
  char *v17; // r12
  char v18; // t1
  size_t v19; // r9
  int *v20; // r4
  int v21; // r10
  unsigned int v22; // r2
  unsigned int v23; // r1
  __int16 v24; // r3
  int v25; // r2
  bool v26; // zf
  __int16 v27; // r3
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r1
  int v32; // r2
  int *v33; // r6
  int k; // r5
  int v35; // r3
  int *v36; // r5
  int *v37; // lr
  int v38; // r0
  int v39; // r1
  int v40; // r2
  int v41; // r3
  unsigned int v42; // r2
  unsigned int v43; // r3
  unsigned int v44; // r2
  unsigned int v45; // r3
  int v46; // r0
  int v47; // r1
  int *i; // r2
  int v49; // r0
  int v50; // r1
  int *j; // r2
  int v52; // [sp+8h] [bp-44h]
  _DWORD s[13]; // [sp+10h] [bp-3Ch] BYREF

  v9 = result;
  if ( !a2 )
  {
    if ( a3 )
      sub_6ECC0("ntp_restrict.c", 619, a2, "((void *)0) == resmask");
    if ( result != 1 )
      sub_6ECC0("ntp_restrict.c", 620, 0, "RESTRICT_FLAGS == op");
    word_BCBB8 = a6;
    word_BCBBA = a5;
    word_BCBBC = a4;
    dword_BCBC0 = 1;
    return result;
  }
  memset(s, 0, sizeof(s));
  v11 = *a2;
  if ( v11 == 2 )
  {
    v22 = *((_DWORD *)a2 + 1);
    v23 = a3[1];
    v19 = 8;
    result = 1420;
    v52 = 0;
    LOWORD(s[3]) = a4;
    LOWORD(s[2]) = a6;
    HIWORD(s[2]) = a5;
    s[6] = bswap32(v23);
    s[5] = bswap32(v22) & s[6];
    s[4] = a7;
    v20 = (int *)restrictlist4;
  }
  else
  {
    if ( v11 != 10 )
      sub_6ECC0("ntp_restrict.c", 658, 0, "0");
    v12 = (char *)a2 + 7;
    result = a3[2];
    v13 = a3[3];
    v14 = a3[4];
    v15 = a3[5];
    v16 = (char *)a2 + 23;
    v17 = (char *)&s[4] + 3;
    s[9] = result;
    s[10] = v13;
    s[11] = v14;
    s[12] = v15;
    do
    {
      v18 = *++v12;
      v17[1] = v18 & v17[17];
      ++v17;
    }
    while ( v12 != v16 );
    LOWORD(s[3]) = a4;
    v19 = 32;
    v52 = 1;
    LOWORD(s[2]) = a6;
    HIWORD(s[2]) = a5;
    s[4] = a7;
    v20 = (int *)restrictlist6;
  }
  for ( ; v20; v20 = (int *)*v20 )
  {
    v21 = *((unsigned __int16 *)v20 + 5);
    if ( a5 == v21 )
    {
      result = memcmp(v20 + 5, &s[5], v19);
      if ( !result )
      {
        switch ( v9 )
        {
          case 1u:
            v24 = *((_WORD *)v20 + 4);
            if ( (a6 & 0x40) != 0 && (v24 & 0x40) == 0 )
            {
              v25 = dword_BCB40;
              if ( !dword_BCB40 )
              {
                result = sub_30CD4(2);
                v25 = dword_BCB40;
                v24 = *((_WORD *)v20 + 4);
              }
              dword_BCB40 = v25 + 1;
            }
            *((_WORD *)v20 + 4) = a6 | v24;
            goto LABEL_28;
          case 2u:
            v27 = *((_WORD *)v20 + 4);
            if ( (v27 & 0x40) != 0 && (a6 & 0x40) != 0 && !--dword_BCB40 )
            {
              result = sub_30DFC(2u);
              v27 = *((_WORD *)v20 + 4);
            }
            *((_WORD *)v20 + 4) = v27 & ~a6;
            return result;
          case 3u:
          case 4u:
            if ( v9 == 4 || (v21 & 0x1000) == 0 )
            {
              v26 = v20 == &dword_BCB44;
              if ( v20 != &dword_BCB44 )
                v26 = v20 == &dword_BCB78;
              if ( !v26 )
                return sub_3FAA4(v20, v52);
            }
            return result;
          default:
            goto LABEL_21;
        }
      }
    }
  }
  if ( v9 != 1 )
  {
    if ( !v9 || v9 > 4 )
LABEL_21:
      sub_6ECC0("ntp_restrict.c", 734, 2, "0");
    return result;
  }
  if ( v52 )
  {
    v20 = (int *)dword_BCB34;
    if ( dword_BCB34 )
    {
      dword_BCB34 = *(_DWORD *)dword_BCB34;
    }
    else
    {
      v46 = sub_63C68(0, 19, 52);
      v47 = dword_BCB34;
      v20 = (int *)v46;
      for ( i = (int *)(v46 + 936); ; i -= 13 )
      {
        *i = v47;
        v47 = (int)i;
        if ( (int *)v46 == i - 13 )
          break;
      }
      dword_BCB34 = (int)i;
    }
    v36 = s;
    v37 = v20;
    do
    {
      v37 += 4;
      v38 = *v36;
      v39 = v36[1];
      v40 = v36[2];
      v41 = v36[3];
      v36 += 4;
      *(v37 - 4) = v38;
      *(v37 - 3) = v39;
      *(v37 - 2) = v40;
      *(v37 - 1) = v41;
    }
    while ( v36 != &s[12] );
    result = *v36;
    *v37 = *v36;
    v33 = &restrictlist6;
  }
  else
  {
    v20 = (int *)dword_BCB38;
    if ( dword_BCB38 )
    {
      dword_BCB38 = *(_DWORD *)dword_BCB38;
    }
    else
    {
      v49 = sub_63C68(0, 36, 28);
      v50 = dword_BCB38;
      v20 = (int *)v49;
      for ( j = (int *)(v49 + 980); ; j -= 7 )
      {
        *j = v50;
        v50 = (int)j;
        if ( (int *)v49 == j - 7 )
          break;
      }
      dword_BCB38 = (int)j;
    }
    v28 = s[1];
    v29 = s[2];
    v30 = s[3];
    *v20 = s[0];
    v20[1] = v28;
    v20[2] = v29;
    result = s[4];
    v31 = s[5];
    v32 = s[6];
    v20[3] = v30;
    v20[4] = result;
    v20[5] = v31;
    v20[6] = v32;
    v33 = &restrictlist4;
  }
  for ( k = *v33; ; k = *(_DWORD *)k )
  {
    if ( !k )
    {
LABEL_48:
      *v20 = k;
      *v33 = (int)v20;
      goto LABEL_49;
    }
    if ( !v52 )
    {
      v42 = v20[5];
      v43 = *(_DWORD *)(k + 20);
      if ( v42 > v43 )
        goto LABEL_48;
      if ( v42 < v43 )
        goto LABEL_63;
      v44 = v20[6];
      v45 = *(_DWORD *)(k + 24);
      if ( v44 > v45 )
        goto LABEL_48;
      if ( v44 < v45 )
        goto LABEL_63;
LABEL_62:
      if ( *((unsigned __int16 *)v20 + 5) > (unsigned int)*(unsigned __int16 *)(k + 10) )
        goto LABEL_48;
      goto LABEL_63;
    }
    result = memcmp(v20 + 5, (const void *)(k + 20), 0x10u);
    if ( result > 0 )
      goto LABEL_48;
    if ( !result )
    {
      result = memcmp(v20 + 9, (const void *)(k + 36), 0x10u);
      if ( result > 0 )
        goto LABEL_48;
      if ( !result )
        goto LABEL_62;
    }
LABEL_63:
    v33 = (int *)k;
    if ( !*(_DWORD *)k )
      break;
  }
  *v20 = 0;
  *(_DWORD *)k = v20;
LABEL_49:
  ++dword_BCB3C;
  if ( (a6 & 0x40) != 0 )
  {
    v35 = dword_BCB40;
    if ( !dword_BCB40 )
    {
      result = sub_30CD4(2);
      v35 = dword_BCB40;
    }
    dword_BCB40 = v35 + 1;
  }
LABEL_28:
  *((_WORD *)v20 + 6) = s[3];
  return result;
}
