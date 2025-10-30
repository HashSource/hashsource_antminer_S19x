char *__fastcall sub_4C128(int a1)
{
  _DWORD *v2; // r4
  char *v3; // r4
  int i; // r4
  unsigned int v6; // r8
  int v7; // r5
  int v8; // r0
  int j; // r4
  int v10; // r11
  int k; // r4
  int v12; // r9
  int *v13; // r11
  int *v14; // r10
  int v15; // r0
  int v16; // r2
  int v17; // r3
  int v18; // r8
  int v19; // r1
  float *v20; // r2
  int v21; // r3
  float v22; // s12
  bool v23; // cc
  int v24; // r0
  int v25; // r3
  float v26; // s0
  int v27; // r3
  int v28; // r3
  int v29; // r3
  unsigned int v30; // [sp+10h] [bp-94Ch]
  int v31; // [sp+14h] [bp-948h]
  int v32[76]; // [sp+28h] [bp-934h] BYREF
  char s[2052]; // [sp+158h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(s, "Do freq tuning basic.\n");
    sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
  }
  v2 = (_DWORD *)dword_530F0C;
  memset((void *)(dword_530F0C + 4), 0, 0x30u);
  *v2 = a1;
  sub_4A6E4();
  sub_46E7C(**(_DWORD **)dword_530F0C);
  v3 = (char *)sub_4BA4C();
  if ( !v3 )
  {
    sub_22C20(255, (unsigned __int8)byte_4B6CCC, *(unsigned __int8 *)(*(_DWORD *)dword_530F0C + 20));
    if ( (unsigned int)off_AFC24 > 3 )
    {
      memset(s, 0, 0x800u);
      strcpy(s, "\n");
      sub_3BE28(3, s, 0);
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, ">>>> Do tuning parallel.\n");
        sub_3AF5C(3, s, 0, *(int *)"ng parallel.\n");
      }
    }
    for ( i = 0; i != 4; ++i )
    {
      if ( sub_266F0(i) )
        sub_4A294(i, 1);
    }
    v6 = *(_DWORD *)(*(_DWORD *)dword_530F0C + 4);
    v31 = *(_DWORD *)(*(_DWORD *)dword_530F0C + 16);
    v30 = *(_DWORD *)(*(_DWORD *)dword_530F0C + 12);
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(
        s,
        0x800u,
        "freq_prev = %d, freq_start = %d, freq_step = %d, freq_min = %d\n",
        v6,
        v6,
        v31,
        *(_DWORD *)(*(_DWORD *)dword_530F0C + 12));
      sub_3AF5C(3, s, 0, v29);
    }
    v32[0] = v6;
    if ( v6 < v30 )
    {
      v7 = 0;
      v3 = 0;
    }
    else
    {
      v7 = 0;
      while ( 1 )
      {
        if ( (unsigned int)off_AFC24 <= 3
          || (memset(s, 0, 0x800u), strcpy(s, "\n"), sub_3BE28(3, s, 0), (unsigned int)off_AFC24 <= 3) )
        {
          v8 = sub_4A600();
          if ( !v8 )
            goto LABEL_59;
        }
        else
        {
          snprintf(s, 0x800u, ">>>> freq_curr = %d\n", v32[0]);
          sub_3AF5C(3, s, 0, v28);
          v8 = sub_4A600();
          if ( !v8 )
          {
LABEL_59:
            v3 = (char *)v8;
            if ( (unsigned int)off_AFC24 > 3 )
            {
              strcpy(s, "All ready chain done, exit.\n");
              sub_3AF5C(3, s, v8, *(int *)"");
            }
            goto LABEL_36;
          }
        }
        for ( j = 0; j != 4; ++j )
        {
          if ( sub_266F0(j) && sub_4A408(j) == 1 )
            sub_238DC(j, (unsigned __int8)byte_4B6CCC, v6, v32[0], *(_BYTE *)(*(_DWORD *)dword_530F0C + 21));
        }
        v6 = v32[0];
        v3 = (char *)sub_4BA4C();
        if ( v3 )
          break;
        sub_3F61C(v32[0], dword_AFBE0, 20);
        sub_4B64C((int)v32);
        v10 = sub_49E5C();
        do
        {
          if ( sub_266F0((int)v3) && sub_4A408((int)v3) == 1 )
            sub_4ACBC(v3, v10);
          ++v3;
        }
        while ( v3 != (char *)4 );
        for ( k = 0; k != 4; ++k )
        {
          if ( sub_266F0(k) && sub_4A408(k) == 1 )
          {
            v26 = *(float *)(*(_DWORD *)dword_530F0C + 28);
            if ( sub_4A7C8(k) )
              sub_4A294(k, 2);
            else
              *(_DWORD *)(dword_530F0C + 4 * k + 20) = 1;
            sub_4B608();
            v27 = dword_530F0C + 4 * k;
            if ( v26 > *(float *)(v27 + 36) )
              *(float *)(v27 + 36) = v26;
          }
        }
        v12 = 0;
        v13 = (_DWORD *)((char *)dword_80A894 + v10);
        v14 = &v32[4 * v7 + 16];
        do
        {
          v15 = sub_266F0(v12++);
          if ( v15 )
            v17 = *v13;
          ++v14;
          if ( v15 )
            v16 = v32[0];
          ++v13;
          if ( v15 )
          {
            *(v14 - 1) = v17;
            v32[v7 + 1] = v16;
          }
        }
        while ( v12 != 4 );
        ++v7;
        v32[0] -= v31;
        if ( v30 > v32[0] )
        {
          v3 = 0;
          goto LABEL_36;
        }
      }
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "Set voltage failed, exit.\n");
        sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
      }
    }
LABEL_36:
    v18 = 0;
    if ( sub_266F0(0) )
      goto LABEL_39;
    while ( ++v18 != 4 )
    {
      if ( sub_266F0(v18) )
      {
LABEL_39:
        v19 = 0;
        v20 = (float *)&v32[v18 + 16];
        v21 = 0;
        while ( v21 < v7 - 1 )
        {
          v22 = *v20;
          if ( *v20 < 5.0 )
          {
            v19 = v21;
            break;
          }
          v20 += 4;
          ++v21;
          if ( v22 > *v20 * 1.5 )
            v19 = v21;
        }
        v23 = (unsigned int)off_AFC24 > 3;
        v24 = v32[v19 + 1];
        *(_DWORD *)(dword_530F0C + 4 * v18 + 4) = v24;
        if ( v23 )
        {
          snprintf(s, 0x800u, "chain %d best level %d, freq %d\n", v18, v19, v24);
          sub_3AF5C(3, s, 0, v25);
        }
      }
    }
  }
  return v3;
}
