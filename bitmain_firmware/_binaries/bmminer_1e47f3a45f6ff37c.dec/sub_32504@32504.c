int sub_32504()
{
  float v0; // s0
  int i; // r0
  char v2; // r2
  unsigned int v3; // r7
  int v4; // r11
  int v5; // r10
  int j; // r4
  int v7; // r4
  int k; // r7
  int v9; // r6
  _BYTE *v10; // r7
  int v11; // r4
  int v12; // r4
  int v13; // r0
  double v14; // r0
  bool v15; // cc
  int v16; // s16
  int v17; // r6
  int v18; // r7
  int *v19; // r9
  int *v20; // r8
  int v21; // r4
  int v22; // r0
  _BOOL4 v23; // r3
  int v24; // r3
  int v25; // r0
  int v26; // r1
  _BYTE *v27; // r2
  int v28; // r3
  int v29; // t1
  int v30; // r3
  int v31; // r0
  _BYTE *v32; // r12
  int *v33; // lr
  int *v34; // r1
  char *v35; // r0
  int v36; // r3
  int v37; // t1
  int v38; // t1
  int v39; // r3
  int v40; // r4
  int *v41; // r7
  int *v42; // r8
  int v43; // r6
  int *v44; // r2
  int v45; // r3
  int v46; // r1
  int v47; // t1
  int *v48; // lr
  int *v49; // r0
  int *v50; // r2
  int v51; // r1
  int v52; // r12
  int v53; // r3
  int v54; // t1
  unsigned int v55; // r11
  int v57; // r3
  int *v58; // [sp+Ch] [bp-2A58h]
  int *v59; // [sp+10h] [bp-2A54h]
  unsigned int v60; // [sp+10h] [bp-2A54h]
  char v61; // [sp+38h] [bp-2A2Ch]
  _DWORD v62[15]; // [sp+44h] [bp-2A20h] BYREF
  _BYTE v63[240]; // [sp+80h] [bp-29E4h] BYREF
  _BYTE v64[240]; // [sp+170h] [bp-28F4h] BYREF
  char s[2048]; // [sp+260h] [bp-2804h] BYREF
  _BYTE dest[4096]; // [sp+A60h] [bp-2004h] BYREF
  char v67[4100]; // [sp+1A60h] [bp-1004h] BYREF

  for ( i = prctl(15, "tuning_freq", 0); sub_40F54(i) != 3; i = sub_3E0F0(1000) )
    ;
  while ( 1 )
  {
    pthread_mutex_lock(&stru_B416C);
    if ( sub_226A8() == dword_533B38 )
      break;
    pthread_mutex_unlock(&stru_B416C);
    sub_3E0F0(1000);
  }
  v2 = byte_B3068;
  byte_B3068 = 0;
  v61 = v2;
  pthread_mutex_unlock(&stru_B416C);
  sub_3E0F0(60000);
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v67, "tuning freq start\n");
    sub_3B6AC(3, v67, 0, *(_DWORD *)"start\n");
  }
  sub_32364();
  v3 = dword_534B54;
  if ( dword_B3058 <= 0 )
  {
    v4 = dword_534B54;
    v40 = 0;
  }
  else
  {
    v58 = (int *)v63;
    v4 = dword_534B54;
    v59 = (int *)v64;
    v5 = 0;
    if ( (unsigned int)dword_B308C > 3 )
      goto LABEL_33;
    while ( 1 )
    {
      for ( j = 0; j != 4; ++j )
      {
        if ( sub_26C0C(j) )
        {
          v0 = flt_B32C8;
          sub_23DC4(j, (unsigned __int8)byte_534B58, v3, v4, 0);
        }
      }
      v7 = 0;
      memcpy(dest, &unk_B707C, sizeof(dest));
      sub_3E0F0(180000);
      for ( k = 0; k != 4; ++k )
      {
        if ( sub_26C0C(k) )
        {
          v31 = sub_26A44();
          if ( v31 > 0 )
          {
            v32 = &dest[v7 * 4 - 4];
            v33 = &dword_B706C[256 * k + 3 + v31];
            v34 = &dword_B706C[v7 + 3];
            v35 = &v67[v7 * 4 - 4];
            do
            {
              v37 = v34[1];
              ++v34;
              v36 = v37;
              v38 = *((_DWORD *)v32 + 1);
              v32 += 4;
              *((_DWORD *)v35 + 1) = v36 - v38;
              v35 += 4;
            }
            while ( v34 != v33 );
          }
        }
        v7 += 256;
      }
      v9 = 0;
      v10 = &dest[4092];
      v11 = 0;
      sub_31EEC(v4, (int)v67);
      do
      {
        if ( sub_26C0C(v11) )
        {
          sub_32280(v11, (int)v67);
          v58[v9] = (int)v0;
          v25 = sub_26A44();
          v26 = 0;
          if ( v25 > 0 )
          {
            v27 = v10;
            v28 = 0;
            do
            {
              ++v28;
              v29 = *((_DWORD *)v27 + 1);
              v27 += 4;
              v26 += v29;
            }
            while ( v28 != v25 );
          }
          v15 = (unsigned int)dword_B308C > 3;
          v59[v9] = v26;
          if ( v15 )
          {
            snprintf(s, 0x800u, "chain %d, nonce_stdev %d, nonce_num %d\n", v11, (int)v0, v26);
            sub_3B6AC(3, s, 0, v30);
          }
        }
        ++v11;
        v9 += 15;
        v10 += 1024;
      }
      while ( v11 != 4 );
      v12 = sub_26A44();
      v13 = sub_26A84();
      v14 = COERCE_DOUBLE(
              sub_8FDB4(
                180000000 * v4 * v12 * v13,
                180000000 * v4 * v12 * (v13 >> 31)
              + v13 * ((unsigned __int64)(180000000LL * v4 * v12) >> 32)
              + (((unsigned int)(180000000 * v4 * v12) * (unsigned __int64)(unsigned int)v13) >> 32)));
      v15 = (unsigned int)dword_B308C > 3;
      v16 = (int)(v14 * 1.45519152e-11);
      v62[v5] = v16;
      if ( v15 )
      {
        snprintf(s, 0x800u, "ideal_nonce_num %d\n", (int)(v14 * 1.45519152e-11));
        sub_3B6AC(3, s, 0, v39);
      }
      v17 = 0;
      v18 = 0;
      v19 = v59;
      v20 = v58;
      v21 = v4 - dword_B305C;
      do
      {
        v22 = v18++;
        if ( sub_26C0C(v22) && *v20 <= 39 && (double)*v19 > (double)v16 * 0.98 )
          ++v17;
        v20 += 15;
        v19 += 15;
      }
      while ( v18 != 4 );
      if ( sub_26BFC() <= v17 )
        break;
      ++v5;
      v3 = v4;
      ++v58;
      ++v59;
      v23 = dword_B3058 > v5;
      if ( v5 > 14 )
        v23 = 0;
      if ( !v23 )
      {
        v40 = v5;
        goto LABEL_45;
      }
      v4 = v21;
      if ( (unsigned int)dword_B308C > 3 )
      {
LABEL_33:
        snprintf(s, 0x800u, "level %d, freq_curr %d, freq_next %d\n", v5, v3, v4);
        sub_3B6AC(3, s, 0, v24);
      }
    }
    v40 = v5 + 1;
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "all chain tuing done\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)"ing done\n");
    }
  }
LABEL_45:
  sub_27C84(255);
  v41 = (int *)v63;
  v42 = (int *)v64;
  v43 = 0;
  v60 = v4;
  do
  {
    if ( sub_26C0C(v43) )
    {
      if ( v40 <= 0 )
      {
        v51 = v40 - 1;
      }
      else
      {
        v44 = v41;
        v45 = 0x7FFFFFFF;
        do
        {
          v47 = *v44++;
          v46 = v47;
          if ( v45 >= v47 )
            v45 = v46;
        }
        while ( v44 != &v41[v40] );
        v48 = v41 - 1;
        v49 = v62;
        v50 = v42;
        v51 = 0;
        v52 = v45;
        while ( 1 )
        {
          v54 = v48[1];
          ++v48;
          v53 = v54;
          if ( v54 <= 39 && (double)*v50 > (double)*v49 * 0.98 )
            break;
          if ( (double)v53 < (double)v52 * 1.25 && (double)*v50 > (double)*v49 * 0.98 )
            break;
          ++v51;
          ++v50;
          ++v49;
          if ( v51 == v40 )
          {
            --v51;
            break;
          }
        }
      }
      v55 = dword_534B54 - dword_B305C * v51;
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "chain %d best level %d, best freq %d\n", v43, v51, v55);
        sub_3B6AC(3, s, 0, v57);
      }
      sub_23DC4(v43, (unsigned __int8)byte_534B58, v60, v55, 0);
    }
    ++v43;
    v41 += 15;
    v42 += 15;
  }
  while ( v43 != 4 );
  byte_B3068 = v61;
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "tuning freq end\n");
    sub_3B6AC(3, s, 0, *(_DWORD *)"end\n");
  }
  return 0;
}
