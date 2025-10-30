int __fastcall sub_11E4C0(const char *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0

  if ( a4 == 4 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 40))(a3);
  if ( a4 == 8 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 28))(a3);
  v5 = sub_94700((int)"dwarf2read.c", 19353, "read_offset_1: bad switch [in module %s]", a1);
  return sub_11E520(v5, HIDWORD(v5));
}
