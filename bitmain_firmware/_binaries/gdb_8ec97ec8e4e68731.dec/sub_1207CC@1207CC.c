int __fastcall sub_1207CC(int a1, int a2, int a3, int a4, int a5)
{
  const char *v5; // r9
  int v10; // r7
  int *v11; // r3
  int v12; // r1
  unsigned int v13; // r5
  unsigned int v14; // r2

  *(_DWORD *)(a1 + 24) = a4 - *(_DWORD *)(a2 + 4);
  v10 = sub_11E520(a1, a4, (int **)a2, a5);
  *(_DWORD *)(a1 + 28) = v10 - a4;
  if ( *(_BYTE *)(a2 + 17) )
  {
    v11 = *(int **)a2;
    if ( *(_BYTE *)(*(_DWORD *)a2 + 17) )
    {
      ((void (*)(void))loc_11E090)();
LABEL_11:
      sub_946E0(
        "Dwarf Error: wrong version in compilation unit header (is %d, should be 2, 3, 4 or 5) [in module %s]",
        v12,
        v5);
    }
  }
  else
  {
    v11 = (int *)a2;
  }
  v12 = *(__int16 *)(a1 + 4);
  v5 = **(const char ***)(*v11 + 148);
  if ( (unsigned __int16)(v12 - 2) > 3u )
    goto LABEL_11;
  v13 = *(_DWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a3 + 16) )
    ((void (__fastcall *)(_DWORD, int))loc_11FFD0)(*(_DWORD *)(dword_4872D8 + 344), a3);
  v14 = *(_DWORD *)(a1 + 24);
  if ( v13 >= *(_DWORD *)(a3 + 8) )
    sub_946E0(
      "Dwarf Error: bad offset (0x%x) in compilation unit header (offset 0x%x + 6) [in module %s]",
      *(_DWORD *)(a1 + 8),
      v14,
      v5);
  if ( v14 + (unsigned __int64)(unsigned int)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 16)) > *(unsigned int *)(a2 + 8) )
    sub_946E0(
      "Dwarf Error: bad length (0x%x) in compilation unit header (offset 0x%x + 0) [in module %s]",
      *(_DWORD *)a1,
      v14,
      v5);
  return v10;
}
