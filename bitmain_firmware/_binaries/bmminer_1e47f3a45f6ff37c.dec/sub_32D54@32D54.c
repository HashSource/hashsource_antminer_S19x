void __noreturn sub_32D54()
{
  unsigned __int8 *v0; // r11
  int i; // r10
  __time_t tv_sec; // r4
  __suseconds_t tv_usec; // r5
  __time_t v4; // r4
  _BOOL4 v5; // r3
  int v6; // r4
  int v7; // r5
  int v8; // r0
  char *v9; // r3
  int v10; // r8
  int v11; // r4
  unsigned int v12; // r3
  char *v13; // r7
  unsigned int v14; // r8
  int v15; // r5
  int v16; // r0
  int v17; // r6
  int v18; // r7
  int v19; // r3
  int v20; // r0
  int v21; // r11
  int v22; // r2
  int v23; // r9
  int v24; // r3
  int v25; // r1
  int v26; // r3
  int v27; // r0
  int v28; // r5
  char *v29; // r2
  char v30; // r0
  char v31; // r0
  unsigned int v32; // r3
  int v33; // r3
  int v34; // r3
  int v35; // r3
  unsigned __int8 v36; // [sp+24h] [bp-2E48h]
  int v37; // [sp+28h] [bp-2E44h]
  int v38; // [sp+2Ch] [bp-2E40h]
  unsigned int v39; // [sp+30h] [bp-2E3Ch]
  unsigned int v40; // [sp+34h] [bp-2E38h]
  int v41; // [sp+38h] [bp-2E34h]
  int v42; // [sp+3Ch] [bp-2E30h]
  unsigned __int8 *v43; // [sp+40h] [bp-2E2Ch]
  int v44; // [sp+48h] [bp-2E24h]
  _BYTE v45[4]; // [sp+50h] [bp-2E1Ch] BYREF
  _BYTE v46[4]; // [sp+54h] [bp-2E18h] BYREF
  struct timeval tv; // [sp+58h] [bp-2E14h] BYREF
  int v48; // [sp+60h] [bp-2E0Ch] BYREF
  int v49; // [sp+64h] [bp-2E08h]
  _BYTE s[1536]; // [sp+68h] [bp-2E04h] BYREF
  _BYTE v51[1024]; // [sp+668h] [bp-2804h] BYREF
  _BYTE v52[1024]; // [sp+A68h] [bp-2404h] BYREF
  char v53[8196]; // [sp+E68h] [bp-2004h] BYREF

  memset(v51, 0, sizeof(v51));
  memset(v52, 0, sizeof(v52));
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  v45[0] = 0;
  v45[1] = 0;
  v45[2] = 0;
  memset(&v53[2048], 0, 6144);
  memset(s, 0, sizeof(s));
  sleep(0xAu);
  v37 = 0;
  while ( 1 )
  {
    gettimeofday(&tv, 0);
    v0 = v45;
    for ( i = 0; i != 4; ++i )
    {
      if ( !sub_26C0C(i) )
        goto LABEL_4;
      memset(v52, 0, sizeof(v52));
      if ( !sub_38B38(i, 76, v52) )
        goto LABEL_4;
      memset(v51, 0, sizeof(v51));
      if ( !sub_38B38(i, 140, v51) )
        goto LABEL_4;
      v43 = v0;
      v36 = 0;
      v41 = *v0;
      v44 = 0;
      v38 = v41;
      while ( v36 < sub_26A44() )
      {
        v16 = sub_26A54();
        v17 = i << 8;
        v18 = 4 * v36;
        sub_8FA94(v36, v16);
        v19 = 4 * ((i << 8) + v36);
        v20 = *(_DWORD *)&v52[v18];
        v21 = *(_DWORD *)&v53[v19 + 2048];
        v22 = *(_DWORD *)&v53[v19 + 5120];
        v23 = *(_DWORD *)&v51[v18] - v20;
        v40 = v20 - v22;
        v39 = v23 - v21;
        v24 = v37;
        v42 = v22;
        if ( !v25 )
          v24 = 0;
        v37 = v24;
        if ( (unsigned int)dword_B308C > 4 )
        {
          snprintf(v53, 0x800u, "chain[%d] asic[%d] [%d] %d-%d [%d] %d-%d", i, v36, v39, v23, v21, v40, v20, v22);
          sub_3B6AC(4, v53, 0, v26);
        }
        v8 = sub_32CF8(i, (char *)v36);
        v9 = &v53[v17 + v36];
        v10 = (unsigned __int8)*(v9 - 2816);
        v11 = v8;
        if ( *(v9 - 2816) )
          v11 = v8 - 25;
        if ( v21 )
        {
          if ( (double)v39 >= (double)(v11 * sub_26A84()) * 0.7 * 5.0 * 0.000244140625
            && (double)v40 <= (double)(v11 * sub_26A84()) * 0.3 * 5.0 * 0.000244140625
            && v23 - v21 <= (unsigned int)(5 * (5 * v11 * sub_26A84() / 4096)) )
          {
            v53[v17 - 3584 + v36] = 0;
LABEL_21:
            if ( v41 != v38 )
              goto LABEL_22;
LABEL_37:
            if ( v37 >= sub_26A54() - 1 || v44 >= 2 * sub_26A54() )
            {
              if ( (unsigned int)dword_B308C > 3 )
              {
                snprintf(v53, 0x800u, "chain[%d] bad asic num: %d %d %d", i, v37, v44, v41);
                sub_3B6AC(3, v53, 0, v34);
                if ( (unsigned int)dword_B308C > 3 )
                {
                  snprintf(
                    v53,
                    0x800u,
                    "chain[%d] asic[%d] [%d] %d-%d [%d] %d-%d",
                    i,
                    v36,
                    v39,
                    v23,
                    v21,
                    v40,
                    *(_DWORD *)&v52[v18],
                    v42);
                  sub_3B6AC(3, v53, 0, v35);
                }
              }
              v32 = (unsigned __int8)(v41 + 1);
              *v43 = v32;
              if ( v32 > 2 )
              {
                sub_481F0(21, 0);
                sub_458A0(13, "Unbalance happened, waiting!\n");
              }
            }
            goto LABEL_22;
          }
          v29 = &v53[v17 + v36];
          v37 = (unsigned __int8)(v37 + 1);
          v44 = (unsigned __int8)(v44 + 1);
          v12 = (unsigned __int8)(*(v29 - 3584) + 1);
          *(v29 - 3584) = v12;
        }
        else
        {
          v12 = (unsigned __int8)v53[v17 - 3584 + v36];
        }
        if ( v12 <= 4 )
          v10 |= 1u;
        if ( v10 )
          goto LABEL_21;
        v48 = 0;
        v49 = 0;
        v30 = sub_26AB4();
        sub_28314(i, 0, (unsigned __int8)(v30 * v36), (unsigned __int8)byte_534B58);
        sub_791C0(&v48, v46, 0);
        BYTE2(v49) = v46[0];
        v31 = sub_26AB4();
        sub_283A0(i, 0, (unsigned __int8)(v31 * v36), (unsigned __int8)byte_534B58, v48, v49);
        if ( (unsigned int)dword_B308C > 3 )
        {
          snprintf(v53, 0x800u, "chain %d, asic %d, nonce unbalance,  set freq[%d->%d]\n", i, v36, v11, v11 - 25);
          sub_3B6AC(3, v53, 0, v33);
        }
        v53[v17 - 2816 + v36] = 1;
        if ( v41 == v38 )
          goto LABEL_37;
LABEL_22:
        v13 = &v53[v18];
        v14 = *((_DWORD *)v13 - 512);
        if ( v14 >= -100 * (5 * v11 * sub_26A84() / 4096) - 16 )
        {
          v27 = sub_26AB4();
          sub_7A7B0((unsigned __int8)i, v27 * v36);
          v28 = 4 * (v17 + v36);
          *(_DWORD *)&v53[v28 + 2048] = 0;
          *(_DWORD *)&v53[v28 + 5120] = 0;
        }
        else
        {
          v15 = 4 * (v17 + v36);
          *(_DWORD *)&v53[v15 + 5120] = *((_DWORD *)v13 - 256);
          *(_DWORD *)&v53[v15 + 2048] = v23;
        }
        v38 = *v43;
        ++v36;
      }
      v0 = v43;
      if ( v38 == v41 )
        *v43 = 0;
LABEL_4:
      ++v0;
    }
    tv_sec = tv.tv_sec;
    tv_usec = tv.tv_usec;
    gettimeofday(&tv, 0);
    v4 = tv_sec + 5;
    if ( v4 == tv.tv_sec )
      v5 = tv_usec > tv.tv_usec;
    else
      v5 = v4 > tv.tv_sec;
    if ( v5 )
    {
      v6 = v4 - tv.tv_sec;
      v7 = tv_usec - tv.tv_usec;
      if ( v7 < 0 )
      {
        --v6;
        v7 += 1000000;
      }
      usleep(v7 + (_DWORD)&unk_F4240 * v6);
    }
  }
}
