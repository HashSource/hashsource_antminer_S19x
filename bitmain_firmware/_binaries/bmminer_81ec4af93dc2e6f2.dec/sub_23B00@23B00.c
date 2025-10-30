unsigned int __fastcall sub_23B00(int a1, int a2, int a3)
{
  float v3; // s0
  size_t v5; // r7
  int v6; // r4
  unsigned int *v7; // r5
  int i; // r6
  int j; // r4
  unsigned int v10; // r3
  int k; // r10
  int v12; // r0
  int v13; // r3
  size_t v14; // r0
  _DWORD *v15; // r7
  int v16; // r4
  unsigned int *v17; // r5
  int v18; // r0
  int v19; // r11
  int v20; // r6
  int m; // r10
  int v22; // r0
  int v23; // r6
  char *v24; // r6
  size_t v25; // r0
  int v26; // r0
  float v27; // s14
  unsigned int *v28; // r3
  unsigned int v29; // s15
  float v30; // s15
  float v31; // s16
  int n; // r6
  int v33; // r8
  int ii; // r4
  int v35; // r5
  float v36; // s15
  int v37; // r0
  char v38; // r0
  unsigned int *v40; // r5
  unsigned int v41; // r0
  unsigned int v42; // r2
  _BYTE *v43; // r3
  int v44; // r0
  unsigned int *v45; // r2
  int v46; // r1
  _DWORD *v47; // r6
  unsigned int v48; // t1
  int v49; // r5
  int v50; // r0
  int v53; // [sp+18h] [bp-185Ch]
  int v54; // [sp+18h] [bp-185Ch]
  unsigned int v55; // [sp+20h] [bp-1854h]
  unsigned int v56; // [sp+24h] [bp-1850h]
  int v57; // [sp+30h] [bp-1844h] BYREF
  char v58[4]; // [sp+34h] [bp-1840h] BYREF
  int v59; // [sp+38h] [bp-183Ch]
  int v60; // [sp+3Ch] [bp-1838h]
  _DWORD v61[4]; // [sp+40h] [bp-1834h] BYREF
  _DWORD v62[4]; // [sp+50h] [bp-1824h] BYREF
  _DWORD base[4]; // [sp+60h] [bp-1814h] BYREF
  _DWORD v64[512]; // [sp+70h] [bp-1804h] BYREF
  _BYTE s[4100]; // [sp+870h] [bp-1004h] BYREF

  v5 = 0;
  v6 = 0;
  v56 = 0;
  v57 = 0;
  memset(s, 0, 0x1000u);
  memset(v62, 0, sizeof(v62));
  memset(base, 0, sizeof(base));
  v59 = 0;
  v60 = 0;
  memset(v61, 255, sizeof(v61));
  do
  {
    if ( sub_266F0(v6) )
    {
      v40 = (unsigned int *)(a1 + (v6 << 10));
      sub_22458(v40, &v61[v6], &v62[v6], &v57);
      v41 = v56;
      v42 = v62[v6];
      v43 = &s[4 * v5++];
      if ( v56 >= v42 )
        v42 = v56;
      *((_DWORD *)v43 - 516) = v61[v6];
      v56 = v42;
      v44 = sub_26540(v41);
      if ( v44 )
      {
        v45 = &v40[v44];
        v46 = v61[v6];
        v47 = &s[1024 * v6];
        do
        {
          v48 = *v40++;
          *v47++ = v48 - v46;
        }
        while ( v40 != v45 );
      }
      if ( dword_AFE58 == 2 )
        dword_B1070[v6] = dword_4B6CC8;
      v49 = v57;
      v50 = sub_26540(v44);
      dword_B1080[v6] = sub_8C218(v49, v50);
    }
    ++v6;
  }
  while ( v6 != 4 );
  qsort(base, v5, 4u, (__compar_fn_t)sub_22448);
  sub_22C20(255, a2, a3);
  if ( base[0] != v56 )
  {
    if ( v5 > 1 )
    {
      v7 = base;
      for ( i = 1; i != v5; ++i )
      {
        for ( j = 0; j != 4; ++j )
        {
          if ( sub_266F0(j) )
          {
            v10 = v7[1];
            if ( v61[j] >= v10 )
              sub_238DC(j, a2, *v7, v10, a3);
          }
        }
        ++v7;
      }
    }
    for ( k = 0; k != 4; ++k )
    {
      v12 = sub_266F0(k);
      if ( v12 && v61[k] != v62[k] )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          snprintf((char *)v64, 0x800u, "chain = %d, start = %d, freq_step = %.2f\n", k, v61[k], v3);
          v12 = sub_3AF5C(3, v64, 0, v13);
        }
        v14 = sub_26540(v12);
        v15 = calloc(v14, 8u);
        if ( v15 )
        {
          v16 = 0;
          v17 = (unsigned int *)&s[1024 * k];
          v64[0] = 0;
          v64[1] = 0;
          v18 = sub_26530();
          v19 = v18;
          if ( v18 )
          {
            v53 = k;
            do
            {
              v20 = sub_26550();
              if ( v20 )
              {
                for ( m = 0; m != v20; ++m )
                {
                  v22 = m + v16 * sub_26550();
                  v15[2 * v22 + 1] = v17[v22];
                  v15[2 * v22] = v22;
                }
              }
              v23 = 8 * v16++;
              v24 = (char *)v15 + sub_26550() * v23;
              v25 = sub_26550();
              qsort(v24, v25, 8u, (__compar_fn_t)sub_22428);
            }
            while ( v19 != v16 );
            k = v53;
          }
          v26 = sub_26540(v18);
          v27 = 0.0;
          if ( v26 )
          {
            v28 = &v17[v26];
            do
            {
              v29 = *v17++;
              v30 = (float)v29;
              if ( v30 > v27 )
                v27 = v30;
            }
            while ( v28 != v17 );
          }
          if ( (unsigned int)(float)((float)((float)(v3 + v27) - 1.0) / v3) )
          {
            v55 = 0;
            do
            {
              ++v55;
              v54 = sub_26550();
              v31 = (float)v55 * v3;
              if ( v54 )
              {
                for ( n = 0; n != v54; ++n )
                {
                  v33 = sub_26530();
                  if ( v33 )
                  {
                    for ( ii = 0; ii != v33; ++ii )
                    {
                      v35 = v15[2 * n + 2 * ii * sub_26550()];
                      v36 = (float)(unsigned int)v15[2 * n + 1 + 2 * ii * sub_26550()];
                      if ( v31 <= v36 || v3 > (float)(v31 - v36) )
                      {
                        v37 = sub_75D54(v64, v58, 0);
                        BYTE2(v64[1]) = v58[0];
                        v38 = sub_265B0(v37);
                        sub_27E18(k, 0, (unsigned __int8)(v38 * v35), a2, v64[0], v64[1]);
                      }
                    }
                  }
                  usleep((__useconds_t)&off_186A0);
                }
              }
            }
            while ( (unsigned int)(float)((float)((float)(v3 + v27) - 1.0) / v3) != v55 );
          }
          free(v15);
        }
        else if ( (unsigned int)off_AFC24 > 3 )
        {
          strcpy((char *)v64, "failed alloc memory!\n");
          sub_3AF5C(3, v64, 0, *(_DWORD *)" memory!\n");
        }
      }
    }
  }
  return v56;
}
