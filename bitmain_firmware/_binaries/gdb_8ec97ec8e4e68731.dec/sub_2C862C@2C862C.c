int __fastcall sub_2C862C(int a1, int a2, int a3, int a4)
{
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(*(_DWORD *)(a2 + 8), a3);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(*(_DWORD *)a2, a3 + 4);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(*(_DWORD *)(a2 + 4), a3 + 8);
  *(_BYTE *)(a3 + 12) = *(_BYTE *)(a2 + 12);
  *(_BYTE *)(a3 + 13) = *(_BYTE *)(a2 + 13);
  if ( (unsigned int)(*(_DWORD *)(a2 + 16) - 65280) < 0xFFFF0000 )
  {
    if ( !a4 )
      sub_2A6BF0((int)"elfcode.h", 224, (int)"bfd_elf32_swap_symbol_out");
    (*(void (**)(void))(*(_DWORD *)(a1 + 4) + 84))();
  }
  return (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 96))();
}
