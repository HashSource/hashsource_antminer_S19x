void sub_419A4()
{
  int v0; // r11
  int v1; // r0
  int *v2; // r10
  int v3; // r9
  char *v4; // r11
  pthread_mutex_t *v5; // r8
  int v6; // r3
  int v7; // r7
  int v8; // r5
  int v9; // r4
  unsigned int v10; // r4
  bool v11; // cc
  int *v12; // r4
  int v13; // r6
  int v14; // r11
  int v15; // r0
  int v16; // r8
  int v17; // r6
  char v19; // r8
  int v20; // r11
  int v21; // r10
  int v22; // r7
  int v23; // r3
  int v24; // r5
  unsigned __int16 *v25; // r4
  int v26; // r6
  int v27; // r8
  int v28; // r3
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r5
  int v38; // r8
  int v39; // r3
  int v40; // r3
  int v41; // r3
  int v42; // r3
  int v43; // r3
  int v44; // [sp+10h] [bp-854h]
  char *format; // [sp+20h] [bp-844h]
  pthread_mutex_t *v46; // [sp+24h] [bp-840h]
  int v47; // [sp+24h] [bp-840h]
  int v48; // [sp+2Ch] [bp-838h]
  int *v49; // [sp+2Ch] [bp-838h]
  int v50; // [sp+30h] [bp-834h]
  int v51; // [sp+34h] [bp-830h]
  int v52; // [sp+44h] [bp-820h]
  char *s; // [sp+48h] [bp-81Ch]
  __int16 v54; // [sp+54h] [bp-810h]
  unsigned __int8 v55; // [sp+56h] [bp-80Eh]
  __time_t v56[2]; // [sp+58h] [bp-80Ch] BYREF
  char v57[2052]; // [sp+60h] [bp-804h] BYREF

  v0 = 0;
  v51 = 0;
  v1 = sub_40D98();
  v54 = v1;
  v55 = BYTE2(v1);
  sub_18700();
  do
  {
    if ( !sub_266F0(v0) )
      goto LABEL_3;
    v2 = dword_5BE1F8;
    v3 = v0;
    s = (char *)&word_5C69D8[0x80000 * v0];
    v52 = 0;
    sub_27D94(v0, 1, 0, (unsigned __int8)byte_4B6CCC);
    while ( 1 )
    {
      byte_B42EC = 1;
      sub_3848C();
      memset(s, 0, 0x100000u);
      v50 = sub_26540();
      if ( v50 > 0 )
      {
        v4 = v57;
        v48 = 0;
        do
        {
          sub_265B0();
          v5 = &stru_B42BC;
          sub_76830((unsigned __int8)v3);
          sub_3D7A0(v56);
          do
          {
            pthread_mutex_lock(v5);
            v6 = v2[2];
            v7 = v6;
            if ( v6 > 0 )
            {
              v8 = 0;
              format = v4;
              v46 = v5;
              while ( 1 )
              {
                v9 = v2[1];
                ++v8;
                v2[2] = v6 - 1;
                v10 = v9 + 1;
                v11 = v10 > 0x1FE;
                if ( v10 <= 0x1FE )
                  v2[1] = v10;
                v12 = &v2[2 * v10];
                if ( v11 )
                  v2[1] = 0;
                if ( *((unsigned __int8 *)v12 + 11) == v3 && *((_BYTE *)v12 + 10) == 64 )
                {
                  v13 = *((unsigned __int8 *)v12 + 9);
                  v14 = v12[1];
                  sub_265B0();
                  v15 = sub_8C490(v13);
                  v16 = *((unsigned __int8 *)v12 + 9);
                  v17 = *((_BYTE *)v12 + 11) & 3;
                  word_5C69D8[0x80000 * (v3 & 3) + 1 + 2048 * v15 + 2 * (*((_WORD *)v12 + 3) & 0x3FF)] = v14;
                  sub_265B0();
                  word_5C69D8[2048 * (sub_8C490(v16) + (v17 << 8)) + 2 * (*((_WORD *)v12 + 3) & 0x3FF)] = 1;
                }
                if ( v7 == v8 )
                  break;
                v6 = v2[2];
              }
              v4 = format;
              v5 = v46;
            }
            pthread_mutex_unlock(v5);
            usleep(0x3E8u);
            sub_3D7A0((__time_t *)v4);
          }
          while ( (int)sub_3DA78(v4, v56) <= 99 );
        }
        while ( v50 != ++v48 );
      }
      v47 = sub_26540();
      if ( v47 <= 0 )
        break;
      v19 = 0;
      v49 = v2;
      v20 = 0;
      v21 = 0;
      do
      {
        v22 = sub_26570();
        if ( v22 > 0 )
        {
          v23 = 0;
          v24 = 0;
          v25 = &word_5C69D8[2048 * (v20 + v51)];
          do
          {
            v26 = v25[1];
            if ( !v25[1] )
            {
              v27 = *v25;
              if ( *v25 )
              {
                if ( (unsigned int)off_AFC24 > 3 )
                {
                  snprintf(v57, 0x800u, "core %8d data in asic %d is zero", v24, v20);
                  sub_3AF5C(3, v57, v26, v28);
                }
              }
              else if ( (unsigned int)off_AFC24 > 3 )
              {
                snprintf(v57, 0x800u, "core %8d in asic %d not returned", v24, v20);
                sub_3AF5C(3, v57, v27, v39);
              }
              v23 = 1;
              ++v21;
              v19 = 1;
            }
            ++v24;
            v25 += 2;
          }
          while ( v22 != v24 );
          if ( v23 )
          {
            if ( (unsigned int)off_AFC24 > 3 )
            {
              snprintf(v57, 0x800u, "reopen asic %d", v20);
              sub_3AF5C(3, v57, 0, v41);
            }
            v29 = sub_265B0();
            sub_767B4((unsigned __int8)v3, v20 * v29, 1);
            usleep(0x2710u);
            v30 = sub_265B0();
            sub_767B4((unsigned __int8)v3, v20 * v30, 0);
            usleep(0x2710u);
            v31 = sub_265B0();
            sub_76E24((unsigned __int8)v3, v20 * v31, (unsigned __int8)v54, 0);
            sub_3D9D4();
            v32 = sub_265B0();
            sub_76E40((unsigned __int8)v3, v20 * v32, HIBYTE(v54), v55, 0);
            v33 = sub_265B0();
            sub_76880((unsigned __int8)v3, v20 * v33);
            usleep(0x2710u);
            if ( (unsigned int)off_AFC24 > 3 )
            {
              snprintf(v57, 0x800u, "reset clock asic %d", v20);
              sub_3AF5C(3, v57, 0, v40);
            }
            v34 = sub_265B0();
            sub_76F68((unsigned __int8)v3, v20 * v34, 0);
            v35 = sub_265B0();
            sub_7732C((unsigned __int8)v3, v20 * v35);
            usleep((__useconds_t)&off_186A0);
            v36 = sub_265B0();
            sub_76F68((unsigned __int8)v3, v20 * v36, 1);
          }
        }
        ++v20;
      }
      while ( v47 != v20 );
      v37 = v21;
      v2 = v49;
      if ( (unsigned int)off_AFC24 > 3 )
        goto LABEL_55;
LABEL_44:
      if ( v37 <= 155 )
      {
        v0 = v3;
        goto LABEL_51;
      }
      usleep((__useconds_t)&unk_F4240);
      if ( v52 <= 1 )
        v38 = v19 & 1;
      else
        v38 = 0;
      if ( !v38 )
      {
        v0 = v3;
        goto LABEL_3;
      }
    }
    if ( (unsigned int)off_AFC24 > 3 )
    {
      v37 = 0;
      v19 = 0;
LABEL_55:
      v44 = v52++;
      snprintf(
        v57,
        0x800u,
        "chain %d, bad core num %8d, rate = %.2f ========================round %d",
        v3,
        v37,
        (float)((float)v37 / 12168.0),
        v44);
      sub_3AF5C(3, v57, 0, v43);
      goto LABEL_44;
    }
    v0 = v3;
    v37 = 0;
LABEL_51:
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(v57, 0x800u, "bad count is acceptable = %d", v37);
      sub_3AF5C(3, v57, 0, v42);
    }
    usleep((__useconds_t)&unk_F4240);
LABEL_3:
    ++v0;
    v51 += 256;
  }
  while ( v0 != 4 );
  byte_B42EC = 0;
  sub_18714();
}
