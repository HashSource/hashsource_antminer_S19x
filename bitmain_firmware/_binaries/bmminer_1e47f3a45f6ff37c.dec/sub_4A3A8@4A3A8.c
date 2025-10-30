int __fastcall sub_4A3A8(int a1)
{
  int v1; // r11
  unsigned int v2; // r10
  int v3; // r7
  int *v4; // r8
  _DWORD *v5; // r4
  int v6; // r0
  _DWORD *v7; // r5
  unsigned int v8; // r0
  _DWORD *v9; // r12
  unsigned int v10; // r1
  unsigned int v11; // r2
  unsigned int *v12; // r4
  unsigned int *v13; // lr
  unsigned int v14; // r1
  unsigned int v15; // r2
  unsigned int v16; // r3
  bool v17; // zf
  unsigned int v18; // r6
  int *v19; // r10
  const void *v20; // r7
  int v21; // r8
  int v22; // r5
  int j; // r4
  unsigned int v24; // lr
  char *v25; // r0
  int v26; // r1
  int v27; // r3
  int v29; // r3
  int v30[17]; // [sp+0h] [bp-94Ch] BYREF
  int i; // [sp+48h] [bp-904h]
  _DWORD *v32; // [sp+4Ch] [bp-900h]
  unsigned int v33; // [sp+50h] [bp-8FCh]
  int v34; // [sp+54h] [bp-8F8h]
  int v35; // [sp+58h] [bp-8F4h]
  int v36; // [sp+5Ch] [bp-8F0h]
  _DWORD *v37; // [sp+60h] [bp-8ECh]
  int v38; // [sp+64h] [bp-8E8h]
  int v39; // [sp+68h] [bp-8E4h]
  int v40; // [sp+6Ch] [bp-8E0h]
  int v41; // [sp+70h] [bp-8DCh]
  int v42; // [sp+74h] [bp-8D8h]
  int v43; // [sp+78h] [bp-8D4h]
  int *v44; // [sp+7Ch] [bp-8D0h]
  __time_t v45[2]; // [sp+80h] [bp-8CCh] BYREF
  __time_t v46[2]; // [sp+88h] [bp-8C4h] BYREF
  _DWORD v47[4]; // [sp+90h] [bp-8BCh]
  unsigned int dest[42]; // [sp+A0h] [bp-8ACh] BYREF
  char v49[2052]; // [sp+148h] [bp-804h] BYREF

  v42 = a1;
  v44 = &dword_B308C;
  v47[0] = 0;
  v47[1] = 64;
  v47[2] = 128;
  v47[3] = 192;
  sub_3DFCC(v45);
  if ( (unsigned int)dword_B308C > 3 )
  {
    memset(v49, 0, 0x800u);
    strcpy(v49, "\n");
    sub_3C5B8(3, v49, 0);
    if ( (unsigned int)*v44 > 3 )
    {
      snprintf(v49, 0x800u, ">>>> Send work for chain %d.\n", v42);
      sub_3B6AC(3, v49, 0, v29);
    }
  }
  v43 = sub_26A44();
  if ( v43 )
  {
    v1 = 0;
    v2 = 0;
    v41 = 0;
    v35 = (unsigned __int8)~((unsigned int)~(v42 << 25) >> 25);
    v39 = 10752 * v42;
    v3 = 1 << v42;
    v4 = &dword_535D90;
    do
    {
      v5 = *(_DWORD **)(*v4 + 4 * ((_DWORD)&unk_202A2A + v41) + 4);
      v6 = sub_26A84();
      v40 = v6;
      if ( v6 )
      {
        v37 = v5;
        v38 = 0;
        do
        {
          v7 = v37;
          v36 = v38 & 3;
          for ( i = 0; i != 8; ++i )
          {
            while ( (sub_6A5C0(v6) & v3) == 0 )
            {
              ++v1;
              v6 = usleep(0x3E8u);
            }
            v32 = v7 + 21;
            memcpy(dest, v7, 0x54u);
            memset(&dest[21], 0, 0x54u);
            v8 = v7[2];
            v9 = v7 + 5;
            BYTE1(dest[21]) = v35;
            v10 = v7[3];
            v11 = v7[4];
            v12 = &dest[26];
            dest[22] = v2 & 0x7F | (i << 7);
            dest[23] = v8;
            dest[24] = v10;
            dest[25] = v11;
            LOBYTE(dest[21]) = 1;
            do
            {
              v9 += 4;
              v13 = v12;
              v14 = *(v9 - 3);
              v12 += 4;
              v15 = *(v9 - 2);
              v16 = *(v9 - 1);
              v17 = v9 == v32;
              *v13 = *(v9 - 4);
              v13[1] = v14;
              v13[2] = v15;
              v13[3] = v16;
            }
            while ( !v17 );
            v18 = v2;
            v33 = v2;
            v34 = v3;
            v19 = v4;
            v20 = v7;
            v21 = v36;
            v22 = v39;
            for ( j = 0; j != 4; ++j )
            {
              v24 = v22 + 84 * v18;
              if ( j == v21 )
              {
                memcpy((char *)&unk_80ACAC + *v19 + v24, v20, 0x54u);
              }
              else
              {
                v25 = (char *)&unk_80ACAC + *v19 + v24;
                BYTE2(dest[20]) = v47[j];
                memcpy(v25, dest, 0x54u);
              }
              ++v18;
            }
            v3 = v34;
            v4 = v19;
            memcpy(v30, &dest[25], sizeof(v30));
            v2 = v33 + 8;
            v6 = sub_280FC(
                   dest[21],
                   dest[22],
                   dest[23],
                   dest[24],
                   v30[0],
                   v30[1],
                   v30[2],
                   v30[3],
                   v30[4],
                   v30[5],
                   v30[6],
                   v30[7],
                   v30[8],
                   v30[9],
                   v30[10],
                   v30[11],
                   v30[12]);
            if ( v2 >= 0x80 )
              v2 = 0;
            v7 = v32;
          }
          v37 += 168;
          ++v38;
        }
        while ( v40 != v38 );
      }
      ++v41;
    }
    while ( v43 != v41 );
  }
  else
  {
    v1 = 0;
  }
  sub_3DFCC(v46);
  v26 = v46[0] - v45[0];
  if ( v46[1] - v45[1] < 0 )
    --v26;
  if ( (unsigned int)*v44 > 3 )
  {
    snprintf(v49, 0x800u, "Send work for chain %d done, time cost %lds, sleep_count = %d\n", v42, v26, v1);
    sub_3B6AC(3, v49, 0, v27);
  }
  return 0;
}
