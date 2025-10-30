bool __fastcall sub_2D885C(int a1, int a2, void *src, int a4, __int64 a5, size_t n)
{
  int v9; // r12
  __int64 v10; // r0
  int v11; // r0
  unsigned int v12; // r3

  if ( (*(_BYTE *)(a1 + 43) & 0x40) == 0 && !sub_2D1584(a1, *(_BYTE *)(a1 + 43) & 0x40) )
    return 0;
  if ( !n )
    return 1;
  v9 = *(_DWORD *)(a2 + 140);
  v10 = *(_QWORD *)(v9 + 16);
  if ( v10 == -1 )
  {
    v11 = *(_DWORD *)(v9 + 48);
    if ( *(unsigned int *)(v9 + 24) < a5 + n )
      goto LABEL_14;
    v12 = ((*(_DWORD *)(a2 + 20) ^ 0x8000000u) >> 27) & 1;
    if ( !v11 )
      v12 = 1;
    if ( v12 )
LABEL_14:
      sub_2A6BF0((int)"elf.c", 8794, (int)"_bfd_elf_set_section_contents");
    memcpy((void *)(v11 + a5), src, n);
    return 1;
  }
  else
  {
    if ( sub_2A8A04(a1, v10 + a5, 0) )
      return 0;
    return sub_2A8884((int)src, n, a1) == n;
  }
}
