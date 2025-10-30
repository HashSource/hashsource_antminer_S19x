int sub_3F574()
{
  unsigned int v0; // r0
  int v1; // r4
  unsigned __int64 i; // r8
  int v3; // r4
  const void *v4; // r3
  int v5; // r2
  int v6; // r3
  bool v7; // zf
  const void *v8; // r4
  const void *v9; // r5
  const void *v10; // r10
  char *v11; // r5
  int *v12; // r2
  int *v13; // r1
  unsigned int v14; // t1
  _DWORD *v15; // r5
  const void *v16; // r1
  const void *v17; // r2
  char *v18; // r10
  int v19; // r4
  char *v20; // lr
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r3
  int v37; // r1
  int v38; // r2
  const void *v39; // r5
  const void *v40; // r10
  const void *v41; // r12
  int *v42; // r0
  const void *v43; // r11
  int v44; // r3
  int v45; // r3
  unsigned int v47; // r3
  const void *v48; // [sp+8h] [bp-91Ch]
  int v49; // [sp+8h] [bp-91Ch]
  int v50; // [sp+8h] [bp-91Ch]
  int v51; // [sp+8h] [bp-91Ch]
  int v52; // [sp+8h] [bp-91Ch]
  int v53; // [sp+Ch] [bp-918h]
  unsigned __int64 v54; // [sp+20h] [bp-904h] BYREF
  struct timespec abstime; // [sp+28h] [bp-8FCh] BYREF
  int v56; // [sp+30h] [bp-8F4h] BYREF
  int v57; // [sp+34h] [bp-8F0h]
  int v58; // [sp+38h] [bp-8ECh]
  int v59; // [sp+3Ch] [bp-8E8h]
  int v60; // [sp+40h] [bp-8E4h]
  int v61; // [sp+44h] [bp-8E0h]
  int v62; // [sp+48h] [bp-8DCh]
  int v63; // [sp+4Ch] [bp-8D8h] BYREF
  _BYTE v64[32]; // [sp+50h] [bp-8D4h] BYREF
  _BYTE v65[28]; // [sp+70h] [bp-8B4h] BYREF
  char v66; // [sp+8Ch] [bp-898h] BYREF
  _BYTE v67[28]; // [sp+90h] [bp-894h] BYREF
  int v68; // [sp+ACh] [bp-878h] BYREF
  _BYTE v69[32]; // [sp+B0h] [bp-874h] BYREF
  const void *s[20]; // [sp+D0h] [bp-854h] BYREF
  struct timespec tp[256]; // [sp+120h] [bp-804h] BYREF

  v0 = (unsigned int)memset(s, 0, sizeof(s));
  v1 = 0;
  i = 0;
  while ( !*(_BYTE *)(dword_5BFE4C + 364) )
  {
    if ( v1 )
    {
      clock_gettime(1, tp);
      v45 = tp[0].tv_nsec
          + 1000 * (v1 - (_DWORD)&unk_F4240 * ((int)((unsigned __int64)(1125899907LL * v1) >> 32) >> 18));
      abstime.tv_sec = tp[0].tv_sec + v45 / 1000000000;
      abstime.tv_nsec = v45 % 1000000000;
      pthread_mutex_lock(&stru_4B9A28);
      pthread_cond_timedwait(&cond, &stru_4B9A28, &abstime);
      v0 = pthread_mutex_unlock(&stru_4B9A28);
    }
    v0 = sub_40F54(v0);
    if ( v0 > 1 && byte_4B9A70 )
    {
      if ( !memcmp(s, &unk_4B9A78, 0x50u) )
      {
        v53 = 0;
        v4 = (const void *)HIDWORD(i);
        v48 = (const void *)i;
        goto LABEL_13;
      }
      LOWORD(v3) = -800;
      memcpy(s, &unk_4B9A78, sizeof(s));
      if ( !s[19] )
      {
        v53 = 0;
        HIWORD(v3) = 91;
        goto LABEL_11;
      }
      HIWORD(v3) = 91;
      if ( ioctl(*(_DWORD *)(v3 + 4), 0x7507u, 0) < 0 )
      {
        if ( (unsigned int)dword_B308C <= 3 )
        {
LABEL_42:
          v53 = 1;
          goto LABEL_11;
        }
        strcpy((char *)tp, "notice kernel space clean work failed.\n");
        sub_3B6AC(3, (const char *)tp, 0, *(int *)"rk failed.\n");
        v47 = dword_B308C;
      }
      else
      {
        v47 = dword_B308C;
      }
      if ( v47 <= 4 )
        goto LABEL_42;
      v53 = 1;
      strcpy((char *)tp, "pool clean work finished.\n");
      sub_3B6AC(4, (const char *)tp, 0, *(unsigned __int16 *)"");
LABEL_11:
      ioctl(
        *(_DWORD *)(v3 + 4),
        0x40047503u,
        (int)(float)((float)(unsigned int)(1000 * (int)s[18]) * 0.75),
        1000 * (int)s[18]);
      if ( !*(_BYTE *)v3 && !ioctl(dword_5BFCE4, 0x7505u) )
        byte_5BFCE0 = 1;
      v48 = s[16];
      v4 = s[17];
LABEL_13:
      for ( i = __PAIR64__((unsigned int)v4, (unsigned int)v48); ; ++i )
      {
        v0 = sub_26BFC();
        if ( (int)i - (int)v48 >= (int)(2 * v0) )
          break;
        v5 = *(_DWORD *)dword_5BFCE8;
        v6 = *(_DWORD *)(dword_5BFCE8 + 4);
        if ( v6 - *(_DWORD *)dword_5BFCE8 == 1 )
          break;
        v7 = v5 == 767;
        if ( v5 == 767 )
          v7 = v6 == 0;
        v8 = (const void *)v7;
        if ( v7 )
          break;
        v9 = s[3];
        v54 = i;
        sub_3EA8C(tp, s[2], (size_t)s[3], (int)"uart_transceive.c", (int)"calc_merkle_root", 261, (int)v48);
        sub_3EA8C(
          (char *)tp + (unsigned int)s[13],
          &v54,
          (size_t)s[14],
          (int)"uart_transceive.c",
          (int)"calc_merkle_root",
          262,
          v49);
        sub_3CED0(tp, (size_t)v9, (int)v67);
        sub_3CED0(v67, 0x20u, (int)v64);
        sub_3EA8C(v67, v64, 0x20u, (int)"uart_transceive.c", (int)"calc_merkle_root", 266, v50);
        v10 = s[5];
        if ( s[5] )
        {
          v11 = (char *)s[4];
          do
          {
            sub_3EA8C(v69, v11, 0x20u, (int)"uart_transceive.c", (int)"calc_merkle_root", 270, v51);
            sub_3CED0(v67, 0x40u, (int)v65);
            sub_3CED0(v65, 0x20u, (int)v64);
            v8 = (char *)v8 + 1;
            v11 += 32;
            sub_3EA8C(v67, v64, 0x20u, (int)"uart_transceive.c", (int)"calc_merkle_root", 272, v52);
          }
          while ( v8 != v10 );
        }
        v12 = (int *)&v66;
        v13 = &v63;
        do
        {
          v14 = v12[1];
          ++v12;
          v13[1] = bswap32(v14);
          ++v13;
        }
        while ( v12 != &v68 );
        sub_3EA8C(&v56, v64, 0x20u, (int)"uart_transceive.c", (int)"calc_merkle_root", 277, v51);
        v15 = s[11];
        v16 = s[11];
        v17 = s[12];
        v18 = (char *)s[12] + 4;
        v19 = dword_5BFCE8 + 168 * *(_DWORD *)dword_5BFCE8 + 8;
        *(const void **)v19 = s[9];
        memcpy((void *)(v19 + 4), v16, (size_t)v17);
        v20 = &v18[v19];
        v21 = v57;
        v22 = v58;
        v23 = v59;
        *(_DWORD *)&v18[v19] = v56;
        *((_DWORD *)v20 + 3) = v23;
        *((_DWORD *)v20 + 1) = v21;
        *((_DWORD *)v20 + 2) = v22;
        v24 = v61;
        v25 = v62;
        *((_DWORD *)v20 + 4) = v60;
        *((_DWORD *)v20 + 5) = v24;
        *((_DWORD *)v20 + 6) = v25;
        sub_3EE50(v19, 64);
        *(_DWORD *)(v19 + 64) = v63;
        *(const void **)(v19 + 68) = s[6];
        *(const void **)(v19 + 72) = s[7];
        sub_3EE50(v19 + 64, 12);
        *(_BYTE *)(v19 + 76) = 0;
        v26 = v56;
        v27 = v57;
        v28 = v58;
        v29 = v59;
        *(_BYTE *)(v19 + 77) = 0;
        *(_BYTE *)(v19 + 78) = 0;
        *(_BYTE *)(v19 + 79) = 0;
        *(_DWORD *)(v19 + 80) = v26;
        *(_DWORD *)(v19 + 84) = v27;
        *(_DWORD *)(v19 + 88) = v28;
        *(_DWORD *)(v19 + 92) = v29;
        v30 = v61;
        v31 = v62;
        v32 = v63;
        *(_DWORD *)(v19 + 96) = v60;
        *(_DWORD *)(v19 + 100) = v30;
        *(_DWORD *)(v19 + 104) = v31;
        *(_DWORD *)(v19 + 108) = v32;
        v33 = v15[1];
        v34 = v15[2];
        v35 = v15[3];
        *(_DWORD *)(v19 + 132) = *v15;
        *(_DWORD *)(v19 + 136) = v33;
        *(_DWORD *)(v19 + 140) = v34;
        *(_DWORD *)(v19 + 144) = v35;
        v36 = v15[7];
        v37 = v15[5];
        v38 = v15[6];
        *(_DWORD *)(v19 + 148) = v15[4];
        v39 = s[6];
        v40 = s[7];
        v41 = s[8];
        v42 = (int *)dword_5BFCE8;
        v43 = s[9];
        *(_QWORD *)(v19 + 112) = i;
        *(_DWORD *)(v19 + 152) = v37;
        *(_DWORD *)(v19 + 156) = v38;
        *(_DWORD *)(v19 + 160) = v36;
        *(_DWORD *)(v19 + 120) = v43;
        *(_DWORD *)(v19 + 124) = v40;
        *(_DWORD *)(v19 + 128) = v39;
        *(_DWORD *)(v19 + 164) = v41;
        v44 = *v42 + 1;
        if ( v44 >= 768 )
          v44 = 0;
        *v42 = v44;
      }
      if ( v53 )
      {
        v1 = (int)&loc_186A0;
        v0 = ioctl(dword_5BFCE4, 0x4004750Au, 0);
      }
      else
      {
        v1 = 100000;
      }
    }
    else
    {
      v1 = (int)sub_30D40;
    }
  }
  return 0;
}
