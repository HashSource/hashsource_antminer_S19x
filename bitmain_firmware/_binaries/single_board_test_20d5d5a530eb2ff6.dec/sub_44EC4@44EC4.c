int __fastcall sub_44EC4(int a1, _DWORD *a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // r3
  int v4; // r6
  int v5; // r7
  int v6; // r7
  _DWORD *v7; // r3
  _DWORD *v8; // r4
  unsigned int v9; // r5
  unsigned int v10; // r9
  _DWORD *v11; // r1
  char *v12; // r2
  int v13; // r10
  int v14; // r3
  unsigned int v15; // r0
  char v16; // t1
  int v17; // r2
  char *v18; // r12
  unsigned int v19; // lr
  int v20; // r0
  int v21; // r2
  char *v22; // r1
  char v23; // t1
  int v24; // r3
  char *v25; // r2
  char v26; // t1
  unsigned int *v27; // r3
  int v28; // r2
  int v29; // r1
  bool v30; // zf
  unsigned int v31; // r5
  unsigned int *v32; // r6
  unsigned int v33; // r5
  int v34; // r7
  int v35; // r6
  int v37; // [sp+Ch] [bp-170h]
  int v38; // [sp+10h] [bp-16Ch]
  int v39; // [sp+14h] [bp-168h]
  unsigned int v40; // [sp+18h] [bp-164h]
  int v41; // [sp+1Ch] [bp-160h]
  _DWORD *v42; // [sp+20h] [bp-15Ch]
  int v43; // [sp+24h] [bp-158h]
  int v45; // [sp+2Ch] [bp-150h]
  char v46[48]; // [sp+34h] [bp-148h] BYREF
  _DWORD s[69]; // [sp+64h] [bp-118h] BYREF
  char v48; // [sp+178h] [bp-4h] BYREF

  v2 = a2 + 34560;
  v3 = (_DWORD *)a2[34726];
  v4 = v3[7];
  v5 = v3[1];
  v41 = v5;
  v40 = v3[6];
  v39 = v3[8];
  sub_1E938((char *)s, 0x30u);
  printf("%s ", (const char *)s);
  printf("%s : Start send test works\n", "sw_pt_send_work");
  strcpy(byte_642FDC, "Start send test works");
  sub_3CC5C((int)byte_642FDC, (const char *)s);
  if ( !v5 )
    goto LABEL_37;
  v42 = v2 + 37;
  v43 = 0;
  v6 = 56 * v39;
  while ( 2 )
  {
    v45 = v42[1];
    ++v42;
    if ( !v40 )
      goto LABEL_32;
    v7 = (_DWORD *)v2[166];
    v8 = v2 + 166;
    v9 = 0;
    do
    {
      if ( !v39 )
        goto LABEL_26;
      v10 = 0;
      v38 = 0;
      v37 = v45 + 56 * v9 * v39;
      while ( 1 )
      {
        while ( !sub_7138C(*v7) )
        {
          usleep(0x64u);
          v7 = (_DWORD *)*v8;
        }
        memset(s, 0, sizeof(s));
        v11 = (_DWORD *)*v8;
        v12 = (char *)&s[1] + 3;
        LOBYTE(s[0]) = 1;
        v13 = v37;
        v14 = v37 + 11;
        v15 = *v11 | 0xFFFFFF80;
        s[1] = v10;
        BYTE1(s[0]) = v15;
        do
        {
          v16 = *(_BYTE *)++v14;
          *++v12 = v16;
        }
        while ( v37 + 23 != v14 );
        if ( v4 )
        {
          v17 = v11[7];
          v18 = (char *)&s[4] + 3;
          v19 = 0;
          v20 = v37;
          if ( v11[9] * v17 > v9 )
            goto LABEL_18;
          while ( v19 < v17 - 2 )
          {
            do
            {
LABEL_18:
              v13 = v20;
              v24 = v20 + 23;
              v25 = v18;
              do
              {
                v26 = *(_BYTE *)++v24;
                *++v25 = v26;
              }
              while ( v24 != v20 + 55 );
              ++v19;
              v20 += v6;
              v18 += 32;
              ++v2[179];
              if ( v4 == v19 )
                goto LABEL_21;
LABEL_17:
              v17 = *(_DWORD *)(*v8 + 28);
            }
            while ( *(_DWORD *)(*v8 + 36) * v17 > v9 );
          }
          v21 = v13 + 23;
          v22 = v18;
          do
          {
            v23 = *(_BYTE *)++v21;
            *++v22 = v23 + v19;
          }
          while ( v21 != v13 + 55 );
          ++v19;
          v20 += v6;
          v18 += 32;
          if ( v4 == v19 )
            goto LABEL_21;
          goto LABEL_17;
        }
LABEL_21:
        v27 = s;
        do
        {
          *v27 = bswap32(*v27);
          ++v27;
        }
        while ( &v48 != (char *)v27 );
        ++v38;
        v37 += 56;
        sub_71A5C(s, 276);
        if ( v39 == v38 )
          break;
        v7 = (_DWORD *)*v8;
        v10 = bswap32(v38 << 7);
      }
      v7 = (_DWORD *)*v8;
LABEL_26:
      v28 = v7[7];
      v29 = v7[9] * v28;
      v30 = v29 == v9;
      if ( v29 == v9 )
        v28 -= 2;
      else
        v9 += v4;
      if ( v30 )
        v9 += v28;
    }
    while ( v40 > v9 );
LABEL_32:
    v30 = v41 == ++v43;
    if ( !v30 )
      continue;
    break;
  }
  v31 = v39 * v40 * v41;
  if ( v31 > v2[179] )
  {
    v32 = a2 + 34739;
    do
    {
      sub_1E938(v46, 0x30u);
      printf("%s ", v46);
      printf("%s : Send work num : %d, less than %d\n", "sw_pt_send_work", *v32, v31);
      snprintf(byte_6431DC, 0x100u, "Send work num : %d, less than %d", *v32, v31);
      sub_3CC5C((int)byte_6431DC, v46);
    }
    while ( v31 > *v32 );
  }
LABEL_37:
  sub_1E938(v46, 0x30u);
  v33 = 0;
  printf("%s ", v46);
  printf("%s : Send test %d pattern done\n", "sw_pt_send_work", v2[179]);
  snprintf(byte_6430DC, 0x100u, "Send test %d pattern done", v2[179]);
  sub_3CC5C((int)byte_6430DC, v46);
  v34 = a2[34509];
  v35 = v34;
  while ( 2 )
  {
    ++v33;
    if ( v34 != v35 )
    {
      usleep((__useconds_t)&loc_30D40);
      v34 = v35;
      v33 = 0;
      goto LABEL_41;
    }
    if ( v33 <= 2 )
    {
      usleep((__useconds_t)&loc_30D40);
LABEL_41:
      v35 = a2[34509];
      continue;
    }
    break;
  }
  sub_1E938(v46, 0x30u);
  printf("%s ", v46);
  printf("%s : send work thread eixt\n", "sw_pt_send_work");
  strcpy(byte_6432DC, "send work thread eixt");
  sub_3CC5C((int)byte_6432DC, v46);
  return 0;
}
