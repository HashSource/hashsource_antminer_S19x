int __fastcall sub_2F1B90(int a1, int a2, int a3, int a4)
{
  switch ( a4 )
  {
    case 4:
      return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 48))(a3, a2, a2);
    case 8:
      return (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a1 + 36))(a3, 0, a2);
    case 2:
      return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 60))(a3, a2, a2);
  }
  return sub_2A6BBC("elf-eh-frame.c", 210);
}
