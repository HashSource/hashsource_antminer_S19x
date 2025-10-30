int __fastcall sub_3405C(int **a1, int a2, int a3)
{
  int result; // r0
  int v6; // r0
  int v7; // r2
  int v8; // r4
  unsigned int v9; // r5
  int v10; // lr
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r4
  int v15; // t1
  int v16; // r12
  unsigned int v17; // r0
  unsigned int v18; // t1
  unsigned int v20; // r12
  int v21; // r0
  unsigned int v22; // r4
  int v23; // t1
  int v24; // lr
  unsigned int v25; // r2
  unsigned int v26; // t1
  int v27; // r6
  int v28; // r0
  int v29; // r4
  int v30; // r0
  int v31; // r0
  int v32; // r3
  int v33; // r5
  int v34; // r0
  int v35; // r5
  int v36; // r6
  int v37; // r8
  int v38; // r0
  int v39; // r1
  char *v40; // r12
  int v41; // r3
  int v42; // t1
  int v43; // t1
  int v44; // [sp+8h] [bp-81Ch]
  unsigned int v45; // [sp+Ch] [bp-818h]
  char *v46; // [sp+10h] [bp-814h]
  unsigned int v47; // [sp+1Ch] [bp-808h] BYREF
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "\n");
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, ">>>> Get ideal hash rate, round %d.\n", a3);
      sub_47AB4(3, s, 0);
    }
  }
  v44 = sub_385EC(a2);
  if ( v44 )
  {
    if ( (unsigned int)dword_9E31C <= 3 )
      return v44;
    strcpy(s, "Board init failed.\n");
    sub_47AB4(3, s, 0);
    return v44;
  }
  sub_38064();
  v6 = **a1;
  v7 = (*a1)[4];
  if ( v6 > v7 )
  {
    **a1 = v7;
    v6 = **a1;
  }
  sub_1A0F0(v6);
  sub_30CAC(
    dword_1AEA6C + 12,
    (unsigned __int8)byte_A0D79,
    dword_9C298,
    *(unsigned __int8 *)(*(_DWORD *)(dword_1AEA6C + 8) + 8));
  v8 = sub_1A1C0();
  if ( v8 != sub_1A1B0() )
  {
    result = sub_1A3B8();
    if ( result )
      return result;
  }
  v9 = 0xFFFFFF;
  v10 = dword_A0D68;
  v11 = dword_1AEA6C + 8;
  v12 = dword_1AEA6C + 5000;
  v13 = dword_1AEA6C + 8;
  v14 = dword_A0D68;
  do
  {
    v15 = *(_DWORD *)(v14 + 4);
    v14 += 4;
    v16 = v13 + 312;
    if ( v15 == 1 )
    {
      do
      {
        v18 = *(_DWORD *)(v13 + 4);
        v13 += 4;
        v17 = v18;
        if ( v9 >= v18 )
          v9 = v17;
      }
      while ( v13 != v16 );
    }
    v13 = v16;
  }
  while ( v16 != v12 );
  v20 = dword_9E31C;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "chain = %d, freq_min = %d\n", 255, v9);
    sub_47AB4(3, s, 0);
    v10 = dword_A0D68;
    v20 = dword_9E31C;
    v11 = dword_1AEA6C + 8;
    v12 = dword_1AEA6C + 5000;
  }
  v21 = v10;
  v22 = 0;
  do
  {
    v23 = *(_DWORD *)(v21 + 4);
    v21 += 4;
    v24 = v11 + 312;
    if ( v23 == 1 )
    {
      do
      {
        v26 = *(_DWORD *)(v11 + 4);
        v11 += 4;
        v25 = v26;
        if ( v22 < v26 )
          v22 = v25;
      }
      while ( v11 != v24 );
    }
    v11 = v24;
  }
  while ( v24 != v12 );
  if ( v20 > 3 )
  {
    snprintf(s, 0x800u, "chain = %d, freq_max = %d\n", 255, v22);
    sub_47AB4(3, s, 0);
  }
  v27 = 0;
  v47 = v22;
  sub_22E9C(v9, 8, 20);
  do
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * v27 + 4) != 1 )
    {
      if ( ++v27 == 16 )
        goto LABEL_34;
    }
    v28 = v27++;
    sub_37BD4(v28);
  }
  while ( v27 != 16 );
LABEL_34:
  v29 = 0;
  v30 = sub_39138(&v47);
  v31 = sub_37770(v30);
  v32 = dword_A0D68;
  v33 = v31;
  do
  {
    while ( *(_DWORD *)(v32 + 4 * v29 + 4) != 1 )
    {
      if ( ++v29 == 16 )
        goto LABEL_38;
    }
    v34 = v29++;
    sub_3883C(v34, v33);
    v32 = dword_A0D68;
  }
  while ( v29 != 16 );
LABEL_38:
  v45 = dword_9E31C;
  v46 = (char *)&unk_1D2C70 + v33;
  v35 = 0;
  v36 = 12;
  v37 = 0;
  while ( 1 )
  {
    if ( *(_DWORD *)(v32 + 4 * v35 + 4) == 1 )
    {
      v38 = 0;
      v39 = dword_1AEA6C + v36 - 4;
      v40 = &v46[v36];
      do
      {
        v42 = *(_DWORD *)(v39 + 4);
        v39 += 4;
        v41 = v42;
        v43 = *((_DWORD *)v40 + 1);
        v40 += 4;
        v38 += v43 * v41 / 0x1F40u;
      }
      while ( v39 != dword_1AEA6C + v36 + 308 );
      v37 += v38;
      *(_DWORD *)(dword_1AEA6C + 4 * (v35 + 1250) + 4) = v38;
      if ( v45 > 3 )
        break;
    }
    ++v35;
    v36 += 312;
    if ( v35 == 16 )
      goto LABEL_46;
LABEL_40:
    v32 = dword_A0D68;
  }
  snprintf(s, 0x800u, "chain = %d, ideal_hash_rate_GH = %d\n", v35++, v38);
  sub_47AB4(3, s, 0);
  v36 += 312;
  v45 = dword_9E31C;
  if ( v35 != 16 )
    goto LABEL_40;
LABEL_46:
  if ( v45 > 3 )
  {
    snprintf(s, 0x800u, "hash_rate_total_GH = %d\n", v37);
    sub_47AB4(3, s, 0);
  }
  return v44;
}
