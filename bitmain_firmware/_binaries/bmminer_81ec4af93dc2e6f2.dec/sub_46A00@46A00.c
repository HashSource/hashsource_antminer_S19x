int __fastcall sub_46A00(int **a1, int a2, int a3)
{
  int v5; // r8
  int result; // r0
  int v7; // r12
  int v8; // r2
  int v9; // r3
  unsigned int v10; // r9
  int i; // r5
  int v12; // r0
  int v13; // r0
  int v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // t1
  unsigned int v17; // r5
  int j; // r10
  int v19; // r0
  int v20; // r0
  int v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // t1
  int v24; // r10
  int v25; // r9
  int v26; // r0
  int v27; // r5
  char *v28; // r10
  int v29; // r5
  int v30; // r3
  int v32; // r3
  int v33; // r3
  int v34; // r3
  int v35; // r0
  int v36; // lr
  int v37; // r1
  char *v38; // r12
  int v39; // r3
  int v40; // t1
  int v41; // t1
  bool v42; // cc
  int v43; // r3
  int v44; // [sp+Ch] [bp-810h]
  unsigned int v45; // [sp+14h] [bp-808h] BYREF
  _WORD s[1026]; // [sp+18h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    memset(s, 0, 0x800u);
    s[0] = 10;
    sub_3BE28(3, (const char *)s, 0);
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf((char *)s, 0x800u, ">>>> Get ideal hash rate, round %d.\n", a3);
      sub_3AF5C(3, (const char *)s, 0, v32);
    }
  }
  v5 = sub_4AC1C(a2);
  if ( v5 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return v5;
    strcpy((char *)s, "Board init failed.\n");
    sub_3AF5C(3, (const char *)s, 0, *(int *)"ailed.\n");
    return v5;
  }
  else
  {
    sub_4A6E4();
    v7 = **a1;
    v8 = (*a1)[4];
    if ( v7 > v8 )
    {
      **a1 = v8;
      v7 = **a1;
    }
    v9 = *(_DWORD *)(dword_530EF4 + 8);
    dword_530EF8 = v7;
    sub_23B00(dword_530EF4 + 12, (unsigned __int8)byte_4B6CCC, *(unsigned __int8 *)(v9 + 8));
    if ( sub_22178() == dword_530EF8 || (result = sub_21E80(dword_530EF8)) == 0 )
    {
      v10 = 0xFFFFFF;
      for ( i = 0; i != 4; ++i )
      {
        if ( sub_266F0(i) )
        {
          v12 = sub_26540();
          if ( v12 )
          {
            v13 = dword_530EF4 + 8 + 4 * (v12 + (i << 8));
            v14 = dword_530EF4 + (i << 10) + 8;
            do
            {
              v16 = *(_DWORD *)(v14 + 4);
              v14 += 4;
              v15 = v16;
              if ( v10 >= v16 )
                v10 = v15;
            }
            while ( v14 != v13 );
          }
        }
      }
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf((char *)s, 0x800u, "chain = %d, freq_min = %d\n", 255, v10);
        sub_3AF5C(3, (const char *)s, 0, v34);
      }
      v17 = 0;
      for ( j = 0; j != 4; ++j )
      {
        if ( sub_266F0(j) )
        {
          v19 = sub_26540();
          if ( v19 )
          {
            v20 = dword_530EF4 + 8 + 4 * (v19 + (j << 8));
            v21 = dword_530EF4 + (j << 10) + 8;
            do
            {
              v23 = *(_DWORD *)(v21 + 4);
              v21 += 4;
              v22 = v23;
              if ( v17 < v23 )
                v17 = v22;
            }
            while ( v21 != v20 );
          }
        }
      }
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf((char *)s, 0x800u, "chain = %d, freq_max = %d\n", 255, v17);
        sub_3AF5C(3, (const char *)s, 0, v33);
      }
      v24 = 0;
      v45 = v17;
      sub_3F61C(v10, dword_AFBE0, 20);
      do
      {
        if ( sub_266F0(v24) )
          sub_4A294(v24, 1);
        ++v24;
      }
      while ( v24 != 4 );
      v25 = 0;
      v26 = sub_4B64C(&v45);
      v27 = sub_49E5C(v26);
      do
      {
        if ( sub_266F0(v25) )
          sub_4ACBC(v25, v27);
        ++v25;
      }
      while ( v25 != 4 );
      v28 = (char *)&unk_808FFC + v27;
      v29 = 0;
      v44 = 0;
      do
      {
        if ( sub_266F0(v29) )
        {
          v35 = sub_26540();
          if ( v35 )
          {
            v36 = dword_530EF4 + 8 + 4 * (v35 + (v29 << 8));
            v35 = 0;
            v37 = dword_530EF4 + (v29 << 10) + 8;
            v38 = &v28[1024 * v29];
            do
            {
              v40 = *(_DWORD *)(v37 + 4);
              v37 += 4;
              v39 = v40;
              v41 = *((_DWORD *)v38 + 1);
              v38 += 4;
              v35 += v41 * v39 / 0x1F40u;
            }
            while ( v36 != v37 );
            v44 += v35;
          }
          v42 = (unsigned int)off_AFC24 > 3;
          *(_DWORD *)(dword_530EF4 + 4 * (v29 + 1026) + 4) = v35;
          if ( v42 )
          {
            snprintf((char *)s, 0x800u, "chain = %d, ideal_hash_rate_GH = %d\n", v29, v35);
            sub_3AF5C(3, (const char *)s, 0, v43);
          }
        }
        ++v29;
      }
      while ( v29 != 4 );
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf((char *)s, 0x800u, "hash_rate_total_GH = %d\n", v44);
        sub_3AF5C(3, (const char *)s, 0, v30);
      }
      return v5;
    }
  }
  return result;
}
