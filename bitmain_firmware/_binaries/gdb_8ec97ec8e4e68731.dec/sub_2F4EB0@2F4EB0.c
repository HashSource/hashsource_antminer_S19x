int __fastcall sub_2F4EB0(int a1)
{
  _DWORD *v1; // r2
  int v3; // r4
  _DWORD *v4; // r12
  int v5; // r0
  double v6; // r2
  int v7; // r5
  int v8; // t1
  int v9; // lr

  v1 = *(_DWORD **)(a1 + 28);
  if ( !v1[42] || (*(_BYTE *)(a1 + 3) & 0x60) != 0x40 )
    return 1;
  v3 = v1[43];
  if ( !v3 )
    return 1;
  v4 = (_DWORD *)v1[46];
  v5 = 8;
  LODWORD(v6) = 0;
  HIDWORD(v6) = *v4;
  v7 = *(_DWORD *)(*v4 + 60);
  while ( 1 )
  {
    ++LODWORD(v6);
    v9 = *(_DWORD *)(HIDWORD(v6) + 36);
    *(_DWORD *)(HIDWORD(v6) + 56) = v5;
    v5 += v9;
    if ( v3 == LODWORD(v6) )
      break;
    v8 = v4[1];
    ++v4;
    HIDWORD(v6) = v8;
    if ( *(_DWORD *)(v8 + 60) != v7 )
    {
      sub_2A6A5C("Invalid output section for .eh_frame_entry: %A", v6);
      return 0;
    }
  }
  HIDWORD(v6) = *(_DWORD *)(*(_DWORD *)(HIDWORD(v6) + 60) + 160);
  if ( HIDWORD(v6) )
  {
    if ( *(_DWORD *)(HIDWORD(v6) + 4) != 1 )
LABEL_17:
      sub_2A6BF0((int)"elf-eh-frame.c", 2320, (int)"_bfd_elf_fixup_eh_frame_hdr");
    while ( 1 )
    {
      *(_DWORD *)(HIDWORD(v6) + 8) = *(_DWORD *)(*(_DWORD *)(HIDWORD(v6) + 16) + 56);
      HIDWORD(v6) = *(_DWORD *)HIDWORD(v6);
      if ( !HIDWORD(v6) )
        break;
      --LODWORD(v6);
      if ( *(_DWORD *)(HIDWORD(v6) + 4) != 1 )
        goto LABEL_17;
    }
    if ( !LODWORD(v6) )
      return 1;
  }
  sub_2A6A5C("Invalid contents in %A section", v6);
  return 0;
}
