int __fastcall sub_4E0EC(int a1)
{
  _DWORD *v2; // r4
  int v3; // r5
  int i; // r4
  char *v6; // r6
  int v7; // r4
  int v8; // r0
  int j; // r5
  char *v10; // r10
  int v11; // r8
  int k; // r10
  char *v13; // r11
  char *v14; // r10
  int v15; // r8
  int v16; // r0
  int v17; // r3
  float *v18; // r8
  int m; // r6
  int v20; // r1
  int v21; // r3
  float *v22; // r2
  float v23; // s14
  float v24; // s15
  int v25; // r0
  bool v26; // cc
  float v27; // s0
  int v28; // r3
  int v29; // r3
  int v30; // r3
  int v31; // r3
  unsigned int v32; // [sp+10h] [bp-954h]
  unsigned int v33; // [sp+14h] [bp-950h]
  int v34; // [sp+18h] [bp-94Ch]
  int v35[16]; // [sp+30h] [bp-934h] BYREF
  char v36; // [sp+70h] [bp-8F4h] BYREF
  char v37; // [sp+80h] [bp-8E4h] BYREF
  _WORD s[1024]; // [sp+160h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy((char *)s, "Do freq tuning basic.\n");
    sub_3B6AC(3, (const char *)s, 0, *(unsigned __int16 *)"");
  }
  v2 = (_DWORD *)dword_535D98;
  memset((void *)dword_535D98, 0, 0x34u);
  *v2 = a1;
  sub_4C608();
  sub_48D5C(**(_DWORD **)dword_535D98);
  v3 = sub_4D9BC();
  if ( !v3 )
  {
    sub_2315C(255, (unsigned __int8)byte_534B58, *(unsigned __int8 *)(*(_DWORD *)dword_535D98 + 20));
    if ( (unsigned int)dword_B308C > 3 )
    {
      memset(s, 0, sizeof(s));
      s[0] = 10;
      sub_3C5B8(3, (const char *)s, 0);
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy((char *)s, ">>>> Do tuning parallel.\n");
        sub_3B6AC(3, (const char *)s, 0, *(int *)"ng parallel.\n");
      }
    }
    for ( i = 0; i != 4; ++i )
    {
      if ( sub_26C0C(i) )
        sub_4C198(i, 1);
    }
    v32 = *(_DWORD *)(*(_DWORD *)dword_535D98 + 4);
    v34 = *(_DWORD *)(*(_DWORD *)dword_535D98 + 16);
    v33 = *(_DWORD *)(*(_DWORD *)dword_535D98 + 12);
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(
        (char *)s,
        0x800u,
        "freq_prev = %d, freq_start = %d, freq_step = %d, freq_min = %d\n",
        v32,
        v32,
        v34,
        *(_DWORD *)(*(_DWORD *)dword_535D98 + 12));
      sub_3B6AC(3, (const char *)s, 0, v31);
    }
    v35[0] = v32;
    if ( v32 < v33 )
    {
      v7 = 0;
      v3 = 0;
    }
    else
    {
      v6 = &v36;
      v7 = 0;
      while ( 1 )
      {
        if ( (unsigned int)dword_B308C <= 3
          || (memset(s, 0, sizeof(s)), s[0] = 10, sub_3C5B8(3, (const char *)s, 0), (unsigned int)dword_B308C <= 3) )
        {
          v8 = sub_4C524();
          if ( !v8 )
            goto LABEL_54;
        }
        else
        {
          snprintf((char *)s, 0x800u, ">>>> freq_curr = %d\n", v35[0]);
          sub_3B6AC(3, (const char *)s, 0, v29);
          v8 = sub_4C524();
          if ( !v8 )
          {
LABEL_54:
            v3 = v8;
            if ( (unsigned int)dword_B308C > 3 )
            {
              strcpy((char *)s, "All ready chain done, exit.\n");
              sub_3B6AC(3, (const char *)s, v8, *(int *)"");
            }
            goto LABEL_31;
          }
        }
        for ( j = 0; j != 4; ++j )
        {
          if ( sub_26C0C(j) && sub_4C304(j) == 1 )
            sub_23DC4(j, (unsigned __int8)byte_534B58, v32, v35[0], *(_BYTE *)(*(_DWORD *)dword_535D98 + 21));
        }
        v32 = v35[0];
        v3 = sub_4D9BC();
        if ( v3 )
          break;
        v10 = 0;
        sub_41228(v35[0], dword_B3048, 20);
        sub_4D56C((int)v35);
        v11 = sub_4BCE4();
        do
        {
          if ( sub_26C0C((int)v10) && sub_4C304((int)v10) == 1 )
            sub_4CBEC(v10, v11);
          ++v10;
        }
        while ( v10 != (char *)4 );
        for ( k = 0; k != 4; ++k )
        {
          if ( sub_26C0C(k) && sub_4C304(k) == 1 )
          {
            v27 = *(float *)(*(_DWORD *)dword_535D98 + 28);
            if ( sub_4C710(k) )
              sub_4C198(k, 2);
            else
              *(_DWORD *)(dword_535D98 + 4 * k + 20) = 1;
            sub_4D528();
            v28 = dword_535D98 + 4 * k;
            if ( v27 > *(float *)(v28 + 36) )
              *(float *)(v28 + 36) = v27;
          }
        }
        v13 = v6;
        v14 = (char *)&unk_80A894 + v11;
        v15 = 0;
        do
        {
          v16 = v15++;
          v14 += 4;
          v13 += 4;
          if ( sub_26C0C(v16) )
          {
            v17 = v35[0];
            *((_DWORD *)v13 - 1) = *((_DWORD *)v14 - 1);
            v35[v7 + 1] = v17;
          }
        }
        while ( v15 != 4 );
        ++v7;
        v6 += 16;
        v35[0] -= v34;
        if ( v33 > v35[0] )
          goto LABEL_31;
      }
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy((char *)s, "Set voltage failed, exit.\n");
        sub_3B6AC(3, (const char *)s, 0, *(unsigned __int16 *)"");
      }
    }
LABEL_31:
    v18 = (float *)&v37;
    for ( m = 0; m != 4; ++m )
    {
      if ( sub_26C0C(m) )
      {
        v20 = 0;
        v21 = 0;
        v22 = v18;
        while ( v21 < v7 - 1 )
        {
          v23 = *(v22 - 4);
          if ( v23 < 5.0 )
          {
            v20 = v21;
            break;
          }
          v24 = *v22;
          ++v21;
          v22 += 4;
          if ( v23 > v24 * 1.5 )
            v20 = v21;
        }
        v25 = v35[v20 + 1];
        v26 = (unsigned int)dword_B308C > 3;
        *(_DWORD *)(dword_535D98 + 4 * m + 4) = v25;
        if ( v26 )
        {
          snprintf((char *)s, 0x800u, "chain %d best level %d, freq %d\n", m, v20, v25);
          sub_3B6AC(3, (const char *)s, 0, v30);
        }
      }
      ++v18;
    }
  }
  return v3;
}
