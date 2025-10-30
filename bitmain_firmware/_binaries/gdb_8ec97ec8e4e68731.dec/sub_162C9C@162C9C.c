int __fastcall sub_162C9C(_DWORD *a1, _DWORD *a2)
{
  int v2; // r5
  const char **v3; // r7
  _DWORD *v5; // r4
  int v6; // r3
  int v8; // [sp+Ch] [bp-8h]

  if ( (a1[5] & 4) != 0 )
    goto LABEL_10;
  if ( !a2 )
  {
LABEL_9:
    sub_94700(
      (int)"gdb_bfd.c",
      652,
      "%s: Assertion `%s' failed.",
      "const gdb_byte* gdb_bfd_map_section(asection*, bfd_size_type*)",
      "size != NULL");
LABEL_10:
    sub_94700(
      (int)"gdb_bfd.c",
      651,
      "%s: Assertion `%s' failed.",
      "const gdb_byte* gdb_bfd_map_section(asection*, bfd_size_type*)",
      "(sectp->flags & SEC_RELOC) == 0");
LABEL_11:
    sub_946E0("Can't read data for section '%s' in file '%s'", *(const char **)v2, *v3);
  }
  v5 = (_DWORD *)a1[26];
  v2 = (int)a1;
  v3 = (const char **)a1[37];
  if ( !v5 )
  {
    v5 = (_DWORD *)sub_2AD09C(a1[37], 16);
    *(_DWORD *)(v2 + 104) = v5;
    v6 = v5[2];
    if ( v6 )
      goto LABEL_5;
    goto LABEL_7;
  }
  v6 = v5[2];
  if ( !v6 )
  {
LABEL_7:
    *v5 = *(_DWORD *)(v2 + 36);
    v8 = v6;
    if ( !sub_2A9680((int)v3, v2) )
      goto LABEL_11;
    v5[2] = v8;
    sub_94700(
      (int)"gdb_bfd.c",
      711,
      "%s: Assertion `%s' failed.",
      "const gdb_byte* gdb_bfd_map_section(asection*, bfd_size_type*)",
      "descriptor->data != NULL");
    goto LABEL_9;
  }
LABEL_5:
  *a2 = *v5;
  return v6;
}
