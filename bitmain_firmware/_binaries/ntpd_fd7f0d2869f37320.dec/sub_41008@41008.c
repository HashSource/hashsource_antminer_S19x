int __fastcall sub_41008(
        unsigned int a1,
        unsigned __int16 *a2,
        _DWORD *a3,
        __int16 a4,
        unsigned __int16 a5,
        __int16 a6,
        int a7)
{
  int result; // r0
  int v11; // r2
  int v12; // r5
  char *v13; // lr
  _DWORD *v14; // r12
  int v15; // r1
  int v16; // r2
  int v17; // r3
  char v18; // r2
  char v19; // t1
  char v20; // t1
  size_t v21; // r11
  int *v22; // r10
  int v23; // r9
  bool v24; // zf
  __int16 v25; // r3
  __int16 v26; // r3
  unsigned int v27; // r2
  int *v28; // r4
  int *v29; // r12
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int *v34; // r6
  int k; // r4
  unsigned int v36; // r2
  unsigned int v37; // r3
  unsigned int v38; // r2
  unsigned int v39; // r3
  int v40; // r1
  int v41; // r2
  int v42; // r3
  unsigned int v43; // r1
  unsigned int v44; // r2
  int v45; // r0
  int v46; // r1
  int *i; // r2
  int v48; // r0
  int v49; // r1
  int *j; // r2
  int v51; // [sp+8h] [bp-3Ch] BYREF
  int v52; // [sp+Ch] [bp-38h]
  int v53; // [sp+10h] [bp-34h]
  int v54; // [sp+14h] [bp-30h]
  int v55; // [sp+18h] [bp-2Ch]
  unsigned int s2; // [sp+1Ch] [bp-28h] BYREF
  unsigned int v57; // [sp+20h] [bp-24h]
  int v58; // [sp+24h] [bp-20h]
  int v59; // [sp+28h] [bp-1Ch] BYREF
  int v60; // [sp+2Ch] [bp-18h]
  int v61; // [sp+30h] [bp-14h]
  int v62; // [sp+34h] [bp-10h]
  int v63; // [sp+38h] [bp-Ch] BYREF

  result = _stack_chk_guard;
  if ( !a2 )
  {
    if ( a3 )
      sub_6FC54("ntp_restrict.c", 619, 0, "((void *)0) == resmask");
    if ( a1 != 1 )
      sub_6FC54("ntp_restrict.c", 620, 0, "RESTRICT_FLAGS == op");
    word_BDBCC = a6;
    word_BDBCE = a5;
    word_BDBD0 = a4;
    dword_BDBD4 = 1;
    return result;
  }
  v11 = *a2;
  v12 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  s2 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  if ( v11 == 2 )
  {
    v27 = *((_DWORD *)a2 + 1);
    v21 = 8;
    result = a3[1];
    v55 = a7;
    v57 = bswap32(result);
    s2 = bswap32(v27) & v57;
    LOWORD(v53) = a6;
    HIWORD(v53) = a5;
    LOWORD(v54) = a4;
    v22 = (int *)restrictlist4;
  }
  else
  {
    if ( v11 != 10 )
      sub_6FC54("ntp_restrict.c", 658, 0, "0");
    v13 = (char *)a2 + 7;
    v14 = (int *)((char *)&v59 + 3);
    result = a3[2];
    v15 = a3[3];
    v16 = a3[4];
    v17 = a3[5];
    v60 = result;
    v61 = v15;
    v62 = v16;
    v63 = v17;
    do
    {
      v19 = *((_BYTE *)v14 + 1);
      v14 = (_DWORD *)((char *)v14 + 1);
      v18 = v19;
      v20 = *++v13;
      *((_BYTE *)v14 - 16) = v20 & v18;
    }
    while ( v14 != (int *)((char *)&v63 + 3) );
    v12 = 1;
    v55 = a7;
    v21 = 32;
    LOWORD(v53) = a6;
    HIWORD(v53) = a5;
    LOWORD(v54) = a4;
    v22 = (int *)restrictlist6;
  }
  for ( ; v22; v22 = (int *)*v22 )
  {
    if ( *((unsigned __int16 *)v22 + 5) == a5 )
    {
      result = memcmp(v22 + 5, &s2, v21);
      if ( !result )
      {
        v23 = (int)v22;
        switch ( a1 )
        {
          case 1u:
            v26 = *((_WORD *)v22 + 4);
            if ( (a6 & 0x40) != 0 && (v26 & 0x40) == 0 )
            {
              result = sub_40A78();
              v26 = *((_WORD *)v22 + 4);
            }
            *((_WORD *)v22 + 4) = v26 | a6;
            goto LABEL_34;
          case 2u:
            v25 = *((_WORD *)v22 + 4);
            if ( (v25 & 0x40) != 0 && (a6 & 0x40) != 0 )
            {
              result = sub_407A4();
              v25 = *((_WORD *)v22 + 4);
            }
            *((_WORD *)v22 + 4) = v25 & ~a6;
            return result;
          case 3u:
          case 4u:
            if ( a1 == 4 || (*((_WORD *)v22 + 5) & 0x1000) == 0 )
            {
              v24 = v22 == &dword_BDB58;
              if ( v22 != &dword_BDB58 )
                v24 = v22 == &dword_BDB8C;
              if ( !v24 )
                return sub_40820((int)v22, v12);
            }
            return result;
          default:
            goto LABEL_36;
        }
      }
    }
  }
  if ( a1 != 1 )
  {
    if ( !a1 || a1 > 4 )
LABEL_36:
      sub_6FC54("ntp_restrict.c", 734, 2, "0");
    return result;
  }
  if ( v12 )
  {
    v23 = dword_BDB4C;
    if ( dword_BDB4C )
    {
      dword_BDB4C = *(_DWORD *)dword_BDB4C;
    }
    else
    {
      v45 = sub_64BCC(0, 19, 52);
      v46 = dword_BDB4C;
      v23 = v45;
      for ( i = (int *)(v45 + 936); ; i -= 13 )
      {
        *i = v46;
        v46 = (int)i;
        if ( i - 13 == (int *)v45 )
          break;
      }
      dword_BDB4C = (int)i;
    }
    v28 = &v51;
    v29 = (int *)v23;
    do
    {
      v29 += 4;
      v30 = *v28;
      v31 = v28[1];
      v32 = v28[2];
      v33 = v28[3];
      v28 += 4;
      *(v29 - 4) = v30;
      *(v29 - 3) = v31;
      *(v29 - 2) = v32;
      *(v29 - 1) = v33;
    }
    while ( v28 != &v63 );
    result = *v28;
    *v29 = *v28;
    v34 = &restrictlist6;
  }
  else
  {
    v23 = dword_BDB50;
    if ( dword_BDB50 )
    {
      dword_BDB50 = *(_DWORD *)dword_BDB50;
    }
    else
    {
      v48 = sub_64BCC(0, 36, 28);
      v49 = dword_BDB50;
      v23 = v48;
      for ( j = (int *)(v48 + 980); ; j -= 7 )
      {
        *j = v49;
        v49 = (int)j;
        if ( j - 7 == (int *)v48 )
          break;
      }
      dword_BDB50 = (int)j;
    }
    v40 = v52;
    v41 = v53;
    v42 = v54;
    *(_DWORD *)v23 = v51;
    *(_DWORD *)(v23 + 4) = v40;
    *(_DWORD *)(v23 + 8) = v41;
    result = v55;
    v43 = s2;
    v44 = v57;
    *(_DWORD *)(v23 + 12) = v42;
    *(_DWORD *)(v23 + 16) = result;
    *(_DWORD *)(v23 + 20) = v43;
    *(_DWORD *)(v23 + 24) = v44;
    v34 = &restrictlist4;
  }
  for ( k = *v34; ; k = *(_DWORD *)k )
  {
    if ( !k )
    {
LABEL_47:
      *(_DWORD *)v23 = k;
      *v34 = v23;
      goto LABEL_48;
    }
    if ( !v12 )
    {
      v36 = *(_DWORD *)(v23 + 20);
      v37 = *(_DWORD *)(k + 20);
      if ( v36 > v37 )
        goto LABEL_47;
      if ( v36 < v37 )
        goto LABEL_55;
      v38 = *(_DWORD *)(v23 + 24);
      v39 = *(_DWORD *)(k + 24);
      if ( v38 > v39 )
        goto LABEL_47;
      if ( v38 < v39 )
        goto LABEL_55;
LABEL_54:
      if ( *(unsigned __int16 *)(v23 + 10) > (unsigned int)*(unsigned __int16 *)(k + 10) )
        goto LABEL_47;
      goto LABEL_55;
    }
    result = memcmp((const void *)(v23 + 20), (const void *)(k + 20), 0x10u);
    if ( result > 0 )
      goto LABEL_47;
    if ( !result )
    {
      result = memcmp((const void *)(v23 + 36), (const void *)(k + 36), 0x10u);
      if ( result > 0 )
        goto LABEL_47;
      if ( !result )
        goto LABEL_54;
    }
LABEL_55:
    v34 = (int *)k;
    if ( !*(_DWORD *)k )
      break;
  }
  *(_DWORD *)v23 = 0;
  *(_DWORD *)k = v23;
LABEL_48:
  ++dword_BDB54;
  if ( (a6 & 0x40) != 0 )
    result = sub_40A78();
LABEL_34:
  *(_WORD *)(v23 + 12) = v54;
  return result;
}
