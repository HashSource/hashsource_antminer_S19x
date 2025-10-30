int __fastcall sub_173F40(unsigned int a1, unsigned int a2)
{
  unsigned int *v2; // r4
  struct obstack *v3; // r8
  bool v6; // zf
  int v7; // r11
  unsigned int *v8; // r0
  int v9; // r3
  unsigned int v10; // r3
  unsigned int *v11; // r2
  _DWORD *v12; // r1
  _DWORD *v13; // r6
  _DWORD *v14; // r7
  _DWORD *v15; // r0
  _DWORD *v16; // r6
  char *v17; // r10
  const char **v18; // r3
  int v19; // r5
  int v21; // r12
  unsigned int v22; // r0
  unsigned int v23; // r1
  const char **v24; // r3
  int v25; // r10
  char v26; // r3
  int v27; // r3
  unsigned int v28; // r2
  unsigned int v29; // r3
  unsigned int v30; // r3
  int v31; // r2
  const char *v32; // r3
  const char *v33; // r1
  size_t v34; // r2
  unsigned int *v35; // r0
  __int64 v36; // r0
  int *v37; // r0
  int v38; // r1
  int v39; // r2
  unsigned int v40; // r6
  unsigned int v41; // r7
  int v42; // r3
  void *v43; // [sp+8h] [bp-2Ch]
  int v44; // [sp+Ch] [bp-28h]
  int v45; // [sp+Ch] [bp-28h]
  unsigned int v46; // [sp+Ch] [bp-28h]
  const char **v47; // [sp+10h] [bp-24h]
  int v48; // [sp+10h] [bp-24h]
  int v49; // [sp+14h] [bp-20h]
  unsigned int v50; // [sp+14h] [bp-20h]
  int v51; // [sp+18h] [bp-1Ch] BYREF
  _DWORD *v52; // [sp+1Ch] [bp-18h] BYREF
  _DWORD *v53; // [sp+20h] [bp-14h]
  int v54; // [sp+24h] [bp-10h]
  int v55; // [sp+28h] [bp-Ch]
  int v56; // [sp+2Ch] [bp-8h]

  v6 = a1 == 0;
  if ( a1 )
    v6 = a2 == 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  if ( v6 )
  {
    sub_94700(
      (int)"gdbtypes.c",
      3674,
      "%s: Assertion `%s' failed.",
      "int types_deeply_equal(type*, type*)",
      "type1 != NULL && type2 != NULL");
LABEL_51:
    sub_94700(
      (int)"gdbtypes.c",
      3613,
      "%s: Assertion `%s' failed.",
      "type_equality_entry_d* VEC_type_equality_entry_d_quick_push(VEC_type_equality_entry_d*, const type_equality_entry_"
      "d*, const char*, unsigned int)",
      "quick_push");
    goto LABEL_52;
  }
  if ( a1 == a2 )
    return 1;
  v7 = 0;
  v3 = (struct obstack *)sub_C1938(0, 0);
  v8 = sub_99EB8(0, 1, 8, 8);
  v2 = v8;
  if ( *v8 >= v8[1] )
  {
LABEL_52:
    v36 = sub_94700(
            (int)"gdbtypes.c",
            3684,
            "%s: Assertion `%s' failed.",
            "type_equality_entry_d* VEC_type_equality_entry_d_quick_push(VEC_type_equality_entry_d*, const type_equality_"
            "entry_d*, const char*, unsigned int)",
            "quick_push");
    if ( HIDWORD(v36) != 1 )
    {
      sub_339E78(v36);
      sub_92E60();
    }
    v37 = (int *)sub_339E78(v36);
    v38 = v37[1];
    v39 = v37[2];
    v19 = 0;
    v54 = *v37;
    v55 = v38;
    v56 = v39;
    v7 = v54;
    sub_339EF8(v54);
    goto LABEL_13;
  }
  v9 = *v8 + 1;
  *v8 = v9;
  v8[2 * v9] = a1;
  v8[2 * v9 + 1] = a2;
  v43 = sub_92E28();
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *v2;
      if ( !*v2 )
      {
        v19 = 1;
        goto LABEL_12;
      }
      v11 = &v2[2 * v10];
      v12 = (_DWORD *)v11[1];
      v52 = (_DWORD *)*v11;
      v53 = v12;
      *v2 = v10 - 1;
      sub_C1630(&v52, 8u, v3, (struct obstack *)&v51);
      if ( v51 )
      {
        v13 = v53;
        v14 = (_DWORD *)sub_171258(v52);
        v15 = (_DWORD *)sub_171258(v13);
        v16 = v15;
        if ( v14 != v15 )
          break;
      }
    }
    v17 = (char *)v14[6];
    v18 = (const char **)v15[6];
    if ( *(char *)v18 != *v17
      || v14[5] != v15[5]
      || (((unsigned __int8)v17[1] ^ *((_BYTE *)v18 + 1)) & 3) != 0
      || (((unsigned __int8)v17[1] ^ *((_BYTE *)v18 + 1)) & 0x80) != 0
      || (((unsigned __int8)v17[2] ^ *((_BYTE *)v18 + 2)) & 1) != 0 )
    {
      goto LABEL_11;
    }
    v21 = v14[4];
    v22 = v15[4];
    v23 = ((v21 ^ v22) >> 6) & 1;
    if ( v21 != v22 )
      v23 = 1;
    if ( v23 )
      goto LABEL_11;
    v44 = *((__int16 *)v17 + 2);
    if ( *((__int16 *)v18 + 2) != v44 )
      goto LABEL_11;
    v49 = *v17;
    v47 = v18;
    if ( !sub_16FB24(*((const char **)v17 + 3), v18[3]) || !sub_16FB24(*((const char **)v17 + 2), v47[2]) )
      goto LABEL_11;
    v24 = v47;
    if ( v49 == 12 )
    {
      if ( !sub_17077C(*((_DWORD *)v17 + 6), (int)v47[6]) )
        goto LABEL_11;
      v17 = (char *)v14[6];
      v24 = (const char **)v16[6];
      goto LABEL_57;
    }
    if ( v44 > 0 )
      break;
LABEL_57:
    v40 = *((_DWORD *)v17 + 5);
    v41 = (unsigned int)v24[5];
    if ( v40 )
    {
      if ( !v41 )
        goto LABEL_11;
      if ( v2[1] == *v2 )
        v2 = sub_99EB8(v2, 1, 8, 8);
      if ( *v2 >= v2[1] )
      {
LABEL_64:
        sub_94700(
          (int)"gdbtypes.c",
          3626,
          "%s: Assertion `%s' failed.",
          "type_equality_entry_d* VEC_type_equality_entry_d_quick_push(VEC_type_equality_entry_d*, const type_equality_en"
          "try_d*, const char*, unsigned int)",
          "quick_push");
LABEL_65:
        v54 = v7;
        sub_92F1C(v7, v55, v56);
      }
      v42 = *v2 + 1;
      *v2 = v42;
      v2[2 * v42] = v40;
      v2[2 * v42 + 1] = v41;
    }
    else if ( v41 )
    {
      goto LABEL_11;
    }
  }
  v25 = *((_DWORD *)v17 + 6);
  v45 = (int)v47[6];
  v26 = *(_BYTE *)(v45 + 8) ^ *(_BYTE *)(v25 + 8);
  if ( (v26 & 1) == 0 )
  {
    v48 = 0;
    while ( 2 )
    {
      if ( ((*(_DWORD *)(v25 + 8) ^ *(_DWORD *)(v45 + 8)) & 0xFFFFFFF0) == 0
        && (v26 & 0xE) == 0
        && sub_16FB24(*(const char **)(v25 + 16), *(const char **)(v45 + 16)) )
      {
        v27 = (*(unsigned __int8 *)(v25 + 8) >> 1) & 7;
        switch ( v27 )
        {
          case 0:
          case 1:
            if ( *(_QWORD *)v25 == *(_QWORD *)v45 )
              goto LABEL_36;
            break;
          case 2:
            if ( *(_DWORD *)v25 != *(_DWORD *)v45 )
              break;
            goto LABEL_36;
          case 3:
            if ( !sub_16FB24(*(const char **)v25, *(const char **)v45) )
              break;
            goto LABEL_36;
          case 4:
            v32 = *(const char **)v25;
            v33 = *(const char **)v45;
            if ( *(_DWORD *)(*(_DWORD *)v25 + 8) != *(_DWORD *)(*(_DWORD *)v45 + 8) )
              break;
            v34 = *((_DWORD *)v32 + 1);
            if ( v34 != *((_DWORD *)v33 + 1) || memcmp(*(const void **)v32, *(const void **)v33, v34) )
              break;
LABEL_36:
            v28 = v2[1];
            v29 = *v2;
            v50 = *(_DWORD *)(v25 + 12);
            v46 = *(_DWORD *)(v45 + 12);
            if ( v28 == *v2 )
            {
              v35 = sub_99EB8(v2, 1, 8, 8);
              v29 = *v35;
              v2 = v35;
              v28 = v35[1];
            }
            if ( v28 <= v29 )
              goto LABEL_51;
            v17 = (char *)v14[6];
            v30 = v29 + 1;
            *v2 = v30;
            v31 = *((__int16 *)v17 + 2);
            v2[2 * v30] = v50;
            ++v48;
            v2[2 * v30 + 1] = v46;
            v24 = (const char **)v16[6];
            if ( v31 <= v48 )
              goto LABEL_57;
            v25 = *((_DWORD *)v17 + 6) + 24 * v48;
            v45 = (int)&v24[6][24 * v48];
            v26 = *(_BYTE *)(v45 + 8) ^ *(_BYTE *)(v25 + 8);
            if ( (v26 & 1) != 0 )
              break;
            continue;
          default:
            sub_94700((int)"gdbtypes.c", 3606, "Unsupported field kind %d by check_types_equal", v27);
            goto LABEL_64;
        }
      }
      break;
    }
  }
LABEL_11:
  v19 = 0;
LABEL_12:
  sub_92E40((int)v43);
LABEL_13:
  sub_C197C((int)v3);
  free(v2);
  if ( v7 < 0 )
    goto LABEL_65;
  return v19;
}
