void __fastcall sub_11C5E0(int a1, int a2, int a3)
{
  int v3; // r12
  char v4; // r3
  int v5; // r4
  int v6; // lr
  int v7; // r12
  void *v8; // r0

  if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
    goto LABEL_14;
  if ( *(_DWORD *)(a2 + 16) )
  {
LABEL_13:
    sub_94700(
      (int)"dwarf2read.c",
      7162,
      "%s: Assertion `%s' failed.",
      "void fill_in_sig_entry_from_dwo_entry(objfile*, signatured_type*, dwo_unit*)",
      "sig_entry->per_cu.cu == NULL");
LABEL_14:
    sub_94700(
      (int)"dwarf2read.c",
      7161,
      "%s: Assertion `%s' failed.",
      "void fill_in_sig_entry_from_dwo_entry(objfile*, signatured_type*, dwo_unit*)",
      "! sig_entry->per_cu.queued");
    goto LABEL_15;
  }
  v3 = *(_DWORD *)(a2 + 24);
  if ( *(_BYTE *)(dword_4872D8 + 417) )
  {
    if ( !v3 )
      goto LABEL_20;
    if ( !*(_DWORD *)(v3 + 4) )
    {
LABEL_5:
      if ( *(_QWORD *)(a2 + 32) == *(_QWORD *)(a3 + 8) )
      {
        if ( !*(_DWORD *)(a2 + 44) )
        {
          if ( !*(_DWORD *)(a2 + 48) )
          {
            if ( !*(_DWORD *)(a2 + 56) )
            {
              v4 = *(_BYTE *)(a2 + 10);
              v5 = *(_DWORD *)(a3 + 20);
              v6 = *(_DWORD *)(a3 + 24);
              *(_DWORD *)(a2 + 12) = *(_DWORD *)(a3 + 16);
              v7 = *(_DWORD *)(a3 + 28);
              *(_DWORD *)a2 = v5;
              *(_BYTE *)(a2 + 10) = v4 | 0x10;
              *(_DWORD *)(a2 + 4) = v6;
              *(_DWORD *)(a2 + 20) = a1;
              *(_DWORD *)(a2 + 40) = v7;
              *(_DWORD *)(a2 + 56) = a3;
              return;
            }
            goto LABEL_18;
          }
LABEL_17:
          sub_94700(
            (int)"dwarf2read.c",
            7172,
            "%s: Assertion `%s' failed.",
            "void fill_in_sig_entry_from_dwo_entry(objfile*, signatured_type*, dwo_unit*)",
            "sig_entry->type_unit_group == NULL");
LABEL_18:
          sub_94700(
            (int)"dwarf2read.c",
            7173,
            "%s: Assertion `%s' failed.",
            "void fill_in_sig_entry_from_dwo_entry(objfile*, signatured_type*, dwo_unit*)",
            "sig_entry->dwo_unit == NULL");
          goto LABEL_19;
        }
LABEL_16:
        sub_94700(
          (int)"dwarf2read.c",
          7171,
          "%s: Assertion `%s' failed.",
          "void fill_in_sig_entry_from_dwo_entry(objfile*, signatured_type*, dwo_unit*)",
          "to_underlying (sig_entry->type_offset_in_section) == 0");
        goto LABEL_17;
      }
LABEL_15:
      sub_94700(
        (int)"dwarf2read.c",
        7170,
        "%s: Assertion `%s' failed.",
        "void fill_in_sig_entry_from_dwo_entry(objfile*, signatured_type*, dwo_unit*)",
        "sig_entry->signature == dwo_entry->signature");
      goto LABEL_16;
    }
    sub_94700(
      (int)"dwarf2read.c",
      7166,
      "%s: Assertion `%s' failed.",
      "void fill_in_sig_entry_from_dwo_entry(objfile*, signatured_type*, dwo_unit*)",
      "sig_entry->per_cu.v.quick->compunit_symtab == NULL");
    goto LABEL_13;
  }
  if ( !v3 )
    goto LABEL_5;
LABEL_19:
  sub_94700(
    (int)"dwarf2read.c",
    7169,
    "%s: Assertion `%s' failed.",
    "void fill_in_sig_entry_from_dwo_entry(objfile*, signatured_type*, dwo_unit*)",
    "sig_entry->per_cu.v.psymtab == NULL");
LABEL_20:
  v8 = (void *)sub_94700(
                 (int)"dwarf2read.c",
                 7165,
                 "%s: Assertion `%s' failed.",
                 "void fill_in_sig_entry_from_dwo_entry(objfile*, signatured_type*, dwo_unit*)",
                 "sig_entry->per_cu.v.quick != NULL");
  if ( v8 )
    free(v8);
}
