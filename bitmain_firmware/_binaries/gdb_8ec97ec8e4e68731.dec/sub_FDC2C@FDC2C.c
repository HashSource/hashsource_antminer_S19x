_DWORD *__fastcall sub_FDC2C(_DWORD *a1, char *a2, char *a3, int a4, int a5)
{
  __int64 v5; // r6
  int v9; // r10
  _DWORD *v10; // r0
  size_t v11; // r1
  char *v13; // r11
  const char *v14; // r0
  void *v15; // r4
  int v16; // r7
  char *v17; // r2
  const char *v18; // r0
  char *v19; // r11
  int v20; // r2
  int v21; // r11
  int v22; // r1
  __int16 *v23; // r3
  int v24; // r0
  unsigned int v25; // r0
  int v26; // r0
  int v27; // r2
  int v28; // r0
  int v29; // r4
  char *v30; // r0
  _BYTE *v31; // r0
  int v32; // r4
  char *v33; // r0
  int v34; // [sp+14h] [bp-28h]
  int v35; // [sp+18h] [bp-24h]
  int v36; // [sp+1Ch] [bp-20h]
  void *ptr; // [sp+20h] [bp-1Ch] BYREF
  size_t v38; // [sp+24h] [bp-18h]
  _BYTE v39[20]; // [sp+28h] [bp-14h] BYREF

  HIDWORD(v5) = a4;
  v9 = *(_DWORD *)(a4 + 8);
  if ( dword_48970C )
  {
    LODWORD(v5) = *(_DWORD *)sub_242FC8(a1);
    v13 = sub_98EEC(SHIDWORD(v5));
    v14 = (const char *)((int (__fastcall *)(int))loc_21A5A4)(a5);
    sub_2594B0(v5, "cp_lookup_symbol_imports_or_template (%s, %s, %s, %s)\n", a2, a3, v13, v14);
  }
  if ( !v9 || (*(_BYTE *)(v9 + 20) & 0x1F) != 4 )
  {
LABEL_5:
    v10 = sub_FD9C8(&ptr, a2, a3, (_DWORD *)HIDWORD(v5), a5, 0, 1, 1);
    if ( dword_48970C )
    {
      v15 = ptr;
      v16 = *(_DWORD *)sub_242FC8(v10);
      if ( v15 )
        v17 = sub_98EEC((int)v15);
      else
        v17 = "NULL";
      sub_2594B0(v16, "cp_lookup_symbol_imports_or_template (...) = %s\n", v17);
    }
    v11 = v38;
    *a1 = ptr;
    a1[1] = v11;
    return a1;
  }
  if ( (*(_BYTE *)(v9 + 33) & 0x18) != 8
    || (v28 = sub_FCB10(a3, *(_DWORD *)(v9 + 48), *(_DWORD **)(v9 + 52)), (LODWORD(v5) = v28) == 0) )
  {
    if ( sub_21B3C4(v9) )
    {
      v18 = (const char *)sub_21B3C4(v9);
      v19 = (char *)v18;
      ptr = v39;
      if ( v18 )
        v20 = (int)&v18[strlen(v18)];
      else
        v20 = -1;
      sub_FCCA4(&ptr, v19, v20);
      v34 = sub_194438(4);
      v35 = sub_2209C0(v9);
      v21 = *(_DWORD *)(HIDWORD(v5) + 12);
      while ( 1 )
      {
        v25 = ((int (__fastcall *)(void *))loc_100310)(ptr);
        if ( !v25 )
          break;
        if ( v25 > v38 )
          sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", v25, v38);
        v38 = v25;
        *((_BYTE *)ptr + v25) = 0;
        v26 = sub_170CD8(v34, v35, ptr, v21, 1);
        if ( !v26 )
          break;
        v27 = *(_DWORD *)(v26 + 24);
        if ( (*(_WORD *)(v27 + 2) & 0x380) == 0x80 )
        {
          v23 = *(__int16 **)(v27 + 28);
          v22 = (unsigned __int16)v23[3];
        }
        else
        {
          v22 = 0;
          v23 = &word_3B4A2C;
        }
        v24 = sub_FCB10(a3, v22, *((_DWORD **)v23 + 13));
        v36 = v24;
        if ( v24 )
        {
          if ( dword_48970C )
          {
            v32 = *(_DWORD *)sub_242FC8(v24);
            v33 = sub_98EEC(v36);
            sub_2594B0(v32, "cp_lookup_symbol_imports_or_template (...) = %s\n", v33);
          }
          v31 = ptr;
          *a1 = v36;
          a1[1] = v21;
          if ( v31 != v39 )
            sub_339E64(v31);
          return a1;
        }
      }
      if ( ptr != v39 )
        sub_339E64(ptr);
    }
    goto LABEL_5;
  }
  if ( dword_48970C )
  {
    v29 = *(_DWORD *)sub_242FC8(v28);
    v30 = sub_98EEC(v5);
    sub_2594B0(v29, "cp_lookup_symbol_imports_or_template (...) = %s\n", v30);
  }
  *(_QWORD *)a1 = v5;
  return a1;
}
