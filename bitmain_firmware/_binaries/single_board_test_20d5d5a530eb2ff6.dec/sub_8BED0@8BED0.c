_DWORD *__fastcall sub_8BED0(_DWORD *a1)
{
  unsigned int *v2; // r3
  unsigned int v3; // r2
  int v5; // r0
  int v6; // r0
  _DWORD *v7; // r5
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r7
  int v13; // r9
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r2
  int v19; // r0
  unsigned __int8 *v20; // r0
  int v21; // r1
  int v22; // r0
  int v23; // r7
  int v24; // r6
  int v25; // r0
  int v26; // r0
  int v27; // r2
  int v28; // r6
  int v29; // r0
  int v30; // r0
  int v31; // r3
  int v32; // r1
  int v33; // r2
  int v34; // r3
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r9
  int v39; // r1
  int v40; // r2
  int v41; // r10
  int v42; // r6
  int v43; // r0
  int v44; // r0
  int v45; // r7
  int v46; // r2
  bool v47; // cc
  int v48; // r7
  int v49; // r1
  int v50; // r2
  int v51; // r9
  int v52; // r4
  int v53; // r0
  int v54; // r0
  int v55; // r6
  int v56; // r2
  _DWORD *v57; // r0

  if ( sub_95448(a1) && sub_95464(a1) )
  {
    v5 = sub_8AAA4((int)a1);
    v6 = sub_8BB18(v5);
    v7 = (_DWORD *)v6;
    if ( !v6 )
      return v7;
    if ( a1[285] )
    {
      if ( !sub_88644(v6, a1) )
        goto LABEL_15;
    }
    else
    {
      if ( !sub_8A564(v6, a1[1]) )
        goto LABEL_15;
      if ( a1[257] )
      {
        sub_84370(v7[257]);
        v57 = sub_8440C(a1[257]);
        v7[257] = v57;
        if ( !v57 )
          goto LABEL_15;
      }
      if ( !sub_87AB4((int)v7, a1 + 277, a1[276]) )
        goto LABEL_15;
    }
    if ( sub_10C010(a1[38], v8, v9) > 0 )
    {
      v12 = 0;
      v13 = sub_10C010(a1[38], v10, v11);
      sub_10BFDC(v7[38], sub_878F8);
      v7[38] = 0;
      sub_10BFDC(v7[39], X509_free);
      v14 = v7[41];
      v7[39] = 0;
      X509_free(v14, v15, v16);
      v17 = v7[308];
      v18 = a1[45];
      v7[41] = 0;
      v7[40] = 0;
      v7[37] = v17 + 512;
      v7[45] = v18;
      v7[43] = -1;
      v7[44] = -1;
      v19 = sub_10BF44(0, v13);
      v7[38] = v19;
      if ( !v19 )
      {
        sub_D0048(20, 403, 65, "ssl/ssl_lib.c", 224);
        goto LABEL_15;
      }
      if ( v13 > 0 )
      {
        do
        {
          v20 = (unsigned __int8 *)sub_10C01C(a1[38], v12++);
          if ( sub_87D84(v7, *v20, v20[1], v20[2], *((_BYTE **)v20 + 1), *((_DWORD *)v20 + 2)) <= 0 )
            goto LABEL_15;
        }
        while ( v13 != v12 );
      }
    }
    v21 = a1[317];
    v22 = a1[318];
    v23 = a1[315];
    *v7 = *a1;
    v24 = a1[316];
    v7[317] = v21;
    v7[318] = v22;
    v7[316] = v24;
    v7[315] = v23;
    v25 = sub_890D4(a1, 50, 0, 0);
    sub_890D4(v7, 51, v25, 0);
    v26 = sub_885A8((int)a1);
    sub_885A0((int)v7, v26);
    v27 = a1[33];
    v7[34] = a1[34];
    v7[33] = v27;
    v28 = sub_8855C((int)a1);
    v29 = sub_8856C((int)a1);
    sub_8858C((int)v7, v28, v29);
    sub_88564((int)a1);
    sub_88598((int)v7);
    v7[289] = a1[289];
    v30 = sub_8ABF0((int)a1);
    sub_8ABE8((int)v7, v30);
    if ( sub_DC054(0, v7 + 311, a1 + 311) )
    {
      v31 = a1[6];
      v7[7] = a1[7];
      if ( v31 )
      {
        if ( a1[7] )
          sub_8B1D4(v7);
        else
          sub_8B300(v7);
      }
      v32 = a1[35];
      v33 = a1[975];
      v34 = a1[976];
      v7[10] = a1[10];
      v7[35] = v32;
      v7[975] = v33;
      v7[976] = v34;
      sub_1137F0(v7[36]);
      v35 = a1[47];
      if ( !v35 || (v36 = sub_10BDE0(v35), (v7[47] = v36) != 0) )
      {
        v37 = a1[48];
        if ( !v37 || (v37 = sub_10BDE0(v37), (v7[48] = v37) != 0) )
        {
          v38 = a1[312];
          if ( v38 )
          {
            v41 = sub_10BFCC(v37);
            if ( v41 )
            {
              v42 = 0;
              while ( 1 )
              {
                v47 = v42 < sub_10C010(v38, v39, v40);
                v37 = v38;
                if ( !v47 )
                {
                  v7[312] = v41;
                  goto LABEL_31;
                }
                v43 = sub_10C01C(v38, v42);
                v44 = sub_115E5C(v43);
                v45 = v44;
                if ( !v44 )
                  break;
                v46 = v42++;
                if ( !sub_10BA90(v41, v44, v46) )
                {
                  X509_NAME_free(v45);
                  break;
                }
              }
              sub_10BFDC(v41, X509_NAME_free);
            }
          }
          else
          {
            v7[312] = 0;
LABEL_31:
            v48 = a1[313];
            if ( !v48 )
            {
              v7[313] = 0;
              return v7;
            }
            v51 = sub_10BFCC(v37);
            if ( v51 )
            {
              v52 = 0;
              while ( 1 )
              {
                if ( v52 >= sub_10C010(v48, v49, v50) )
                {
                  v7[313] = v51;
                  return v7;
                }
                v53 = sub_10C01C(v48, v52);
                v54 = sub_115E5C(v53);
                v55 = v54;
                if ( !v54 )
                  break;
                v56 = v52++;
                if ( !sub_10BA90(v51, v54, v56) )
                {
                  X509_NAME_free(v55);
                  break;
                }
              }
              sub_10BFDC(v51, X509_NAME_free);
            }
          }
        }
      }
    }
LABEL_15:
    sub_8B45C((int)v7);
    return 0;
  }
  v2 = a1 + 314;
  do
    v3 = __ldrex(v2);
  while ( __strex(v3 + 1, v2) );
  return a1;
}
