int __fastcall sub_132388(int a1)
{
  int v1; // r2
  int v2; // r3
  __int64 v4; // r0

  v1 = *(_DWORD *)(a1 + 20);
  v2 = *(_DWORD *)(v1 + 152);
  if ( v2 != -1 )
    return *(_DWORD *)(*(_DWORD *)(v1 + 144) + 4 * v2);
  v4 = sub_94700((int)"dwarf2read.c", 24903, "sect_index_text not initialized");
  return sub_1323C0(v4, HIDWORD(v4));
}
