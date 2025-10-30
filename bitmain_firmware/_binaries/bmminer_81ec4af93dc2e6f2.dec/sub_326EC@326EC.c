void __noreturn sub_326EC()
{
  int v0; // r11
  __time_t tv_sec; // r4
  __suseconds_t tv_usec; // r5
  __time_t v3; // r4
  _BOOL4 v4; // r3
  int v5; // r4
  int v6; // r5
  unsigned __int8 v7; // r10
  int v8; // r0
  int v9; // r4
  char *v10; // r3
  int v11; // r7
  unsigned int v12; // r3
  unsigned int v13; // r9
  int v14; // r5
  int v15; // r6
  int v16; // r4
  int v17; // r0
  int v18; // r3
  int v19; // r0
  int v20; // r2
  int v21; // r1
  int v22; // r8
  int v23; // r9
  int v24; // r3
  int v25; // r0
  int v26; // r5
  char *v27; // r2
  unsigned int v28; // r3
  char v29; // r0
  char v30; // r0
  int v31; // r3
  int v32; // r3
  int v33; // r3
  int v34; // [sp+24h] [bp-2E48h]
  int v35; // [sp+28h] [bp-2E44h]
  int v36; // [sp+2Ch] [bp-2E40h]
  unsigned int v37; // [sp+30h] [bp-2E3Ch]
  int v38; // [sp+38h] [bp-2E34h]
  unsigned int v39; // [sp+3Ch] [bp-2E30h]
  int v40; // [sp+40h] [bp-2E2Ch]
  int v41; // [sp+44h] [bp-2E28h]
  __int16 v42; // [sp+50h] [bp-2E1Ch]
  char v43; // [sp+52h] [bp-2E1Ah]
  _BYTE v44[4]; // [sp+54h] [bp-2E18h] BYREF
  struct timeval tv; // [sp+58h] [bp-2E14h] BYREF
  int v46; // [sp+60h] [bp-2E0Ch] BYREF
  int v47; // [sp+64h] [bp-2E08h]
  _BYTE s[1536]; // [sp+68h] [bp-2E04h] BYREF
  _BYTE v49[1024]; // [sp+668h] [bp-2804h] BYREF
  _BYTE v50[1024]; // [sp+A68h] [bp-2404h] BYREF
  char v51[8196]; // [sp+E68h] [bp-2004h] BYREF

  memset(v49, 0, sizeof(v49));
  memset(v50, 0, sizeof(v50));
  v42 = 0;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  v43 = 0;
  v34 = 0;
  memset(&v51[2048], 0, 6144);
  memset(s, 0, sizeof(s));
  sleep(0xAu);
  while ( 1 )
  {
    v0 = 0;
    gettimeofday(&tv, 0);
    do
    {
      if ( !sub_266F0(v0) )
        goto LABEL_4;
      memset(v50, 0, sizeof(v50));
      if ( !sub_384FC(v0, 76, v50) )
        goto LABEL_4;
      memset(v49, 0, sizeof(v49));
      if ( !sub_384FC(v0, 140, v49) )
        goto LABEL_4;
      v7 = 0;
      v41 = 0;
      v40 = *((unsigned __int8 *)&v42 + v0);
      v35 = v40;
      while ( v7 < sub_26540() )
      {
        v15 = v0 << 8;
        v16 = 4 * v7;
        v36 = v16;
        v17 = sub_26550();
        sub_8C724(v7, v17);
        v18 = 4 * ((v0 << 8) + v7);
        v19 = *(_DWORD *)&v50[v16];
        v20 = v34;
        if ( !v21 )
          v20 = 0;
        v22 = *(_DWORD *)&v49[v16] - v19;
        v34 = v20;
        v23 = *(_DWORD *)&v51[v18 + 2048];
        v38 = *(_DWORD *)&v51[v18 + 5120];
        v37 = v19 - v38;
        v39 = v22 - v23;
        if ( (unsigned int)off_AFC24 > 4 )
        {
          snprintf(v51, 0x800u, "chain[%d] asic[%d] [%d] %d-%d [%d] %d-%d", v0, v7, v22 - v23, v22, v23, v37, v19, v38);
          sub_3AF5C(4, v51, 0, v24);
        }
        v8 = sub_32690(v0, v7);
        v9 = v8;
        v10 = &v51[v15 + v7];
        v11 = (unsigned __int8)*(v10 - 2816);
        if ( *(v10 - 2816) )
          v9 = v8 - 25;
        if ( v23 )
        {
          if ( (double)v39 >= (double)(v9 * sub_26580()) * 0.7 * 5.0 * 0.000244140625
            && (double)v37 <= (double)(v9 * sub_26580()) * 0.3 * 5.0 * 0.000244140625
            && 5 * (5 * v9 * sub_26580() / 4096) >= (unsigned int)(v22 - v23) )
          {
            v51[v15 - 3584 + v7] = 0;
            goto LABEL_21;
          }
          v27 = &v51[v15 + v7];
          v41 = (unsigned __int8)(v41 + 1);
          v34 = (unsigned __int8)(v34 + 1);
          v12 = (unsigned __int8)(*(v27 - 3584) + 1);
          *(v27 - 3584) = v12;
        }
        else
        {
          v12 = (unsigned __int8)v51[v15 - 3584 + v7];
        }
        if ( v12 <= 4 )
          v11 |= 1u;
        if ( !v11 )
        {
          v46 = 0;
          v47 = 0;
          v29 = sub_265B0();
          sub_27D94(v0, 0, (unsigned __int8)(v29 * v7), (unsigned __int8)byte_4B6CCC);
          sub_75D54(&v46, v44, 0);
          BYTE2(v47) = v44[0];
          v30 = sub_265B0();
          sub_27E18(v0, 0, (unsigned __int8)(v30 * v7), (unsigned __int8)byte_4B6CCC, v46, v47);
          if ( (unsigned int)off_AFC24 > 3 )
          {
            snprintf(v51, 0x800u, "chain %d, asic %d, nonce unbalance,  set freq[%d->%d]\n", v0, v7, v9, v9 - 25);
            sub_3AF5C(3, v51, 0, v33);
          }
          v51[v15 - 2816 + v7] = 1;
        }
LABEL_21:
        if ( v40 != v35 )
          goto LABEL_22;
        if ( v34 < sub_26550() - 1 )
        {
          if ( v41 < 2 * sub_26550() )
            goto LABEL_22;
          if ( (unsigned int)off_AFC24 > 3 )
          {
LABEL_49:
            snprintf(v51, 0x800u, "chain[%d] bad asic num: %d %d %d", v0, v34, v41, v35);
            sub_3AF5C(3, v51, 0, v31);
            if ( (unsigned int)off_AFC24 > 3 )
            {
              snprintf(
                v51,
                0x800u,
                "chain[%d] asic[%d] [%d] %d-%d [%d] %d-%d",
                v0,
                v7,
                v39,
                v22,
                v23,
                v37,
                *(_DWORD *)&v50[v36],
                v38);
              sub_3AF5C(3, v51, 0, v32);
            }
          }
        }
        else if ( (unsigned int)off_AFC24 > 3 )
        {
          goto LABEL_49;
        }
        v28 = (unsigned __int8)(v35 + 1);
        *((_BYTE *)&v42 + v0) = v28;
        if ( v28 > 2 )
        {
          sub_46318(21, 0);
          sub_43B4C(13, "Unbalance happened, waiting!\n");
        }
LABEL_22:
        v13 = *(_DWORD *)&v49[v36];
        if ( v13 >= -16 - 100 * (5 * v9 * sub_26580() / 4096) )
        {
          v25 = sub_265B0();
          v26 = 4 * (v15 + v7);
          sub_77364((unsigned __int8)v0, v7 * v25);
          *(_DWORD *)&v51[v26 + 2048] = 0;
          *(_DWORD *)&v51[v26 + 5120] = 0;
        }
        else
        {
          v14 = 4 * (v15 + v7);
          *(_DWORD *)&v51[v14 + 5120] = *(_DWORD *)&v50[v36];
          *(_DWORD *)&v51[v14 + 2048] = v22;
        }
        ++v7;
        v35 = *((unsigned __int8 *)&v42 + v0);
      }
      if ( v40 == v35 )
        *((_BYTE *)&v42 + v0) = 0;
LABEL_4:
      ++v0;
    }
    while ( v0 != 4 );
    tv_sec = tv.tv_sec;
    tv_usec = tv.tv_usec;
    gettimeofday(&tv, 0);
    v3 = tv_sec + 5;
    if ( v3 == tv.tv_sec )
      v4 = tv.tv_usec < tv_usec;
    else
      v4 = v3 > tv.tv_sec;
    if ( v4 )
    {
      v5 = v3 - tv.tv_sec;
      v6 = tv_usec - tv.tv_usec;
      if ( v6 < 0 )
      {
        --v5;
        v6 += 1000000;
      }
      usleep(v6 + (_DWORD)&unk_F4240 * v5);
    }
  }
}
