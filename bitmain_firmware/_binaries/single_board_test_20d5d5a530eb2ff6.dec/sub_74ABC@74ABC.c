int sub_74ABC()
{
  int result; // r0
  int v1; // r5
  int v2; // r0
  unsigned int v3; // r5
  bool v4; // cc
  unsigned __int8 v5; // r5
  unsigned __int8 v6; // r8
  char v7; // r7
  bool v8; // cc
  int v9; // r7
  int v10; // r0
  _QWORD *v11; // r3
  char *v12; // r2
  char v13; // t1
  int v14; // r0
  unsigned __int64 *v15; // r1
  int v16; // r2
  int v17; // t1
  char *v18; // r3
  __int64 v19; // r2
  unsigned int v20; // r7
  int v21; // r9
  unsigned __int64 *v22; // r6
  int v23; // r2
  __int64 v24; // r10
  _BYTE *v25; // r3
  int v26; // t1
  int v27; // r11
  __int16 v28; // r10
  unsigned int v29; // r2
  bool v30; // cc
  int v31; // r8
  int v32; // r7
  int v33; // r10
  int v34; // s15
  double v35; // d0
  unsigned __int64 *v36; // r5
  double *v37; // r8
  double *v38; // r9
  double v39; // d0
  int v40; // r3
  int v41; // t1
  int v42; // t1
  _QWORD *v43; // r2
  __int16 v44; // r3
  __int16 v45; // r0
  __int16 v46; // t1
  char *v47; // r3
  char *v48; // r2
  char v49; // t1
  double *v50; // r2
  int v51; // r3
  int v52; // s15
  double *v53; // r3
  double *v54; // r2
  int v55; // t1
  double v56; // d6
  int v57; // r0
  int v58; // [sp+Ch] [bp-870h]
  int v59; // [sp+10h] [bp-86Ch] BYREF
  __int16 v60; // [sp+14h] [bp-868h]
  char v61; // [sp+16h] [bp-866h]
  char v62; // [sp+17h] [bp-865h]
  unsigned __int8 v63[6]; // [sp+18h] [bp-864h] BYREF
  __int16 v64; // [sp+1Eh] [bp-85Eh] BYREF
  unsigned __int64 v65; // [sp+20h] [bp-85Ch] BYREF
  unsigned int v66; // [sp+28h] [bp-854h]
  unsigned __int8 v67; // [sp+2Ch] [bp-850h]
  _BYTE v68[15]; // [sp+2Dh] [bp-84Fh] BYREF
  unsigned __int8 v69; // [sp+3Ch] [bp-840h]
  unsigned __int8 v70; // [sp+3Dh] [bp-83Fh]
  _BYTE v71[2]; // [sp+3Eh] [bp-83Eh] BYREF
  _QWORD v72[7]; // [sp+40h] [bp-83Ch] BYREF
  char s[2052]; // [sp+78h] [bp-804h] BYREF

  result = dword_65E460;
  if ( !dword_65E460 || !dword_65E464 )
  {
    v61 = 2;
    v59 = 0;
    v62 = 0;
    v60 = 1;
    pthread_mutex_lock(&stru_65E448);
    v1 = sub_76574(&v59);
    pthread_mutex_unlock(&stru_65E448);
    if ( v1 >= 0 )
    {
      dword_65E460 = v1;
      dword_65E464 = 1;
      v2 = sub_7495C();
      v1 = v2;
      if ( v2 >= 0 )
      {
        dword_65E468 = v2;
        snprintf(s, 0x800u, "power open power_version = 0x%x\n", v2);
        nullsub_8();
        v3 = dword_65E468;
        if ( dword_65E468 == 193 )
        {
          v57 = sub_744D8(dword_65E460);
          snprintf(s, 0x800u, "power fw_version = 0x%x\n", v57);
          nullsub_8();
          v3 = dword_65E468;
        }
        memset(dword_65E470, 0, 0x160u);
        if ( (unsigned __int16)v3 == 113 )
          goto LABEL_25;
        if ( (unsigned __int16)v3 > 0x71u )
        {
          if ( (unsigned __int16)v3 <= 0x78u )
          {
            if ( (unsigned __int16)v3 < 0x75u && (unsigned __int16)v3 != 115 )
              goto LABEL_18;
            goto LABEL_25;
          }
          if ( (unsigned __int16)v3 != 193 )
            goto LABEL_18;
        }
        else if ( (unsigned __int16)v3 != 98 )
        {
          if ( (unsigned __int16)v3 > 0x62u )
          {
            if ( (unsigned int)(unsigned __int16)v3 - 100 > 2 )
              goto LABEL_18;
            goto LABEL_12;
          }
          if ( (unsigned __int16)v3 != 65 )
            goto LABEL_18;
LABEL_25:
          v8 = v3 > 0x62;
          if ( v3 != 98 )
            v8 = v3 - 100 > 2;
          if ( !v8 )
          {
            v7 = 64;
            goto LABEL_55;
          }
          v6 = 108;
          v5 = 64;
LABEL_30:
          v9 = 0;
          memset(v72, 0, 0x32u);
          v63[4] = v5;
          v64 = v6;
          v63[0] = 85;
          v63[1] = -86;
          v63[5] = 32;
          v63[2] = 6;
          v63[3] = 6;
          if ( dword_65E464 || (v9 = sub_74ABC(), v9 >= 0) )
          {
            v10 = sub_73B38(dword_65E460, v63, 8u, (unsigned __int8 *)v72, 0x27u);
            v11 = (_QWORD *)((char *)v72 + 4);
            v12 = (char *)&v64 + 1;
            if ( v10 )
            {
              strcpy(s, "set DA conversion N failed\n");
              nullsub_8();
            }
            else
            {
              do
              {
                v13 = *((_BYTE *)v11 + 1);
                v11 = (_QWORD *)((char *)v11 + 1);
                *++v12 = v13;
              }
              while ( v11 != (_QWORD *)((char *)&v72[4] + 4) );
              if ( !v9 )
              {
LABEL_35:
                v14 = 255;
                v15 = &v65;
                v16 = 255;
                do
                {
                  v17 = *(unsigned __int8 *)v15;
                  v15 = (unsigned __int64 *)((char *)v15 + 1);
                  v18 = (char *)&dword_1A5560 + (v17 ^ v16);
                  v16 = (unsigned __int8)v18[156] ^ v14;
                  v14 = (unsigned __int8)v18[412];
                }
                while ( v15 != (unsigned __int64 *)v71 );
                if ( (unsigned __int16)(v71[1] + (v71[0] << 8)) == (v16 | (v14 << 8)) )
                {
                  memset(s, 0, 18);
                  v19 = _byteswap_uint64(v65);
                  v20 = bswap32(v66);
                  v72[0] = v19;
                  HIDWORD(v19) &= 0x1FFFFFFu;
                  v21 = 0;
                  v22 = (unsigned __int64 *)v68;
                  sub_7486C((int)s, 0xCu, v19);
                  sub_7486C((int)&s[11], 7u, v20);
                  v23 = (unsigned __int16)(v70 + (v69 << 8));
                  v24 = 138547333LL * (unsigned __int16)(v70 + (v69 << 8));
                  LOWORD(v24) = (HIDWORD(v24) + ((unsigned int)(v23 - HIDWORD(v24)) >> 1)) >> 4;
                  dword_65E470[0] = *(_DWORD *)s;
                  dword_65E470[1] = *(_DWORD *)&s[4];
                  dword_65E470[2] = *(_DWORD *)&s[8];
                  dword_65E470[3] = *(_DWORD *)&s[12];
                  v25 = v68;
                  word_65E480 = *(_WORD *)&s[16];
                  dword_65E5C8 = 100 * ((unsigned __int16)v24 % 0xCu)
                               + 100
                               + 10000 * ((unsigned __int16)(v70 + (v69 << 8)) / 0x174u)
                               + (unsigned __int16)(v23 - 31 * v24)
                               + 1;
                  while ( 1 )
                  {
                    v26 = (char)*++v25;
                    if ( v26 == -128 )
                      break;
                    if ( ++v21 == 14 )
                    {
                      v27 = 15;
                      goto LABEL_42;
                    }
                  }
                  v27 = v21 + 1;
LABEL_42:
                  dword_65E484 = v27;
                  v28 = v68[0] + (v67 << 8);
                  v29 = dword_65E468 - 100;
                  v30 = (unsigned int)dword_65E468 > 0x62;
                  if ( dword_65E468 != 98 )
                    v30 = v29 > 2;
                  v31 = !v30;
                  v58 = v28;
                  v32 = v28;
                  if ( v30 )
                  {
                    if ( (unsigned int)(v21 - 1) <= 0xFE )
                    {
                      v33 = 6677639;
                      do
                      {
                        v34 = v31++;
                        v35 = (double)v34 * (255.0 / (double)(v27 - 1));
                        round();
                        *(_BYTE *)++v33 = (unsigned int)v35;
                      }
                      while ( v31 != v27 );
                      sub_74528(LOBYTE(dbl_65E488));
                      v36 = (unsigned __int64 *)((char *)&v65 + v21 + 13);
                      v37 = &dbl_65E488;
                      v38 = (double *)&unk_65E530;
                      v39 = (double)v58 / 1000.0 + v35;
                      dbl_65E528 = v39;
                      do
                      {
                        v41 = *((char *)v22 + 1);
                        v22 = (unsigned __int64 *)((char *)v22 + 1);
                        v40 = v41;
                        v42 = *((unsigned __int8 *)v37 + 1);
                        v37 = (double *)((char *)v37 + 1);
                        v32 += v40;
                        sub_74528(v42);
                        v39 = (double)v32 / 1000.0 + v39;
                        *v38++ = v39;
                      }
                      while ( v22 != v36 );
LABEL_54:
                      byte_65E46C = 1;
                      strcpy(s, "power is Calibrated\n");
                      nullsub_8();
                      return 0;
                    }
                  }
                  else if ( v27 != 1 && (dword_65E468 == 98 || (unsigned int)dword_65E468 >= 0x62 && v29 <= 2) )
                  {
                    v50 = &dbl_65E488;
                    v51 = 0;
                    do
                    {
                      v52 = v51++;
                      *v50++ = 21.6 - (double)v52 * (4.6 / (double)(v27 - 1));
                    }
                    while ( v51 != v27 );
                    dbl_65E528 = dbl_65E488 + (double)v28 / 1000.0;
                    if ( v21 )
                    {
                      v53 = (double *)&unk_65E490;
                      v54 = (double *)&unk_65E530;
                      do
                      {
                        v55 = *((char *)v22 + 1);
                        v22 = (unsigned __int64 *)((char *)v22 + 1);
                        v56 = *v53++;
                        v32 += v55;
                        *v54++ = (double)v32 / 1000.0 + v56;
                      }
                      while ( (unsigned __int64 *)((char *)&v65 + v21 + 13) != v22 );
                    }
                    goto LABEL_54;
                  }
                }
              }
            }
          }
          else
          {
            snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_read");
            nullsub_8();
          }
LABEL_18:
          byte_65E46C = 0;
          strcpy(s, "power is not Calibrated\n");
          nullsub_8();
          return 0;
        }
LABEL_12:
        v4 = v3 > 0x62;
        if ( v3 != 98 )
          v4 = v3 - 100 > 2;
        if ( !v4 )
        {
          v7 = 0;
LABEL_55:
          LODWORD(v72[0]) = 101231189;
          LOWORD(v72[1]) = 0;
          memset(s, 0, 0x48u);
          v43 = v72;
          v44 = 0;
          BYTE4(v72[0]) = v7;
          *(_WORD *)((char *)v72 + 5) = 0x2000;
          HIBYTE(v72[0]) = 0;
          do
          {
            v45 = *((unsigned __int8 *)v43 + 3);
            v46 = *((unsigned __int8 *)v43 + 2);
            v43 = (_QWORD *)((char *)v43 + 2);
            v44 += v46 + (v45 << 8);
          }
          while ( v43 != (_QWORD *)((char *)v72 + 6) );
          LOWORD(v72[1]) = v44;
          if ( !sub_73C90(dword_65E460, (unsigned __int8 *)v72, 0xAu, (unsigned __int8 *)s, 0x28u) )
          {
            v47 = &s[5];
            v48 = (char *)&v64 + 1;
            do
            {
              v49 = *++v47;
              *++v48 = v49;
            }
            while ( &s[37] != v47 );
            goto LABEL_35;
          }
          goto LABEL_18;
        }
        v5 = 0;
        v6 = 44;
        goto LABEL_30;
      }
      strcpy(s, "power open power_version < 0 will close power\n");
      nullsub_8();
      if ( dword_65E464 )
      {
        sub_74814();
        return v1;
      }
    }
    return v1;
  }
  return result;
}
