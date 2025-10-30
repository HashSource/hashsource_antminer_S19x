char *__fastcall sub_135408(unsigned __int16 *a1, int *a2)
{
  size_t v2; // r5
  int v3; // r3
  bool v4; // zf
  unsigned int v5; // r3
  char v6; // r2
  int v7; // r3
  int *v8; // r4
  int v9; // r1
  unsigned __int16 *v10; // r6
  bool v11; // zf
  int v12; // r0
  int v13; // r8
  char *v14; // r7
  char *v15; // r0
  bool v16; // zf
  const char *v17; // r5
  size_t v19; // r5
  unsigned int v20; // r1
  int v21; // r9
  void *v22; // r0
  int v23; // r2
  const char *v24; // r3
  int v25; // r0
  bool v26; // zf
  int v27; // r3
  int v28; // r0
  int v29; // r5
  int v30; // r3
  _DWORD *v31; // r3
  int v32; // r2
  bool v33; // zf
  int v34; // r0
  int v35; // r5
  char *v36; // r0
  const char *v37; // r5
  size_t v38; // r5
  signed int v39; // r0
  int v40; // r3
  char *v41; // r6
  char *v42; // r0
  char *v43; // r3
  char *v44; // r2
  unsigned int v45; // r1
  size_t v46; // r5
  int v47; // r4
  void *v48; // r0
  int v49; // r2
  const char *v50; // r3
  int v51; // r1
  bool v52; // zf
  int v53; // r3
  int *v54; // [sp+8h] [bp-Ch] BYREF
  int *v55; // [sp+Ch] [bp-8h] BYREF

  v3 = a2[16];
  v4 = v3 == 7;
  if ( v3 != 7 )
    v4 = v3 == 12;
  v5 = v3 - 4;
  v6 = !v4;
  if ( v5 > 1 )
    v7 = v6 & 1;
  else
    v7 = 0;
  if ( v7 )
    return "";
  v8 = a2;
  v9 = *a1;
  v10 = a1;
  v11 = v9 == 56;
  if ( v9 != 56 )
    v11 = v9 == 2;
  LOBYTE(v7) = !v11;
  if ( (v9 & 0xFFFB) == 0x13 )
    v7 = 0;
  if ( !v7 && !sub_12E748((int)a1, 3, v8) )
  {
    v12 = sub_12FABC((int)v10, (int)v8);
    v13 = v12;
    if ( v12 )
    {
      v14 = *(char **)(v12 + 8);
      if ( v14 )
      {
        if ( *(char *)(v12 + 3) >= 0 )
        {
          sub_94700(
            (int)"dwarf2read.c",
            22120,
            "%s: Assertion `%s' failed.",
            "const char* anonymous_struct_prefix(die_info*, dwarf2_cu*)",
            "DW_STRING_IS_CANONICAL (attr)");
          goto LABEL_80;
        }
        v15 = strrchr(*(const char **)(v12 + 8), 58);
        v16 = v15 == 0;
        if ( v15 )
          v16 = v14 == v15;
        if ( v16 || *(v15 - 1) != 58 )
          return "";
        v19 = v15 - 1 - v14;
        v20 = v15 - v14;
        v21 = *(_DWORD *)(*v8 + 40);
        v22 = *(void **)(v21 + 12);
        if ( *(_DWORD *)(v21 + 16) - (int)v22 < v20 )
        {
          obstack_newchunk(*(struct obstack **)(*v8 + 40), v20);
          v14 = *(char **)(v13 + 8);
          v22 = *(void **)(v21 + 12);
        }
        memcpy(v22, v14, v19);
        v23 = *(_DWORD *)(v21 + 12);
        *(_DWORD *)(v21 + 12) = v23 + v19 + 1;
        *(_BYTE *)(v23 + v19) = 0;
        v24 = *(const char **)(v21 + 12);
        v17 = *(const char **)(v21 + 8);
        v25 = *(_DWORD *)(v21 + 16);
        v26 = v17 == v24;
        if ( v17 == v24 )
          LOBYTE(v23) = *(_BYTE *)(v21 + 40);
        v27 = (unsigned int)&v24[*(_DWORD *)(v21 + 24)] & ~*(_DWORD *)(v21 + 24);
        *(_DWORD *)(v21 + 12) = v27;
        if ( v26 )
          *(_BYTE *)(v21 + 40) = v23 | 2;
        if ( v27 - *(_DWORD *)(v21 + 4) > (unsigned int)(v25 - *(_DWORD *)(v21 + 4)) )
        {
          v27 = v25;
          *(_DWORD *)(v21 + 12) = v25;
        }
        *(_DWORD *)(v21 + 8) = v27;
        if ( v17 )
          return (char *)v17;
      }
    }
  }
  v54 = v8;
  v28 = sub_1309AC((int)v10, (int *)&v54);
  if ( v28 )
  {
    v29 = *(_DWORD *)(v28 + 20);
    v8 = v54;
  }
  else
  {
    v29 = *((_DWORD *)v10 + 5);
  }
  if ( !v29 )
    return "";
  if ( (*(_BYTE *)(v29 + 3) & 1) != 0 )
  {
    v41 = sub_12FAF0(v10, v8);
    v42 = sub_12FAF0((_WORD *)v29, v8);
    v43 = v42;
    if ( dword_47AC88 > 0 )
    {
      v44 = "<unknown>";
      if ( !v42 )
        v43 = "<unknown>";
      if ( v41 )
        v44 = v41;
      v17 = "";
      sub_F43B4(&off_46D334, "template param type '%s' defined within parent '%s'", v44, v43);
      return (char *)v17;
    }
    return "";
  }
  switch ( *(_WORD *)v29 )
  {
    case 2:
    case 0x13:
    case 0x17:
    case 0x1E:
    case 0x38:
      v40 = *(_DWORD *)(sub_132D94((unsigned __int16 *)v29, v8) + 24);
      goto LABEL_66;
    case 4:
      v40 = *(_DWORD *)(sub_132D94((unsigned __int16 *)v29, v8) + 24);
      if ( (*(_BYTE *)(v40 + 2) & 0x20) == 0 )
        return (char *)sub_135408(v29, v8);
LABEL_66:
      v17 = *(const char **)(v40 + 12);
      if ( !v17 )
        return "";
      return (char *)v17;
    case 0x11:
    case 0x3C:
      if ( v8[16] != 4 )
        return "";
      v31 = *(_DWORD **)(dword_4872D8 + 340);
      if ( !v31 || !*v31 || !*((_DWORD *)v10 + 3) )
        return "";
      v32 = *v10;
      v33 = v32 == 2;
      if ( v32 != 2 )
        v33 = (v32 & 0xFFFB) == 19;
      if ( !v33 )
        return "";
      v55 = v8;
      v34 = sub_1309AC((int)v10, (int *)&v55);
      if ( v34 )
      {
        v10 = (unsigned __int16 *)v34;
        v8 = v55;
      }
      v35 = *((_DWORD *)v10 + 3);
      if ( !v35 )
        return "";
      break;
    case 0x39:
      v30 = *(_DWORD *)(sub_132D94((unsigned __int16 *)v29, v8) + 24);
      if ( v8[16] != 4 )
        return *(char **)(v30 + 12);
      v17 = *(const char **)(v30 + 12);
      if ( strcmp(v17, "::") )
        return (char *)v17;
      return "";
    default:
      return (char *)sub_135408(v29, v8);
  }
  while ( *(_WORD *)v35 != 46 || !sub_12EA34(v35, v8) )
  {
    v35 = *(_DWORD *)(v35 + 16);
    if ( !v35 )
      return "";
  }
  v14 = (char *)sub_194538(v8[17]);
  if ( !v14 )
    return "";
  v36 = sub_12FAF0(v10, v8);
  v37 = v36;
  if ( !v36
    || !strcmp(v36, v14)
    || (v38 = strlen(v37), v39 = strlen(v14), v39 <= (int)(v38 + 2))
    || (v2 = v39 - v38, v14[v2 - 1] != 58) )
  {
    v17 = "";
    free(v14);
    return (char *)v17;
  }
LABEL_80:
  v45 = v2 - 1;
  v46 = v2 - 2;
  v47 = *(_DWORD *)(*v8 + 40);
  v48 = *(void **)(v47 + 12);
  if ( *(_DWORD *)(v47 + 16) - (int)v48 < v45 )
  {
    obstack_newchunk((struct obstack *)v47, v45);
    v48 = *(void **)(v47 + 12);
  }
  memcpy(v48, v14, v46);
  v49 = *(_DWORD *)(v47 + 12);
  *(_DWORD *)(v47 + 12) = v49 + v46 + 1;
  *(_BYTE *)(v49 + v46) = 0;
  v50 = *(const char **)(v47 + 12);
  v17 = *(const char **)(v47 + 8);
  v51 = *(_DWORD *)(v47 + 16);
  v52 = v17 == v50;
  if ( v17 == v50 )
    LOBYTE(v49) = *(_BYTE *)(v47 + 40);
  v53 = (unsigned int)&v50[*(_DWORD *)(v47 + 24)] & ~*(_DWORD *)(v47 + 24);
  *(_DWORD *)(v47 + 12) = v53;
  if ( v52 )
    *(_BYTE *)(v47 + 40) = v49 | 2;
  if ( v53 - *(_DWORD *)(v47 + 4) > (unsigned int)(v51 - *(_DWORD *)(v47 + 4)) )
    *(_DWORD *)(v47 + 12) = v51;
  *(_DWORD *)(v47 + 8) = *(_DWORD *)(v47 + 12);
  free(v14);
  if ( !v17 )
    return "";
  return (char *)v17;
}
