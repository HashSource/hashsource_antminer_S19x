void __fastcall sub_13CB0C(int *a1, _DWORD *a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v6; // r8
  _DWORD *v7; // r9
  int v8; // r2
  int v9; // r7
  char v12; // r3
  char *v13; // r11
  char *v14; // r0
  char *v15; // r5
  int v16; // r3
  int v17; // r0
  char *v18; // r1
  char *v19; // r3
  bool v20; // zf
  char *v21; // r1
  bool v22; // cf
  int v23; // t1
  char v24; // r3
  unsigned __int8 v25; // r3
  int v26; // r2
  unsigned int v27; // r3
  int v28; // r2
  char *v29; // r7
  unsigned int v30; // r4
  int v31; // r8
  _DWORD *v32; // r0
  int v33; // lr
  void *v34; // r1
  int v35; // r12
  int v36; // r2
  int v37; // r2
  char *v38; // r4
  void *v39; // r0
  __int64 v40; // r0
  int v41; // r0
  int v42; // [sp+14h] [bp-44h]
  int v43; // [sp+18h] [bp-40h]
  int v44; // [sp+20h] [bp-38h] BYREF
  int v45; // [sp+24h] [bp-34h] BYREF
  char *v46; // [sp+28h] [bp-30h]
  int v47; // [sp+2Ch] [bp-2Ch]
  int v48; // [sp+44h] [bp-14h]

  if ( a4 > 0 )
  {
    v48 = v6;
    v7 = a3;
    v8 = *a3;
    v9 = a4 - 1;
    v12 = *(_BYTE *)(v8 + 20);
    v44 = v8;
    if ( (v12 & 0x1F) == 0xE )
LABEL_44:
      sub_946E0("Ada is not currently supported by the index");
    while ( 1 )
    {
      sub_13CA20((int)&v45, a2, &v44);
      if ( !(_BYTE)v46 )
        goto LABEL_16;
      v25 = *(_BYTE *)(v44 + 24);
      v26 = v25 & 7;
      if ( v26 == 1 )
      {
        v27 = (unsigned __int8)((v25 >> 3) - 1);
        if ( v27 > 0xD )
          v6 = 4;
        else
          LOWORD(v26) = 2656;
        if ( v27 <= 0xD )
        {
          HIWORD(v26) = 58;
          v6 = *(_DWORD *)(v26 + 4 * v27 - 2904);
        }
      }
      else if ( v26 == 2 )
      {
        v6 = 1;
      }
      else
      {
        v6 = 4;
      }
      v13 = (char *)sub_21B7DC(v44);
      v14 = (char *)a1[1];
      v15 = (char *)a1[2];
      v16 = *a1 + 1;
      *a1 = v16;
      if ( -858993459 * ((v15 - v14) >> 2) <= 4 * v16 / 3u )
      {
        v28 = a1[3];
        v45 = (int)v14;
        v46 = v15;
        v47 = v28;
        a1[1] = 0;
        a1[3] = 0;
        a1[2] = 0;
        if ( -1717986918 * ((v15 - v14) >> 2) )
        {
          sub_148E7C(a1 + 1);
          v14 = (char *)v45;
          v15 = v46;
        }
        if ( v14 != v15 )
        {
          v42 = v9;
          v43 = v6;
          v29 = v14 + 20;
          v30 = (unsigned int)&v14[4 * ((unsigned int)(v15 - (v14 + 20)) >> 2) + 40];
          do
          {
            v31 = *((_DWORD *)v29 - 5);
            if ( v31 )
            {
              v32 = (_DWORD *)sub_11DCA8((int)a1, *((char **)v29 - 5));
              v33 = *((_DWORD *)v29 - 4);
              v34 = (void *)v32[2];
              v32[3] = 0;
              v32[4] = 0;
              v32[2] = 0;
              v35 = *((_DWORD *)v29 - 3);
              *v32 = v31;
              v32[1] = v33;
              v32[2] = v35;
              *((_DWORD *)v29 - 3) = 0;
              v36 = v32[3];
              v32[3] = *((_DWORD *)v29 - 2);
              *((_DWORD *)v29 - 2) = v36;
              v37 = v32[4];
              v32[4] = *((_DWORD *)v29 - 1);
              *((_DWORD *)v29 - 1) = v37;
              if ( v34 )
                sub_339E64(v34);
            }
            v29 += 20;
          }
          while ( v29 != (char *)v30 );
          v38 = (char *)v45;
          v15 = v46;
          v9 = v42;
          v6 = v43;
          if ( (char *)v45 != v46 )
          {
            do
            {
              v39 = (void *)*((_DWORD *)v38 + 2);
              if ( v39 )
                sub_339E64(v39);
              v38 += 20;
            }
            while ( v15 != v38 );
            v15 = (char *)v45;
          }
        }
        if ( v15 )
          sub_339E64(v15);
      }
      v17 = sub_11DCA8((int)a1, v13);
      if ( !*(_DWORD *)v17 )
        *(_DWORD *)v17 = v13;
      v45 = 0;
      if ( (a5 & 0xFF000000) != 0 )
        goto LABEL_46;
      v45 = a5 | (a6 << 31);
      if ( (unsigned int)(v6 - 1) > 3 )
      {
        sub_94700(
          (int)"dwarf2read.c",
          25638,
          "%s: Assertion `%s' failed.",
          "void add_index_entry(mapped_symtab*, const char*, int, gdb_index_symbol_kind, offset_type)",
          "(kind) >= GDB_INDEX_SYMBOL_KIND_TYPE && (kind) <= GDB_INDEX_SYMBOL_KIND_OTHER");
LABEL_46:
        v40 = sub_94700(
                (int)"dwarf2read.c",
                25636,
                "%s: Assertion `%s' failed.",
                "void add_index_entry(mapped_symtab*, const char*, int, gdb_index_symbol_kind, offset_type)",
                "((cu_index) & ~GDB_INDEX_CU_MASK) == 0");
        v41 = sub_148664(&v45, HIDWORD(v40));
        sub_338FFC(v41);
      }
      v18 = *(char **)(v17 + 12);
      v6 = a5 | (a6 << 31) | (v6 << 28);
      v19 = *(char **)(v17 + 16);
      v45 = v6;
      if ( v18 != v19 )
        break;
      sub_E4118((char **)(v17 + 8), v18, &v45);
      v22 = v9-- != 0;
      if ( !v22 )
        return;
LABEL_18:
      v23 = v7[1];
      ++v7;
      v24 = *(_BYTE *)(v23 + 20);
      v44 = v23;
      if ( (v24 & 0x1F) == 0xE )
        goto LABEL_44;
    }
    v20 = v18 == 0;
    v21 = v18 + 4;
    if ( !v20 )
      *((_DWORD *)v21 - 1) = v6;
    *(_DWORD *)(v17 + 12) = v21;
LABEL_16:
    v22 = v9-- != 0;
    if ( !v22 )
      return;
    goto LABEL_18;
  }
}
