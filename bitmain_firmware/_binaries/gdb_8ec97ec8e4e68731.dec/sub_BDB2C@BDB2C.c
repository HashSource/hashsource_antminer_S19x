int __fastcall sub_BDB2C(int a1, int a2, const char *a3, int a4, int a5)
{
  int v6; // r2
  __int16 *v7; // r3
  int v8; // r6
  int v9; // r0
  int v10; // r3
  int v11; // r11
  int v12; // r5
  int v13; // r10
  int v14; // r7
  int v15; // r11
  int v16; // r4
  int v17; // r5
  int v18; // r10
  int v19; // r4
  const char *v20; // r1
  int v21; // r1
  int v22; // r3
  int v23; // r4
  int v24; // r0
  _DWORD *v25; // r3
  int v26; // r5
  int v27; // r4
  int *v29; // r0
  int v30; // r8
  unsigned int v31; // r1
  int v32; // r3
  int v33; // r5
  int v34; // r0
  const char *v35; // r3
  const char *v36; // r10
  const char *v37; // r7
  signed int v38; // r10
  signed int v39; // r7
  int v40; // r5
  signed int v41; // r6
  bool v42; // zf
  const char *v43; // r3
  int v44; // r1
  bool v46; // cc
  int v47; // r4
  void (__fastcall *v48)(int, unsigned int); // r3
  int v51; // [sp+10h] [bp-14h]
  const char *v52; // [sp+10h] [bp-14h]
  int v54; // [sp+18h] [bp-Ch]
  unsigned int v55; // [sp+18h] [bp-Ch]
  int v56; // [sp+1Ch] [bp-8h]

  v6 = *(_DWORD *)(a5 + 24);
  if ( (*(_WORD *)(v6 + 2) & 0x380) == 0x80 )
    v7 = *(__int16 **)(v6 + 28);
  else
    v7 = &word_3B4A2C;
  v8 = *v7;
  v9 = sub_171258(a5);
  v10 = *(_DWORD *)(v9 + 24);
  v11 = v9;
  v12 = *(__int16 *)(v10 + 4);
  v54 = v10;
  v13 = v12 - 1;
  if ( v8 > v12 - 1 )
  {
LABEL_10:
    if ( v8 > 0 )
    {
      v22 = v54;
      v23 = 0;
      while ( 1 )
      {
        v24 = sub_171258(*(_DWORD *)(*(_DWORD *)(v22 + 24) + 24 * v23 + 12));
        v25 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 24) + 24) + 24 * v23);
        if ( sub_BDB2C(
               a1,
               a2,
               a3,
               a4
             + ((((((int)v25[1] >> 31) & 7u) + *v25) >> 3) | ((v25[1] + __CFADD__(((int)v25[1] >> 31) & 7, *v25)) << 29)),
               v24) )
        {
          break;
        }
        if ( v8 == ++v23 )
          return 0;
        v22 = *(_DWORD *)(v11 + 24);
      }
      return 1;
    }
    return 0;
  }
  else
  {
    v14 = *(_DWORD *)(v10 + 24);
    v15 = v12 - 1;
    v16 = 24 * v13;
    v51 = v9;
    v17 = -24 * v12;
    v18 = v14 + 24 * v13;
    v19 = v16 + 24;
    while ( 1 )
    {
      v20 = *(const char **)(v17 + v18 + v19 + 16);
      if ( v20 )
      {
        if ( !strcmp(a3, v20) )
          break;
      }
      --v15;
      v18 -= 24;
      if ( v8 > v15 )
      {
        v11 = v51;
        goto LABEL_10;
      }
    }
    v26 = v18 - v14;
    v27 = sub_174F0C(v18, v21);
    if ( v27 )
    {
      sub_BD7D0(a1, a2, (int *)(v51 + 24), v15);
      if ( !*(_BYTE *)(a2 + 8) )
        return 1;
LABEL_48:
      sub_946E0("static field `%s' has been optimized out, cannot use", a3);
    }
    v29 = (int *)(*(_DWORD *)(*(_DWORD *)(v51 + 24) + 24) + v26);
    v30 = *v29;
    v31 = v29[2];
    if ( (v31 & 0xFFFFFFF0) != 0 )
    {
      v33 = v31 >> 4;
      v34 = v29[3];
      v55 = v31 >> 4;
      a3 = (const char *)(v30 + 8 * a4);
      v35 = &a3[v31 >> 4];
      v36 = a3 + 7;
      if ( (int)a3 >= 0 )
        v36 = a3;
      v37 = v35 + 7;
      v52 = &a3[v31 >> 4];
      if ( (int)(v35 + 7) < 0 )
        v37 = v35 + 14;
      v38 = (unsigned int)v36 & 0xFFFFFFF8;
      v39 = (unsigned int)v37 & 0xFFFFFFF8;
      v56 = sub_171258(v34);
      if ( v33 > 128 )
      {
        sub_94700((int)"ax-gdb.c", 1312, "gen_bitfield_ref: bitfield too wide");
        goto LABEL_48;
      }
      v40 = 3;
      do
      {
        v41 = (8 << v40) + v38;
        if ( v39 >= v41 )
        {
          if ( v39 != v41 )
            sub_C09B8(a1, 40);
          sub_BD2A8(a1, v38 / 8);
          if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            sub_C0A80(a1, 8 << v40 >> 3);
          sub_C09B8(a1, dword_37B414[v40]);
          v42 = ((int (__fastcall *)(_DWORD))loc_165BB8)(*(_DWORD *)(a1 + 12)) == 0;
          if ( v42 )
            v43 = v52;
          else
            v43 = a3;
          if ( v42 )
            v44 = (int)&v43[-v41];
          else
            v44 = v38 - (_DWORD)v43;
          sub_BD25C(a1, v44);
          if ( v39 != v41 )
            sub_C09B8(a1, 43);
          ++v27;
          v38 += 8 << v40;
        }
      }
      while ( v40-- != 0 );
      v46 = v27 <= 1;
      v47 = v27 - 1;
      if ( !v46 )
      {
        do
        {
          sub_C09B8(a1, 16);
          --v47;
        }
        while ( v47 );
      }
      v48 = (void (__fastcall *)(int, unsigned int))sub_C0A68;
      if ( (*(_BYTE *)(*(_DWORD *)(v56 + 24) + 1) & 1) != 0 )
        v48 = (void (__fastcall *)(int, unsigned int))sub_C0A74;
      v48(a1, v55);
      *(_DWORD *)a2 = 0;
      *(_DWORD *)(a2 + 4) = v56;
      return 1;
    }
    else
    {
      sub_BD2A8(a1, a4 + (((((v29[1] >> 31) & 7u) + v30) >> 3) | ((v29[1] + __CFADD__((v29[1] >> 31) & 7, v30)) << 29)));
      v32 = *(_DWORD *)(*(_DWORD *)(v51 + 24) + 24);
      *(_DWORD *)a2 = 1;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(v32 + v26 + 12);
      return 1;
    }
  }
}
