unsigned int __fastcall sub_23FD0(unsigned int *a1, int a2, int a3)
{
  float v3; // s0
  int v6; // r4
  float v7; // s18
  size_t v8; // r5
  unsigned int *v9; // r7
  unsigned int *v10; // r8
  int *v11; // r9
  unsigned int *v12; // r6
  int i; // r7
  int j; // r4
  unsigned int v15; // r3
  int v16; // r3
  int v17; // r11
  int v18; // r9
  int v19; // r0
  size_t v20; // r0
  _DWORD *v21; // r7
  int v22; // r4
  int v23; // r0
  int v24; // r6
  int v25; // r5
  int k; // r9
  int v27; // r0
  int v28; // r5
  char *v29; // r5
  size_t v30; // r0
  int v31; // r0
  float v32; // s14
  unsigned int *v33; // r3
  unsigned int v34; // s15
  float v35; // s15
  float v36; // s16
  int m; // r6
  int v38; // r8
  int n; // r4
  int v40; // r5
  float v41; // s0
  int v42; // r0
  char v43; // r0
  unsigned int v45; // r2
  unsigned int v46; // r0
  _DWORD *v47; // r3
  int v48; // r0
  unsigned int v49; // r12
  unsigned int *v50; // r2
  int *v51; // r1
  unsigned int v52; // t1
  int v53; // r0
  int v54; // r3
  int v56; // [sp+14h] [bp-2Ch]
  int v57; // [sp+18h] [bp-28h]
  int v58; // [sp+1Ch] [bp-24h]
  int v59; // [sp+1Ch] [bp-24h]
  unsigned int *v60; // [sp+20h] [bp-20h]
  unsigned int v61; // [sp+28h] [bp-18h]
  int v62; // [sp+30h] [bp-10h] BYREF
  char v63[4]; // [sp+34h] [bp-Ch] BYREF
  int v64; // [sp+38h] [bp-8h]
  int v65; // [sp+3Ch] [bp-4h]
  _DWORD v66[4]; // [sp+40h] [bp+0h] BYREF
  _DWORD v67[4]; // [sp+50h] [bp+10h] BYREF
  _DWORD base[4]; // [sp+60h] [bp+20h] BYREF
  _DWORD v69[511]; // [sp+70h] [bp+30h] BYREF
  int v70; // [sp+86Ch] [bp+82Ch] BYREF
  _DWORD s[1025]; // [sp+870h] [bp+830h] BYREF

  v6 = 0;
  v7 = v3;
  v8 = 0;
  v61 = 0;
  v9 = v66;
  v62 = 0;
  v10 = v67;
  memset(s, 0, 0x1000u);
  v11 = &v70;
  memset(v66, 255, sizeof(v66));
  v64 = 0;
  memset(v67, 0, sizeof(v67));
  memset(base, 0, sizeof(base));
  v65 = 0;
  do
  {
    if ( sub_26C0C(v6) )
    {
      sub_22990(a1, v9, v10, &v62);
      v45 = *v10;
      v46 = v61;
      v47 = &s[v8++];
      if ( v61 >= *v10 )
        v45 = v61;
      *(v47 - 516) = *v9;
      v61 = v45;
      v48 = sub_26A44(v46);
      if ( v48 )
      {
        v49 = *v9;
        v50 = a1 - 1;
        v51 = v11;
        v48 = (int)&a1[v48 - 1];
        do
        {
          v52 = v50[1];
          ++v50;
          v51[1] = v52 - v49;
          ++v51;
        }
        while ( v50 != (unsigned int *)v48 );
      }
      if ( dword_B32C0 == 2 )
        dword_B3DE4[v6] = dword_534B54;
      v59 = v62;
      v53 = sub_26A44(v48);
      dword_B3DF4[v6] = sub_8F588(v59, v53);
    }
    ++v6;
    a1 += 256;
    ++v9;
    ++v10;
    v11 += 256;
  }
  while ( v6 != 4 );
  qsort(base, v8, 4u, (__compar_fn_t)sub_22980);
  sub_2315C(255, a2, a3);
  if ( base[0] != v61 )
  {
    if ( v8 > 1 )
    {
      v12 = base;
      for ( i = 1; i != v8; ++i )
      {
        for ( j = 0; j != 4; ++j )
        {
          if ( sub_26C0C(j) )
          {
            v15 = v12[1];
            if ( v66[j] >= v15 )
              sub_23DC4(j, a2, *v12, v15, a3);
          }
        }
        ++v12;
      }
    }
    v16 = a2;
    v17 = 0;
    v18 = v16;
    v60 = s;
    do
    {
      v19 = sub_26C0C(v17);
      if ( v19 && v66[v17] != v67[v17] )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          snprintf((char *)v69, 0x800u, "chain = %d, start = %d, freq_step = %.2f\n", v17, v66[v17], v7);
          v19 = sub_3B6AC(3, v69, 0, v54);
        }
        v20 = sub_26A44(v19);
        v21 = calloc(v20, 8u);
        if ( v21 )
        {
          v22 = 0;
          v69[0] = 0;
          v69[1] = 0;
          v23 = sub_26A34();
          v24 = v23;
          if ( v23 )
          {
            v56 = v18;
            do
            {
              v25 = sub_26A54();
              if ( v25 )
              {
                for ( k = 0; k != v25; ++k )
                {
                  v27 = k + v22 * sub_26A54();
                  v21[2 * v27 + 1] = v60[v27];
                  v21[2 * v27] = v27;
                }
              }
              v28 = 8 * v22++;
              v29 = (char *)v21 + sub_26A54() * v28;
              v30 = sub_26A54();
              qsort(v29, v30, 8u, (__compar_fn_t)sub_22960);
            }
            while ( v24 != v22 );
            v18 = v56;
          }
          v31 = sub_26A44(v23);
          v32 = 0.0;
          if ( v31 )
          {
            v33 = v60;
            do
            {
              v34 = *v33++;
              v35 = (float)v34;
              if ( v35 > v32 )
                v32 = v35;
            }
            while ( v33 != &v60[v31] );
          }
          if ( (unsigned int)(float)((float)((float)(v7 + v32) - 1.0) / v7) )
          {
            v58 = 0;
            do
            {
              v36 = v7 * (float)(unsigned int)++v58;
              v57 = sub_26A54();
              if ( v57 )
              {
                for ( m = 0; m != v57; ++m )
                {
                  v38 = sub_26A34();
                  if ( v38 )
                  {
                    for ( n = 0; n != v38; ++n )
                    {
                      v40 = v21[2 * m + 2 * n * sub_26A54()];
                      v41 = (float)(unsigned int)v21[2 * m + 1 + 2 * n * sub_26A54()];
                      if ( v36 <= v41 || v7 > (float)(v36 - v41) )
                      {
                        v42 = sub_791C0(v69, v63, 0);
                        BYTE2(v69[1]) = v63[0];
                        v43 = sub_26AB4(v42);
                        sub_283A0(v17, 0, (unsigned __int8)(v43 * v40), v18, v69[0], v69[1]);
                      }
                    }
                  }
                  usleep((__useconds_t)&loc_186A0);
                }
              }
            }
            while ( v58 != (unsigned int)(float)((float)((float)(v7 + v32) - 1.0) / v7) );
          }
          free(v21);
        }
        else if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy((char *)v69, "failed alloc memory!\n");
          sub_3B6AC(3, v69, 0, *(_DWORD *)" memory!\n");
        }
      }
      ++v17;
      v60 += 256;
    }
    while ( v17 != 4 );
  }
  return v61;
}
