int __fastcall sub_981D8(_DWORD *a1, unsigned __int8 **a2)
{
  int v4; // r7
  int *v5; // r3
  int v6; // r3
  _BOOL4 v7; // r2
  unsigned __int8 *v8; // r3
  _DWORD *v9; // r0
  int v10; // r3
  unsigned int v11; // r5
  int v12; // r4
  int v13; // r1
  int v14; // r2
  int v16; // r1
  unsigned int v17; // r5
  int v18; // r3
  unsigned __int8 *v19; // r1
  int v20; // r0
  int v21; // r2
  int i; // r9
  int v24; // r2
  unsigned __int8 *v25; // r3
  int v26; // r0
  unsigned __int8 *v27; // r5
  int v28; // r1
  unsigned int v29; // r2
  unsigned __int8 *v30; // r11
  int *v31; // r2
  int v32; // r2
  _BOOL4 v33; // r1
  unsigned int v34; // r2
  unsigned int v35; // r2
  int v36; // r0
  unsigned int v37; // lr
  int v38; // r2
  int v39; // r0
  int v40; // r9
  int v41; // r4
  int v42; // r5
  char *v43; // r0
  int *v44; // r3
  int v45; // r2
  int v46; // r3
  int *v47; // r3
  int v48; // r2
  int v49; // r0
  _DWORD *v50; // r0
  int v51; // r3
  int v52; // r0
  int v53; // r3
  int v54; // [sp+4h] [bp-20h]
  int v55; // [sp+4h] [bp-20h]
  unsigned __int8 *v56; // [sp+10h] [bp-14h] BYREF
  int v57; // [sp+14h] [bp-10h] BYREF
  _DWORD v58[3]; // [sp+18h] [bp-Ch] BYREF

  v4 = sub_10BFCC(a1);
  if ( !v4 )
  {
    v11 = 0;
    sub_95494(a1, 80, 367, 65, (int)"ssl/statem/statem_clnt.c", 1835);
    v12 = 0;
    goto LABEL_9;
  }
  v5 = (int *)a1[1];
  if ( (*(_DWORD *)(v5[25] + 48) & 8) == 0 )
  {
    v6 = *v5;
    v7 = v6 >= 772;
    if ( v6 == 0x10000 )
      v7 = 0;
    if ( v7 )
    {
      v8 = a2[1];
      if ( !v8 )
        goto LABEL_7;
      v16 = *(*a2)++;
      a2[1] = v8 - 1;
      if ( v16 )
        goto LABEL_7;
    }
  }
  v17 = (unsigned int)a2[1];
  if ( v17 <= 2 )
    goto LABEL_7;
  v11 = v17 - 3;
  v18 = (*a2)[1];
  v19 = *a2 + 3;
  v20 = **a2;
  v21 = (*a2)[2];
  *a2 = v19;
  a2[1] = (unsigned __int8 *)v11;
  if ( ((v18 << 8) | (v20 << 16) | v21) != v11 || v11 == 0 )
  {
LABEL_7:
    v54 = 1845;
    v9 = a1;
    v10 = 159;
LABEL_8:
    v11 = 0;
    v12 = 0;
    sub_95494(v9, 50, 367, v10, (int)"ssl/statem/statem_clnt.c", v54);
    goto LABEL_9;
  }
  if ( v11 <= 2 )
  {
LABEL_34:
    v54 = 1853;
    v9 = a1;
    v10 = 135;
    goto LABEL_8;
  }
  for ( i = 0; ; ++i )
  {
    v24 = v19[1];
    v25 = (unsigned __int8 *)(v11 - 3);
    v26 = *v19;
    v27 = v19 + 3;
    v28 = v19[2];
    a2[1] = v25;
    *a2 = v27;
    v29 = (v24 << 8) | (v26 << 16) | v28;
    if ( v29 > (unsigned int)v25 )
      goto LABEL_34;
    v30 = &v27[v29];
    a2[1] = &v25[-v29];
    *a2 = &v27[v29];
    v56 = v27;
    v11 = d2i_X509(0, &v56, v29);
    if ( !v11 )
    {
      v12 = 0;
      sub_95494(a1, 42, 367, 13, (int)"ssl/statem/statem_clnt.c", 1861);
      goto LABEL_9;
    }
    if ( v56 != v30 )
    {
      v12 = 0;
      sub_95494(a1, 50, 367, 135, (int)"ssl/statem/statem_clnt.c", 1867);
      goto LABEL_9;
    }
    v31 = (int *)a1[1];
    if ( (*(_DWORD *)(v31[25] + 48) & 8) == 0 )
    {
      v32 = *v31;
      v33 = v32 != 0x10000;
      if ( v32 < 772 )
        v33 = 0;
      if ( v33 )
      {
        v34 = (unsigned int)a2[1];
        v57 = 0;
        if ( v34 <= 1 || (v35 = v34 - 2, v36 = (int)(*a2 + 2), v37 = (*a2)[1] | (**a2 << 8), v37 > v35) )
        {
          sub_95494(a1, 50, 367, 271, (int)"ssl/statem/statem_clnt.c", 1878);
LABEL_36:
          v12 = 0;
          goto LABEL_9;
        }
        a2[1] = (unsigned __int8 *)(v35 - v37);
        v58[0] = v36;
        *a2 = (unsigned __int8 *)(v36 + v37);
        v58[1] = v37;
        if ( !sub_8F274(a1, (int)v58, 4096, &v57, 0, i == 0) || !sub_8F658(a1, 4096, v57, v11, i, a2[1] == 0) )
        {
          CRYPTO_free(v57, "ssl/statem/statem_clnt.c", 1887);
          goto LABEL_36;
        }
        CRYPTO_free(v57, "ssl/statem/statem_clnt.c", 1891);
      }
    }
    if ( !sub_10BD3C(v4, v11) )
    {
      v12 = 0;
      sub_95494(a1, 80, 367, 65, (int)"ssl/statem/statem_clnt.c", 1897);
      goto LABEL_9;
    }
    v11 = (unsigned int)a2[1];
    if ( !v11 )
      break;
    if ( v11 <= 2 )
      goto LABEL_34;
    v19 = *a2;
  }
  v39 = sub_84988(a1, v4, v38);
  v40 = v39;
  v12 = a1[299] != 0;
  if ( v39 > 0 )
    v12 = 0;
  if ( v12 )
  {
    v12 = 0;
    v52 = sub_9C7B4(a1[310]);
    sub_95494(a1, v52, 367, 134, (int)"ssl/statem/statem_clnt.c", 1921);
    goto LABEL_9;
  }
  sub_D00F0(v39);
  if ( v40 > 1 )
  {
    v11 = 0;
    sub_95494(a1, 40, 367, v40, (int)"ssl/statem/statem_clnt.c", 1927);
    goto LABEL_9;
  }
  *(_DWORD *)(a1[285] + 416) = v4;
  v41 = sub_10C01C(v4, 0);
  v42 = sub_10E89C(v41);
  if ( !v42 || sub_D9B28() )
  {
    v4 = 0;
    sub_95494(a1, 80, 367, 239, (int)"ssl/statem/statem_clnt.c", 1944);
    v11 = 0;
    v12 = 0;
    goto LABEL_9;
  }
  v43 = sub_8559C(v42, v58);
  v4 = (int)v43;
  if ( !v43 )
  {
    v55 = 1952;
    v50 = a1;
    v51 = 247;
    goto LABEL_58;
  }
  v44 = (int *)a1[1];
  v45 = *(_DWORD *)(v44[25] + 48);
  if ( (v45 & 8) != 0 || (v46 = *v44, v46 < 772) || v46 == 0x10000 )
  {
    if ( (*(_DWORD *)(*(_DWORD *)(a1[31] + 528) + 20) & *((_DWORD *)v43 + 1)) == 0 )
    {
      v4 = 0;
      v50 = a1;
      v51 = 383;
      v55 = 1965;
LABEL_58:
      v11 = 0;
      sub_95494(v50, 47, 367, v51, (int)"ssl/statem/statem_clnt.c", v55);
      v12 = 0;
      goto LABEL_9;
    }
  }
  X509_free(*(_DWORD *)(a1[285] + 412), v45 << 28, v45);
  sub_10FD18(v41);
  v47 = (int *)a1[1];
  v48 = a1[285];
  v49 = a1[310];
  v13 = v47[25];
  *(_DWORD *)(v48 + 412) = v41;
  *(_DWORD *)(v48 + 420) = v49;
  v14 = *(_DWORD *)(v13 + 48) << 28;
  if ( (*(_DWORD *)(v13 + 48) & 8) != 0
    || (v53 = *v47, v53 == 0x10000)
    || v53 < 772
    || sub_8B6E8((int)a1, (int)(a1 + 258), 0x40u, a1 + 274) )
  {
    v4 = 0;
    v12 = 3;
    v11 = 0;
  }
  else
  {
    v4 = 0;
    v11 = 0;
    v12 = 0;
  }
LABEL_9:
  X509_free(v11, v13, v14);
  sub_10BFDC(v4, X509_free);
  return v12;
}
