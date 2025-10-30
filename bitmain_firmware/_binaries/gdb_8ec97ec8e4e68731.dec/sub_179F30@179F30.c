int __fastcall sub_179F30(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v9; // r6
  int v10; // r1
  int v11; // r0
  int v12; // r12
  int v13; // r0
  int v14; // r2
  int v15; // r1
  int v16; // r4
  int v18; // r9
  __int64 v19; // r0
  int v20; // r4
  int v21; // r4
  int v22; // r0
  __int64 v23; // r0
  int v24; // r0
  int v25; // r1
  bool v26; // zf

  v9 = sub_170040(a1);
  sub_1780B4();
  v10 = *(_DWORD *)(a1 + 24);
  v12 = v11;
  v13 = *(_DWORD *)(v10 + 24);
  LOWORD(v14) = (unsigned __int16)&word_3B4A2C;
  if ( (*(_WORD *)(v10 + 2) & 0x380) == 0x80 )
  {
    HIWORD(v14) = (unsigned int)&word_3B4A2C >> 16;
    v25 = *(_DWORD *)(v10 + 28);
    v26 = v25 == v14;
    v15 = *(_DWORD *)(v25 + 16);
    v16 = *(_QWORD *)(v13 + 24 * a2) / 8LL;
    if ( v26 )
    {
      if ( !v15 )
        return v16;
    }
    else if ( !v15 )
    {
      return v16;
    }
  }
  else
  {
    HIWORD(v14) = (unsigned int)&word_3B4A2C >> 16;
    v15 = *(_DWORD *)(v14 + 0x10);
    v16 = *(_QWORD *)(v13 + 24 * a2) / 8LL;
    if ( !v15 )
      return v16;
  }
  if ( (((int)*(unsigned __int8 *)(v15 + (a2 >> 3)) >> (a2 & 7)) & 1) == 0 )
    return v16;
  v18 = *(_DWORD *)(v12 + 152);
  v19 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(((int (__fastcall *)(int, int))loc_16EC88)(v9, dword_487880) + 24) + 24) + 72);
  if ( (int)(v19 / -8) <= v16 )
LABEL_15:
    sub_946E0("Expected a negative vbase offset (old compiler?)", HIDWORD(v19));
  v20 = v16
      + *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(((int (__fastcall *)(int, int))loc_16EC88)(v9, dword_487880) + 24) + 24) + 72)
      / 8LL;
  if ( (unsigned __int64)sub_347674(-v20, *(_DWORD *)(v18 + 20)) >> 32 )
    sub_946E0("Misaligned vbase offset.");
  v21 = sub_347690(v20);
  v22 = ((int (__fastcall *)(int, int, int))loc_179644)(v9, a1, a7 + a5);
  if ( !v22 )
  {
    v19 = sub_94700(
            (int)"gnu-v3-abi.c",
            476,
            "%s: Assertion `%s' failed.",
            "int gnuv3_baseclass_offset(type*, int, const bfd_byte*, LONGEST, CORE_ADDR, const value*)",
            "vtable != NULL");
    goto LABEL_15;
  }
  v23 = sub_26F824(v22, 0);
  v24 = sub_25CE0C(v23, HIDWORD(v23), v21, v21 >> 31);
  return sub_26EB1C(v24);
}
