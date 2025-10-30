int __fastcall sub_2C8564(int a1, _DWORD *a2, int a3)
{
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(*a2, a3);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(a2[1], a3 + 4);
  return (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(a2[2], a3 + 8);
}
