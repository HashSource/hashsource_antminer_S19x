int __fastcall sub_2AF23C(_DWORD *a1)
{
  char *v2; // r3
  int v3; // t1
  _DWORD *v4; // r0
  unsigned int v5; // r8
  unsigned __int8 *v6; // r9
  int v7; // r10
  int v8; // r1
  bool v9; // zf
  int v11; // r2
  int v12; // r1
  unsigned __int8 *v13; // r3
  int v14; // t1
  int v15; // r5
  unsigned int v16; // r4
  int v17; // r11
  int v18; // lr
  unsigned __int8 *v19; // r3
  unsigned __int8 *v20; // r1
  int v21; // t1
  unsigned int v22; // r11
  int v23; // r3
  int v24; // r12
  unsigned __int8 *v25; // r4
  int v26; // r0
  int v27; // r1
  int v28; // r12
  int v29; // r3
  int v30; // r2
  size_t v31; // r0
  char *v32; // r0
  char *v33; // r4
  _DWORD *v34; // r0
  unsigned int v35; // r1
  int v36; // [sp+8h] [bp-5Ch]
  unsigned int v37; // [sp+Ch] [bp-58h]
  __int64 v38; // [sp+10h] [bp-54h]
  int v39; // [sp+18h] [bp-4Ch]
  int v40; // [sp+1Ch] [bp-48h]
  int v41; // [sp+20h] [bp-44h]
  int v42; // [sp+24h] [bp-40h]
  int v43; // [sp+28h] [bp-3Ch]
  int v44; // [sp+2Ch] [bp-38h]
  int v45; // [sp+30h] [bp-34h]
  char *format; // [sp+34h] [bp-30h] BYREF
  _BYTE v47[7]; // [sp+38h] [bp-2Ch] BYREF
  unsigned __int8 v48; // [sp+3Fh] [bp-25h] BYREF
  char v49; // [sp+40h] [bp-24h] BYREF
  _BYTE v50[8]; // [sp+41h] [bp-23h] BYREF
  char v51; // [sp+49h] [bp-1Bh] BYREF
  char s[24]; // [sp+4Ch] [bp-18h] BYREF

  if ( !dword_48FC00 )
  {
    dword_48FC00 = 1;
    nullsub_126();
  }
  if ( sub_2A8A04((int)a1, 0, 0) )
    return 0;
  if ( sub_2A87D8((int)&v49, 9u, (int)a1) == 9 )
  {
    if ( v49 == 58 )
    {
      v2 = v50;
      while ( 1 )
      {
        v3 = (unsigned __int8)*v2++;
        if ( aCccccccccccccc[v3] == 99 )
          break;
        if ( &v51 == v2 )
        {
          if ( (unsigned __int8)aCccccccccccccc[v50[7]] + 16 * (unsigned int)(unsigned __int8)aCccccccccccccc[v50[6]] > 5 )
            goto LABEL_23;
          v36 = a1[40];
          v4 = (_DWORD *)sub_2ACBF4((int)a1, 8);
          if ( !v4 || (a1[40] = v4, *v4 = 0, v4[1] = 0, sub_2A8A04((int)a1, 0, 0)) )
          {
LABEL_17:
            v8 = a1[40];
            v9 = v8 == v36;
            if ( v8 != v36 )
              v9 = v8 == 0;
            if ( !v9 )
              sub_2AD1F0((int)a1);
            a1[40] = v36;
            return 0;
          }
          else
          {
            v5 = 0;
            v6 = 0;
            v7 = 1;
            a1[29] = 0;
            v37 = 0;
            v45 = 0;
            v44 = 0;
            format = ".sec%d";
            while ( sub_2A87D8((int)s, 1u, (int)a1) == 1 )
            {
              v11 = (unsigned __int8)s[0];
              if ( s[0] != 13 )
              {
                if ( s[0] == 10 )
                {
                  ++v7;
                }
                else
                {
                  if ( s[0] != 58 )
                  {
LABEL_43:
                    sub_2AF1A0((int)a1, v7, v11, 0);
                    goto LABEL_15;
                  }
                  LODWORD(v38) = sub_2A890C((int)a1);
                  HIDWORD(v38) = v12;
                  if ( sub_2A87D8((int)v47, 8u, (int)a1) != 8 )
                    goto LABEL_15;
                  v13 = (unsigned __int8 *)&format + 3;
                  do
                  {
                    v14 = *++v13;
                    v11 = v14;
                    if ( aCccccccccccccc[v14] == 99 )
                      goto LABEL_43;
                  }
                  while ( &v48 != v13 );
                  v15 = (unsigned __int8)aCccccccccccccc[v47[1]] + 16 * (unsigned __int8)aCccccccccccccc[v47[0]];
                  v16 = 2 * (v15 + 1);
                  v39 = (unsigned __int8)aCccccccccccccc[v47[2]];
                  v17 = (unsigned __int8)aCccccccccccccc[v47[3]];
                  v40 = (unsigned __int8)aCccccccccccccc[v47[4]];
                  v41 = (unsigned __int8)aCccccccccccccc[v47[5]];
                  v42 = (unsigned __int8)aCccccccccccccc[v47[6]];
                  v43 = (unsigned __int8)aCccccccccccccc[v48];
                  if ( v16 >= v5 )
                  {
                    v6 = (unsigned __int8 *)sub_2AB3FC(v6, 2 * (v15 + 1));
                    if ( !v6 )
                      goto LABEL_17;
                    v5 = 2 * (v15 + 1);
                  }
                  if ( v16 != sub_2A87D8((int)v6, 2 * (v15 + 1), (int)a1) )
                    goto LABEL_15;
                  v18 = v16 - 1;
                  v19 = v6 - 1;
                  v20 = v6;
                  do
                  {
                    v21 = *++v19;
                    v11 = v21;
                    if ( aCccccccccccccc[v21] == 99 )
                      goto LABEL_43;
                  }
                  while ( &v6[v16 - 1] != v19 );
                  v22 = v41 + 16 * v40 + ((v17 + 16 * v39) << 8);
                  v23 = v43 + 16 * v42;
                  v24 = v15 + v23 + v22 + (v22 >> 8);
                  if ( v15 )
                  {
                    v25 = &v6[v16 - 2];
                    do
                    {
                      v26 = *v20;
                      v20 += 2;
                      LOBYTE(v24) = v24 + aCccccccccccccc[*(v20 - 1)] + 16 * aCccccccccccccc[v26];
                    }
                    while ( v25 != v20 );
                  }
                  else
                  {
                    v25 = v6;
                    v18 = 1;
                  }
                  v27 = v6[v18];
                  v28 = (unsigned __int8)-(char)v24;
                  if ( v28 != (unsigned __int8)aCccccccccccccc[v27] + 16 * (unsigned __int8)aCccccccccccccc[*v25] )
                  {
                    sub_2A6A5C(
                      "%B:%u: bad checksum in Intel Hex file (expected %u, found %u)",
                      a1,
                      v7,
                      v28,
                      (unsigned __int8)aCccccccccccccc[v27] + 16 * (unsigned __int8)aCccccccccccccc[*v25]);
                    ((void (__fastcall *)(int))loc_2A6C48)(17);
LABEL_15:
                    if ( v6 )
                      free(v6);
                    goto LABEL_17;
                  }
                  switch ( v23 )
                  {
                    case 0:
                      if ( v37 && (v30 = *(_DWORD *)(v37 + 36), v30 + *(_DWORD *)(v37 + 28) == v44 + v45 + v22) )
                      {
                        *(_DWORD *)(v37 + 36) = v15 + v30;
                      }
                      else if ( v15 )
                      {
                        sprintf(s, format, a1[27] + 1);
                        v31 = strlen(s);
                        v32 = (char *)sub_2ACBF4((int)a1, v31 + 1);
                        v33 = v32;
                        if ( !v32 )
                          goto LABEL_15;
                        strcpy(v32, s);
                        v34 = (_DWORD *)sub_2ADBE8((int)a1, v33, 259);
                        v37 = (unsigned int)v34;
                        if ( !v34 )
                          goto LABEL_15;
                        v34[9] = v15;
                        v35 = v44 + v45 + v22;
                        v34[20] = v38 - 1;
                        v34[7] = v35;
                        v34[21] = (unsigned __int64)(v38 - 1) >> 32;
                        v34[8] = v35;
                      }
                      continue;
                    case 1:
                      if ( !a1[29] )
                        a1[29] = v22;
                      goto LABEL_55;
                    case 2:
                      if ( v15 != 2 )
                      {
                        sub_2A6A5C("%B:%u: bad extended address record length in Intel Hex file", a1, v7);
                        ((void (__fastcall *)(int))loc_2A6C48)(17);
                        goto LABEL_15;
                      }
                      v37 = 0;
                      v44 = 16
                          * ((unsigned __int8)aCccccccccccccc[v6[3]]
                           + 16 * (unsigned __int8)aCccccccccccccc[v6[2]]
                           + (((unsigned __int8)aCccccccccccccc[v6[1]] + 16 * (unsigned __int8)aCccccccccccccc[*v6]) << 8));
                      continue;
                    case 3:
                      if ( v15 != 4 )
                      {
                        sub_2A6A5C("%B:%u: bad extended start address length in Intel Hex file", a1, v7);
                        ((void (__fastcall *)(int))loc_2A6C48)(17);
                        goto LABEL_15;
                      }
                      v37 = 0;
                      a1[29] += (unsigned __int8)aCccccccccccccc[v6[7]]
                              + 16 * (unsigned __int8)aCccccccccccccc[v6[6]]
                              + (((unsigned __int8)aCccccccccccccc[v6[5]] + 16 * (unsigned __int8)aCccccccccccccc[v6[4]]) << 8)
                              + 16
                              * ((unsigned __int8)aCccccccccccccc[v6[3]]
                               + 16 * (unsigned __int8)aCccccccccccccc[v6[2]]
                               + (((unsigned __int8)aCccccccccccccc[v6[1]] + 16 * (unsigned __int8)aCccccccccccccc[*v6]) << 8));
                      continue;
                    case 4:
                      if ( v15 != 2 )
                      {
                        sub_2A6A5C("%B:%u: bad extended linear address record length in Intel Hex file", a1, v7);
                        ((void (__fastcall *)(int))loc_2A6C48)(17);
                        goto LABEL_15;
                      }
                      v37 = 0;
                      v45 = ((unsigned __int8)aCccccccccccccc[v6[3]]
                           + 16 * (unsigned __int8)aCccccccccccccc[v6[2]]
                           + (((unsigned __int8)aCccccccccccccc[v6[1]] + 16 * (unsigned __int8)aCccccccccccccc[*v6]) << 8)) << 16;
                      break;
                    case 5:
                      if ( ((v15 - 2) & 0xFFFFFFFD) != 0 )
                      {
                        sub_2A6A5C("%B:%u: bad extended linear start address length in Intel Hex file", a1, v7);
                        ((void (__fastcall *)(int))loc_2A6C48)(17);
                        goto LABEL_15;
                      }
                      v29 = ((unsigned __int8)aCccccccccccccc[v6[3]]
                           + 16 * (unsigned __int8)aCccccccccccccc[v6[2]]
                           + (((unsigned __int8)aCccccccccccccc[v6[1]] + 16 * (unsigned __int8)aCccccccccccccc[*v6]) << 8)) << 16;
                      if ( v15 == 2 )
                      {
                        v37 = 0;
                        a1[29] += v29;
                      }
                      else
                      {
                        v37 = (v15 - 2) & 0xFFFFFFFD;
                        a1[29] = (unsigned __int8)aCccccccccccccc[v6[7]]
                               + 16 * (unsigned __int8)aCccccccccccccc[v6[6]]
                               + (((unsigned __int8)aCccccccccccccc[v6[5]] + 16
                                                                           * (unsigned __int8)aCccccccccccccc[v6[4]]) << 8)
                               + v29;
                      }
                      continue;
                    default:
                      sub_2A6A5C("%B:%u: unrecognized ihex type %u in Intel Hex file", a1, v7);
                      ((void (__fastcall *)(int))loc_2A6C48)(17);
                      goto LABEL_15;
                  }
                }
              }
            }
            if ( sub_2A6910() != 18 )
              goto LABEL_15;
LABEL_55:
            if ( v6 )
              free(v6);
            return a1[1];
          }
        }
      }
    }
    goto LABEL_23;
  }
  if ( sub_2A6910() == 18 )
LABEL_23:
    ((void (__fastcall *)(int))loc_2A6C48)(3);
  return 0;
}
