int sub_31EA4()
{
  float v0; // s0
  int i; // r0
  char v2; // r2
  unsigned int v3; // r9
  int v4; // r7
  int v5; // r5
  int j; // r4
  int v7; // r8
  int v8; // r8
  int v9; // r4
  int v10; // r4
  int v11; // r0
  double v12; // r0
  bool v13; // cc
  int v14; // s16
  int v15; // r4
  int v16; // r11
  int v17; // r10
  int v18; // r8
  int v19; // r0
  int v20; // r3
  int v21; // r0
  int v22; // r1
  int v23; // r3
  _BYTE *v24; // r2
  int v25; // t1
  int v26; // r3
  int v27; // r0
  int *v28; // lr
  int *v29; // r1
  char *v30; // r12
  char *v31; // r0
  int v32; // r2
  int v33; // t1
  int v34; // t1
  int v35; // r3
  int v36; // r4
  int v37; // r9
  _BYTE *v38; // r5
  _BYTE *v39; // r8
  int v41; // r12
  int v42; // r1
  _BYTE *v43; // r3
  int v44; // r2
  int v45; // t1
  _BYTE *v46; // r0
  int v47; // r3
  int v48; // r2
  int v49; // t1
  unsigned int v50; // r7
  int v51; // r3
  int v52; // [sp+8h] [bp-2A54h]
  unsigned int v53; // [sp+8h] [bp-2A54h]
  char v54; // [sp+30h] [bp-2A2Ch]
  _DWORD v55[14]; // [sp+3Ch] [bp-2A20h]
  _BYTE v56[36]; // [sp+74h] [bp-29E8h] BYREF
  _BYTE v57[240]; // [sp+168h] [bp-28F4h] BYREF
  char s[2040]; // [sp+258h] [bp-2804h] BYREF
  _BYTE v59[4096]; // [sp+A58h] [bp-2004h] BYREF
  char v60[4100]; // [sp+1A58h] [bp-1004h] BYREF

  for ( i = prctl(15, "tuning_freq", 0); sub_3F36C(i) != 3; i = sub_3D9D4(1000) )
    ;
  while ( 1 )
  {
    pthread_mutex_lock(&stru_B13FC);
    if ( sub_22178() == dword_4B6CAC )
      break;
    pthread_mutex_unlock(&stru_B13FC);
    sub_3D9D4(1000);
  }
  v2 = byte_AFC00;
  byte_AFC00 = 0;
  v54 = v2;
  pthread_mutex_unlock(&stru_B13FC);
  sub_3D9D4(60000);
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v60, "tuning freq start\n");
    sub_3AF5C(3, v60, 0, *(unsigned __int16 *)"");
  }
  sub_31D10();
  v3 = dword_4B6CC8;
  if ( dword_AFBF0 <= 0 )
  {
    v4 = dword_4B6CC8;
    v36 = 0;
  }
  else
  {
    v52 = 0;
    v4 = dword_4B6CC8;
    v5 = 0;
    if ( (unsigned int)off_AFC24 > 3 )
      goto LABEL_32;
    while ( 1 )
    {
      for ( j = 0; j != 4; ++j )
      {
        if ( sub_266F0(j) )
        {
          v0 = flt_AFE60;
          sub_238DC(j, (unsigned __int8)byte_4B6CCC, v3, v4, 0);
        }
      }
      v7 = 0;
      memcpy(v59, &unk_B4308, sizeof(v59));
      sub_3D9D4(180000);
      do
      {
        if ( sub_266F0(v7) )
        {
          v27 = sub_26540();
          if ( v27 > 0 )
          {
            v28 = (int *)&v59[1024 * v7 + 4 * v27];
            v29 = (int *)&v59[1024 * v7];
            v30 = (char *)&unk_B4304 + 1024 * v7;
            v31 = &v60[1024 * v7];
            do
            {
              v33 = *v29++;
              v32 = v33;
              v34 = *((_DWORD *)v30 + 1);
              v30 += 4;
              *(_DWORD *)v31 = v34 - v32;
              v31 += 4;
            }
            while ( v29 != v28 );
          }
        }
        ++v7;
      }
      while ( v7 != 4 );
      v8 = v52;
      v9 = 0;
      sub_318AC(v4, (int)v60);
      do
      {
        if ( sub_266F0(v9) )
        {
          sub_31C34(v9, (int)v60);
          *(_DWORD *)&v56[v8 + 4] = (int)v0;
          v21 = sub_26540();
          if ( v21 > 0 )
          {
            v22 = 0;
            v23 = 0;
            v24 = &v59[1024 * v9 + 4092];
            do
            {
              ++v23;
              v25 = *((_DWORD *)v24 + 1);
              v24 += 4;
              v22 += v25;
            }
            while ( v21 != v23 );
          }
          else
          {
            v22 = 0;
          }
          v13 = (unsigned int)off_AFC24 > 3;
          *(_DWORD *)&v57[v8] = v22;
          if ( v13 )
          {
            snprintf(s, 0x800u, "chain %d, nonce_stdev %d, nonce_num %d\n", v9, (int)v0, v22);
            sub_3AF5C(3, s, 0, v26);
          }
        }
        ++v9;
        v8 += 60;
      }
      while ( v9 != 4 );
      v10 = sub_26540();
      v11 = sub_26580();
      v12 = sub_8CA4C(180000000 * v4 * v10 * v11, (unsigned __int64)(180000000LL * v4 * v10 * v11) >> 32);
      v13 = (unsigned int)off_AFC24 > 3;
      v14 = (int)(v12 * 1.45519152e-11);
      v55[v5] = v14;
      if ( v13 )
      {
        snprintf(s, 0x800u, "ideal_nonce_num %d\n", v14);
        sub_3AF5C(3, s, 0, v35);
      }
      v15 = 0;
      v16 = v52;
      v17 = 0;
      v18 = v4 - dword_AFBF4;
      do
      {
        v19 = v17++;
        if ( sub_266F0(v19) && *(int *)&v56[v16 + 4] <= 39 && (double)*(int *)&v57[v16] > (double)v14 * 0.98 )
          ++v15;
        v16 += 60;
      }
      while ( v17 != 4 );
      ++v5;
      if ( sub_266E0() <= v15 )
        break;
      if ( dword_AFBF0 <= v5 || (v3 = v4, v52 += 4, v5 == 15) )
      {
        v36 = v5;
        goto LABEL_45;
      }
      v4 = v18;
      if ( (unsigned int)off_AFC24 > 3 )
      {
LABEL_32:
        snprintf(s, 0x800u, "level %d, freq_curr %d, freq_next %d\n", v5, v3, v4);
        sub_3AF5C(3, s, 0, v20);
      }
    }
    v36 = v5;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "all chain tuing done\n");
      sub_3AF5C(3, s, 0, *(_DWORD *)"ing done\n");
    }
  }
LABEL_45:
  v37 = 0;
  v38 = v57;
  v39 = v56;
  sub_2772C(255);
  v53 = v4;
  do
  {
    if ( sub_266F0(v37) )
    {
      v41 = v36 - 1;
      if ( v36 > 0 )
      {
        v42 = 0x7FFFFFFF;
        v43 = v39;
        do
        {
          v45 = *((_DWORD *)v43 + 1);
          v43 += 4;
          v44 = v45;
          if ( v42 >= v45 )
            v42 = v44;
        }
        while ( v43 != &v39[4 * v36] );
        v46 = v39;
        v47 = 0;
        while ( 1 )
        {
          v49 = *((_DWORD *)v46 + 1);
          v46 += 4;
          v48 = v49;
          if ( v49 <= 39 && (double)*(int *)&v38[4 * v47] > (double)(int)v55[v47] * 0.98 )
            break;
          if ( (double)v48 < (double)v42 * 1.25 && (double)*(int *)&v38[4 * v47] > (double)(int)v55[v47] * 0.98 )
            break;
          if ( v36 == ++v47 )
            goto LABEL_62;
        }
        v41 = v47;
      }
LABEL_62:
      v50 = dword_4B6CC8 - dword_AFBF4 * v41;
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(s, 0x800u, "chain %d best level %d, best freq %d\n", v37, v41, dword_4B6CC8 - dword_AFBF4 * v41);
        sub_3AF5C(3, s, 0, v51);
      }
      sub_238DC(v37, (unsigned __int8)byte_4B6CCC, v53, v50, 0);
    }
    ++v37;
    v38 += 60;
    v39 += 60;
  }
  while ( v37 != 4 );
  byte_AFC00 = v54;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(s, "tuning freq end\n");
    sub_3AF5C(3, s, 0, *(_DWORD *)"end\n");
  }
  return 0;
}
