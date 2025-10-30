int __fastcall sub_11CE54(int result, int *a2, int a3, int a4)
{
  int v4; // r12
  int v5; // r1
  const char *v6; // r4
  const char *v7; // r0

  v4 = *((unsigned __int8 *)a2 + 17);
  if ( *((_BYTE *)a2 + 17) )
  {
    sub_94700(
      (int)"dwarf2read.c",
      12531,
      "%s: Assertion `%s' failed.",
      "dwarf2_section_info create_dwp_v2_section(dwarf2_section_info*, bfd_size_type, bfd_size_type)",
      "!section->is_virtual");
    goto LABEL_9;
  }
  *(_DWORD *)(result + 16) = v4;
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = v4;
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 12) = v4;
  *(_BYTE *)(result + 17) = 1;
  if ( !a4 )
    return result;
  v5 = *a2;
  if ( !v5 )
  {
LABEL_9:
    v6 = "<unknown>";
LABEL_10:
    v7 = (const char *)sub_1B87A8(*(_DWORD *)(dword_4872D8 + 344));
    sub_946E0("Dwarf Error: Bad DWP V2 section info, doesn't fit in section %s [in module %s]", v6, v7);
  }
  if ( (unsigned int)(a4 + a3) > *(_DWORD *)(v5 + 36) )
  {
    v6 = *(const char **)v5;
    goto LABEL_10;
  }
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 8) = a4;
  return result;
}
