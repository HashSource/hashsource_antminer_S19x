int *__fastcall sub_120378(const char **a1, int a2)
{
  const char **v2; // r5
  const char *v3; // r6
  int v4; // r11
  int v5; // r4
  const char *v6; // r9
  int v7; // r10
  int v8; // r3
  unsigned int v9; // r7
  int v10; // r8
  int v11; // r0
  int v12; // r1
  int v13; // r3
  int *v14; // r5
  int *v15; // r1
  int v16; // r12
  bool v17; // zf
  int v18; // r1
  void *v19; // r0
  int v20; // r2
  bool v21; // zf
  _BOOL4 v22; // r10
  bool v24; // zf
  int v25; // r1
  int v26; // r2
  int v27; // r10
  _DWORD *v28; // r8
  int v29; // r0
  _DWORD *v30; // r3
  int v31; // r11
  int v32; // r8
  int v33; // r8
  char *v34; // r0
  char *v35; // r0
  int v36; // [sp+0h] [bp-3Ch]
  int v37; // [sp+0h] [bp-3Ch]
  int v38; // [sp+4h] [bp-38h]
  const char *v40; // [sp+Ch] [bp-30h]
  _DWORD s[10]; // [sp+14h] [bp-28h] BYREF

  if ( a2 )
    v2 = a1 + 13;
  v3 = a1[2];
  v4 = *(_DWORD *)(dword_4872D8 + 344);
  if ( !a2 )
    v2 = a1 + 8;
  if ( *((_BYTE *)v2 + 17) )
    v5 = v2[2] == 0;
  else
    v5 = sub_11DFFC(v2);
  if ( v5 )
    return 0;
  if ( !*((_BYTE *)v2 + 16) )
    ((void (__fastcall *)(int, const char **))loc_11FFD0)(v4, v2);
  v6 = v2[1];
  v40 = v2[2];
  v36 = (*(int (__fastcall **)(const char *))(*((_DWORD *)v3 + 1) + 40))(v6);
  v7 = (int)(v6 + 16);
  v8 = *((_DWORD *)v3 + 1);
  if ( v36 == 2 )
  {
    v9 = (*(int (__fastcall **)(const char *))(v8 + 40))(v6 + 4);
    v38 = (*(int (__fastcall **)(const char *))(*((_DWORD *)v3 + 1) + 40))(v6 + 8);
    v10 = (*(int (__fastcall **)(const char *))(*((_DWORD *)v3 + 1) + 40))(v6 + 12);
  }
  else
  {
    v38 = (*(int (__fastcall **)(const char *))(v8 + 40))(v6 + 8);
    v10 = (*(int (__fastcall **)(const char *))(*((_DWORD *)v3 + 1) + 40))(v6 + 12);
    if ( (unsigned int)(v36 - 1) > 1 )
    {
      v34 = sub_98880(v36, 0);
      sub_946E0("Dwarf Error: unsupported DWP file version (%s) [in module %s]", v34, *a1);
    }
    v9 = 0;
  }
  if ( (v10 & (v10 - 1)) != 0 )
  {
    v35 = sub_98880(v10, 0);
    sub_946E0("Dwarf Error: number of slots in DWP hash table (%s) is not power of 2 [in module %s]", v35, *a1);
  }
  v11 = *(_DWORD *)(v4 + 64);
  v12 = *(_DWORD *)(v4 + 60);
  v13 = (unsigned __int8)(v11 - v12);
  if ( (unsigned int)(v11 - v12) <= 0x37 )
  {
    obstack_newchunk((struct obstack *)(v4 + 48), 56);
    v12 = *(_DWORD *)(v4 + 60);
    v11 = *(_DWORD *)(v4 + 64);
  }
  v14 = *(int **)(v4 + 56);
  v15 = (int *)(v12 + 56);
  v16 = *(_DWORD *)(v4 + 72);
  *(_DWORD *)(v4 + 60) = v15;
  v17 = v15 == v14;
  if ( v15 == v14 )
    LOBYTE(v13) = *(_BYTE *)(v4 + 88);
  v18 = ((unsigned int)v15 + v16) & ~v16;
  *(_DWORD *)(v4 + 60) = v18;
  if ( v17 )
    *(_BYTE *)(v4 + 88) = v13 | 2;
  if ( v18 - *(_DWORD *)(v4 + 52) > (unsigned int)(v11 - *(_DWORD *)(v4 + 52)) )
  {
    v18 = v11;
    *(_DWORD *)(v4 + 60) = v11;
  }
  *(_DWORD *)(v4 + 56) = v18;
  v19 = memset(v14 + 6, 0, 0x20u);
  v20 = v7 + 8 * v10;
  v14[1] = v9;
  v21 = v38 == 0;
  if ( v38 )
    v21 = v10 == 0;
  v14[2] = v38;
  *v14 = v36;
  v14[3] = v10;
  v14[4] = v7;
  v14[5] = v20;
  if ( !v21 )
  {
    v24 = v36 == 2;
    if ( v36 == 2 )
      v24 = v9 == 0;
    if ( !v24 )
    {
      v25 = v36;
      v26 = v20 + 4 * v10;
      v37 = v26;
      if ( v25 == 1 )
      {
        v14[6] = v26;
      }
      else
      {
        if ( v9 <= 1 )
          sub_946E0("Dwarf Error: bad DWP hash table, too few columns in section table [in module %s]", *a1);
        if ( v9 > 6 )
          sub_946E0("Dwarf Error: bad DWP hash table, too many columns in section table [in module %s]", *a1);
        memset(v19, 255, 0x24u);
        memset(s, 255, 0x24u);
        v27 = v37;
        v28 = v14 + 5;
        do
        {
          v29 = (*(int (__fastcall **)(int))(*((_DWORD *)v3 + 1) + 40))(v27);
          if ( (unsigned int)(v29 - 1) > 7 )
            sub_946E0("Dwarf Error: bad DWP hash table, bad section id %d in section table [in module %s]", v29, *a1);
          v30 = &s[v29 + 9];
          if ( *(v30 - 9) != -1 )
            sub_946E0(
              "Dwarf Error: bad DWP hash table, duplicate section id %d in section table [in module %s]",
              v29,
              *a1);
          *(v30 - 9) = v5++;
          v28[1] = v29;
          ++v28;
          v27 += 4;
        }
        while ( v5 != v9 );
        if ( (s[1] != -1) + (s[2] != -1) != 1 )
          sub_946E0("Dwarf Error: bad DWP hash table, missing/duplicate DWO info/types section [in module %s]", *a1);
        if ( s[3] == -1 )
          sub_946E0("Dwarf Error: bad DWP hash table, missing DWO abbrev section [in module %s]", *a1);
        v31 = 4 * v38 * v9;
        v32 = v37 + 4 * v9;
        v14[12] = v32;
        v33 = v32 + v31;
        v14[13] = v33;
        if ( v33 + v31 > (unsigned int)&v40[(_DWORD)v6] )
          sub_946E0("Dwarf Error: DWP index section is corrupt (too small) [in module %s]", *a1);
      }
      return v14;
    }
    goto LABEL_30;
  }
  if ( v10 | v38 )
    goto LABEL_30;
  v22 = v36 == 2;
  if ( !v9 )
    v22 = 0;
  if ( v22 )
  {
LABEL_30:
    if ( dword_47AC88 > 0 )
      sub_F43B4(&off_46D334, "Empty DWP but nr_slots,nr_units,nr_columns not all zero [in modules %s]", *a1);
  }
  return v14;
}
