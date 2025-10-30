int __fastcall sub_488D4(int **a1, int a2, int a3)
{
  int v5; // r10
  int v7; // r12
  int v8; // r2
  int v9; // lr
  int v10; // r3
  int v11; // r0
  int v12; // r7
  unsigned int v13; // r6
  int i; // r4
  int v15; // r0
  int v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // t1
  unsigned int v19; // r4
  int v20; // r11
  int j; // r8
  int v22; // r0
  int v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // t1
  int k; // r4
  int v27; // r4
  int v28; // r0
  int v29; // r11
  int v30; // r6
  int v31; // r8
  int v32; // r3
  int v34; // r3
  int v35; // r0
  int v36; // r9
  char *v37; // lr
  char *v38; // r1
  int v39; // r12
  int v40; // r2
  int v41; // t1
  int v42; // t1
  bool v43; // cc
  int v44; // r3
  int v45; // r3
  int v46; // r3
  int v47; // [sp+8h] [bp-814h]
  unsigned int v48; // [sp+14h] [bp-808h] BYREF
  _WORD s[1026]; // [sp+18h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 3 )
  {
    memset(s, 0, 0x800u);
    s[0] = 10;
    sub_3C5B8(3, (const char *)s, 0);
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf((char *)s, 0x800u, ">>>> Get ideal hash rate, round %d.\n", a3);
      sub_3B6AC(3, (const char *)s, 0, v34);
    }
  }
  v5 = sub_4CB4C(a2);
  if ( !v5 )
  {
    sub_4C608();
    v7 = **a1;
    v8 = (*a1)[4];
    v9 = dword_535D80;
    if ( v7 > v8 )
    {
      **a1 = v8;
      v7 = **a1;
    }
    v10 = *(_DWORD *)(v9 + 8);
    dword_535D84 = v7;
    sub_23FD0((unsigned int *)(v9 + 12), (unsigned __int8)byte_534B58, *(unsigned __int8 *)(v10 + 8));
    if ( sub_226A8() != dword_535D84 )
    {
      v11 = sub_223A0(dword_535D84);
      if ( v11 )
        return v11;
    }
    v12 = 8;
    v13 = 0xFFFFFF;
    for ( i = 0; i != 4; ++i )
    {
      if ( sub_26C0C(i) )
      {
        v15 = sub_26A44();
        if ( v15 )
        {
          v16 = dword_535D80 + v12;
          do
          {
            v18 = *(_DWORD *)(v16 + 4);
            v16 += 4;
            v17 = v18;
            if ( v13 >= v18 )
              v13 = v17;
          }
          while ( v16 != dword_535D80 + 4 * (v15 + (i << 8) + 2) );
        }
      }
      v12 += 1024;
    }
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf((char *)s, 0x800u, "chain = %d, freq_min = %d\n", 255, v13);
      sub_3B6AC(3, (const char *)s, 0, v45);
    }
    v19 = 0;
    v20 = 8;
    for ( j = 0; j != 4; ++j )
    {
      if ( sub_26C0C(j) )
      {
        v22 = sub_26A44();
        if ( v22 )
        {
          v23 = dword_535D80 + v20;
          do
          {
            v25 = *(_DWORD *)(v23 + 4);
            v23 += 4;
            v24 = v25;
            if ( v19 < v25 )
              v19 = v24;
          }
          while ( v23 != dword_535D80 + 4 * (v22 + (j << 8) + 2) );
        }
      }
      v20 += 1024;
    }
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf((char *)s, 0x800u, "chain = %d, freq_max = %d\n", 255, v19);
      sub_3B6AC(3, (const char *)s, 0, v46);
    }
    v48 = v19;
    sub_41228(v13, dword_B3048, 20);
    for ( k = 0; k != 4; ++k )
    {
      if ( sub_26C0C(k) )
        sub_4C198(k, 1);
    }
    v27 = 0;
    v28 = sub_4D56C(&v48);
    v47 = sub_4BCE4(v28);
    do
    {
      if ( sub_26C0C(v27) )
        sub_4CBEC(v27, v47);
      ++v27;
    }
    while ( v27 != 4 );
    v29 = 0;
    v30 = 0;
    v31 = 8;
    do
    {
      if ( sub_26C0C(v30) )
      {
        v35 = sub_26A44();
        if ( v35 )
        {
          v36 = dword_535D80;
          v37 = (char *)(v47 + 4 * ((_DWORD)&unk_2023FF + 256 * v30 + v35));
          v38 = (char *)&unk_808FF4 + v31 + v47;
          v39 = dword_535D80 + v31;
          v35 = 0;
          do
          {
            v41 = *((_DWORD *)v38 + 1);
            v38 += 4;
            v40 = v41;
            v42 = *(_DWORD *)(v39 + 4);
            v39 += 4;
            v35 += v42 * v40 / 0x1F40u;
          }
          while ( v38 != v37 );
        }
        else
        {
          v36 = dword_535D80;
        }
        v29 += v35;
        v43 = (unsigned int)dword_B308C > 3;
        *(_DWORD *)(v36 + 4 * (v30 + 1026) + 4) = v35;
        if ( v43 )
        {
          snprintf((char *)s, 0x800u, "chain = %d, ideal_hash_rate_GH = %d\n", v30, v35);
          sub_3B6AC(3, (const char *)s, 0, v44);
        }
      }
      ++v30;
      v31 += 1024;
    }
    while ( v30 != 4 );
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf((char *)s, 0x800u, "hash_rate_total_GH = %d\n", v29);
      sub_3B6AC(3, (const char *)s, 0, v32);
    }
    return v5;
  }
  if ( (unsigned int)dword_B308C <= 3 )
    return v5;
  strcpy((char *)s, "Board init failed.\n");
  sub_3B6AC(3, (const char *)s, 0, *(int *)"ailed.\n");
  return v5;
}
