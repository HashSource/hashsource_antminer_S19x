int __fastcall sub_A1C00(_DWORD *a1, unsigned __int8 **a2)
{
  int v4; // r10
  int *v5; // r3
  int v6; // r3
  _BOOL4 v7; // r2
  unsigned __int8 *v8; // r3
  unsigned __int8 *v9; // r3
  int v10; // r0
  unsigned int v11; // r4
  unsigned __int8 *v12; // r3
  unsigned __int8 *v13; // r2
  int v14; // r1
  int v15; // r2
  int v16; // r1
  int v17; // r2
  unsigned int v18; // r7
  _DWORD *v19; // r5
  int v20; // r6
  unsigned int v22; // r7
  int v23; // r1
  unsigned __int8 *v24; // r3
  unsigned int v25; // r4
  int v26; // r7
  unsigned __int8 *v27; // r2
  unsigned __int8 *v28; // r11
  unsigned int v29; // r4
  unsigned int v30; // r3
  int v31; // r2
  unsigned __int8 *v32; // r6
  int *v33; // r1
  int v34; // r1
  _BOOL4 v35; // r0
  unsigned int v36; // r4
  unsigned int v37; // lr
  unsigned __int8 *v38; // r6
  int v39; // r0
  _DWORD *v40; // r3
  int v41; // r4
  int v42; // r0
  int v43; // r2
  int v44; // r1
  int *v45; // r3
  int v46; // r2
  int v47; // r3
  bool v48; // cc
  int *v49; // r3
  int v50; // r0
  int v51; // r0
  int v52; // r3
  bool v53; // cc
  unsigned __int8 *v54; // [sp+10h] [bp-14h] BYREF
  int v55; // [sp+14h] [bp-10h] BYREF
  _DWORD v56[3]; // [sp+18h] [bp-Ch] BYREF

  a1[25] = 0;
  v4 = sub_10BFCC(a1);
  if ( !v4 )
  {
    v19 = 0;
    sub_95494(a1, 80, 380, 65, (int)"ssl/statem/statem_srvr.c", 3612);
    v20 = 0;
    goto LABEL_16;
  }
  v5 = (int *)a1[1];
  if ( (*(_DWORD *)(v5[25] + 48) & 8) != 0 )
    goto LABEL_12;
  v6 = *v5;
  v7 = v6 >= 772;
  if ( v6 == 0x10000 )
    v7 = 0;
  if ( !v7 )
    goto LABEL_12;
  v8 = a2[1];
  if ( !v8 || (v9 = v8 - 1, v10 = (int)(*a2 + 1), v11 = **a2, v11 > (unsigned int)v9) )
  {
LABEL_10:
    sub_95494(a1, 50, 380, 282, (int)"ssl/statem/statem_srvr.c", 3621);
LABEL_15:
    v19 = 0;
    v20 = 0;
    goto LABEL_16;
  }
  v12 = &v9[-v11];
  v13 = (unsigned __int8 *)(v10 + v11);
  *a2 = (unsigned __int8 *)(v10 + v11);
  a2[1] = v12;
  v14 = a1[383];
  if ( !v14 )
  {
    v18 = (unsigned int)v12;
    if ( !v11 )
      goto LABEL_13;
    goto LABEL_10;
  }
  v15 = a1[384];
  if ( v15 != v11 || sub_BC33C(v10, v14, v15) )
    goto LABEL_10;
LABEL_12:
  v13 = *a2;
  v18 = (unsigned int)a2[1];
LABEL_13:
  if ( v18 <= 2 )
    goto LABEL_14;
  v22 = v18 - 3;
  v23 = *v13;
  v24 = v13 + 3;
  v25 = (v13[1] << 8) | (v23 << 16) | v13[2];
  if ( v25 > v22 || (v26 = v22 - v25, v27 = &v24[v25], *a2 = &v24[v25], (a2[1] = (unsigned __int8 *)v26) != 0) )
  {
LABEL_14:
    sub_95494(a1, 50, 380, 159, (int)"ssl/statem/statem_srvr.c", 3628);
    goto LABEL_15;
  }
  if ( !v25 )
  {
LABEL_40:
    if ( sub_10C010(v4, v23, v27) <= 0 )
    {
      if ( *a1 == 768 )
      {
        sub_95494(a1, 40, 380, 176, (int)"ssl/statem/statem_srvr.c", 3691);
        goto LABEL_15;
      }
      if ( (a1[299] & 3) == 3 )
      {
        sub_95494(a1, 116, 380, 199, (int)"ssl/statem/statem_srvr.c", 3699);
        goto LABEL_15;
      }
      if ( *(_DWORD *)(a1[31] + 212) && !sub_A9244(a1, 0) )
        goto LABEL_15;
    }
    else
    {
      v39 = sub_84988(a1, v4, v17);
      if ( v39 <= 0 )
      {
        v19 = 0;
        v51 = sub_9C7B4(a1[310]);
        v20 = 0;
        sub_95494(a1, v51, 380, 134, (int)"ssl/statem/statem_srvr.c", 3713);
        goto LABEL_16;
      }
      if ( v39 != 1 )
      {
        sub_95494(a1, 40, 380, v39, (int)"ssl/statem/statem_srvr.c", 3718);
        goto LABEL_15;
      }
      v50 = sub_10C01C(v4, 0);
      v19 = (_DWORD *)sub_10E89C(v50);
      if ( !v19 )
      {
        v20 = 0;
        sub_95494(a1, 40, 380, 247, (int)"ssl/statem/statem_srvr.c", 3725);
        goto LABEL_16;
      }
    }
    if ( a1[381] == 4 )
    {
      v19 = sub_8D794((_DWORD *)a1[285], 0);
      if ( !v19 )
      {
        v20 = 0;
        sub_95494(a1, 80, 380, 65, (int)"ssl/statem/statem_srvr.c", 3742);
        goto LABEL_16;
      }
      sub_8D6A4(a1[285]);
      v40 = v19;
      a1[285] = v19;
    }
    else
    {
      v40 = (_DWORD *)a1[285];
    }
    X509_free(v40[103], v16, v17);
    v41 = a1[285];
    v42 = sub_10BD54(v4);
    v43 = a1[285];
    v44 = a1[310];
    *(_DWORD *)(v41 + 412) = v42;
    *(_DWORD *)(v43 + 420) = v44;
    sub_10BFDC(*(_DWORD *)(v43 + 416), X509_free);
    v45 = (int *)a1[1];
    v16 = a1[285];
    v46 = v45[25];
    *(_DWORD *)(v16 + 416) = v4;
    v17 = *(_DWORD *)(v46 + 48) << 28;
    if ( v17 >= 0 )
    {
      v47 = *v45;
      v48 = v47 <= 0x10000;
      if ( v47 != 0x10000 )
        v48 = v47 <= 771;
      if ( !v48 )
      {
        if ( !sub_A9244(a1, 1) )
          goto LABEL_76;
        v49 = (int *)a1[1];
        v17 = v49[25];
        if ( (*(_DWORD *)(v17 + 48) & 8) == 0 )
        {
          v52 = *v49;
          v53 = v52 <= 0x10000;
          if ( v52 != 0x10000 )
            v53 = v52 <= 771;
          if ( !v53 )
          {
            if ( sub_8B6E8((int)a1, (int)(a1 + 258), 0x40u, a1 + 274) )
            {
              v4 = 0;
              a1[988] = 0;
              v19 = 0;
              v20 = 3;
              goto LABEL_16;
            }
LABEL_76:
            v4 = 0;
            v19 = 0;
            v20 = 0;
            goto LABEL_16;
          }
        }
      }
    }
    v4 = 0;
    v20 = 3;
    v19 = 0;
    goto LABEL_16;
  }
  if ( v25 <= 2 )
  {
LABEL_39:
    sub_95494(a1, 50, 380, 135, (int)"ssl/statem/statem_srvr.c", 3637);
    goto LABEL_15;
  }
  v28 = v24;
  while ( 1 )
  {
    v29 = v25 - 3;
    v30 = (v28[1] << 8) | (*v28 << 16) | v28[2];
    if ( v30 > v29 )
      goto LABEL_39;
    v31 = (v28[1] << 8) | (*v28 << 16) | v28[2];
    v54 = v28 + 3;
    v25 = v29 - v30;
    v32 = &v28[v30 + 3];
    v19 = (_DWORD *)d2i_X509(0, &v54, v31);
    if ( !v19 )
    {
      sub_95494(a1, 50, 380, 13, (int)"ssl/statem/statem_srvr.c", 3645);
      goto LABEL_32;
    }
    v28 = v54;
    if ( v54 != v32 )
    {
      sub_95494(a1, 50, 380, 135, (int)"ssl/statem/statem_srvr.c", 3651);
      goto LABEL_32;
    }
    v33 = (int *)a1[1];
    if ( (*(_DWORD *)(v33[25] + 48) & 8) == 0 )
    {
      v34 = *v33;
      v35 = v34 != 0x10000;
      if ( v34 < 772 )
        v35 = 0;
      if ( v35 )
      {
        v55 = 0;
        if ( v25 <= 1 || (v36 = v25 - 2, v37 = v54[1] | (*v54 << 8), v37 > v36) )
        {
          sub_95494(a1, 50, 380, 271, (int)"ssl/statem/statem_srvr.c", 3662);
LABEL_32:
          v20 = 0;
          goto LABEL_16;
        }
        v56[0] = v54 + 2;
        v25 = v36 - v37;
        v38 = &v54[v37 + 2];
        v56[1] = v37;
        if ( !sub_8F274(a1, (int)v56, 4096, &v55, 0, v26 == 0) || !sub_8F658(a1, 4096, v55, (int)v19, v26, v25 == 0) )
        {
          CRYPTO_free(v55, "ssl/statem/statem_srvr.c", 3671);
          goto LABEL_32;
        }
        v28 = v38;
        CRYPTO_free(v55, "ssl/statem/statem_srvr.c", 3674);
      }
    }
    if ( !sub_10BD3C(v4, v19) )
      break;
    ++v26;
    if ( !v25 )
      goto LABEL_40;
    if ( v25 <= 2 )
      goto LABEL_39;
  }
  v20 = 0;
  sub_95494(a1, 80, 380, 65, (int)"ssl/statem/statem_srvr.c", 3680);
LABEL_16:
  X509_free(v19, v16, v17);
  sub_10BFDC(v4, X509_free);
  return v20;
}
