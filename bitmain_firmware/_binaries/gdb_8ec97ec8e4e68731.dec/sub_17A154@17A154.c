int __fastcall sub_17A154(int a1, int *a2, _QWORD *a3, _DWORD *a4)
{
  _DWORD *v8; // r0
  int v9; // r0
  int v10; // r8
  int v11; // r9
  int v12; // r0
  int v13; // r0
  int v14; // r9
  int v15; // r7
  int v16; // r0
  const char *v17; // r0
  const char *v18; // r10
  int v19; // r7
  const char *v20; // r10
  char *v21; // r0
  int v22; // r8
  const char *v23; // r1
  size_t v24; // r2
  int v25; // r10
  int v26; // r0
  __int64 v27; // r8
  const char *v29; // r1
  int v30; // r3
  int v31; // [sp+0h] [bp-34h] BYREF
  unsigned int v32; // [sp+4h] [bp-30h]
  _DWORD v33[3]; // [sp+8h] [bp-2Ch] BYREF

  v8 = (_DWORD *)sub_26BC70(a1);
  v9 = sub_171258(v8);
  if ( **(_BYTE **)(v9 + 24) != 3 )
    return 0;
  v10 = v9;
  v11 = sub_170040(v9);
  if ( a4 )
    *a4 = 0;
  v12 = sub_2616BC(a1);
  v13 = sub_26EBA8(v12);
  v14 = ((int (__fastcall *)(int, int, int))loc_179644)(v11, v10, v13);
  if ( !v14 )
    return 0;
  v15 = ((int (*)(void))loc_26C09C)();
  v16 = sub_26BFE0(v14);
  sub_1B240C(v33, v15 + v16);
  if ( !v33[0] )
    return 0;
  v17 = (const char *)sub_21B790(v33[0]);
  v18 = v17;
  if ( v17 )
  {
    v19 = strncmp(v17, "vtable for ", 0xBu);
    if ( !v19 )
    {
      v20 = v18 + 11;
      v21 = strchr(v20, 64);
      if ( v21 )
      {
        v22 = v21 - v20;
        v23 = v20;
        v24 = v21 - v20;
        v32 = (unsigned int)&v31 >> 3;
        v20 = (const char *)&v31;
        memcpy(&v31, v23, v24);
        *(_BYTE *)(v22 + 8 * v32) = 0;
      }
      v25 = sub_1007F0(v20, 0);
      if ( v25 )
      {
        v26 = sub_26F824(v14, 1);
        v27 = sub_26EB1C(v26);
        if ( a2 )
        {
          if ( -v27 == sub_26BFE0(a1) )
            v19 = *(_DWORD *)(sub_26BD30(a1) + 20) >= *(_DWORD *)(v25 + 20);
          *a2 = v19;
        }
        if ( a3 )
        {
          *a3 = -v27;
          return v25;
        }
        return v25;
      }
      return 0;
    }
    v29 = *(const char **)(*(_DWORD *)(v10 + 24) + 8);
    if ( v29 )
      sub_946B0("can't find linker symbol for virtual table for `%s' value", v29);
    else
      sub_946B0("can't find linker symbol for virtual table for `%s' value", "<unnamed type>");
    sub_946B0("  found `%s' instead", v18);
    return 0;
  }
  else
  {
    v30 = *(_DWORD *)(v10 + 24);
    if ( *(_DWORD *)(v30 + 8) )
    {
      sub_946B0("can't find linker symbol for virtual table for `%s' value", *(const char **)(v30 + 8));
      return 0;
    }
    sub_946B0("can't find linker symbol for virtual table for `%s' value", "<unnamed type>");
    return 0;
  }
}
