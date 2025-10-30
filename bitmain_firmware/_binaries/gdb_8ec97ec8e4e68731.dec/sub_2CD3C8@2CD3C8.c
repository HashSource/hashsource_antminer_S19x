int __fastcall sub_2CD3C8(int a1, unsigned __int16 *a2, int a3)
{
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 96))(*a2, a3);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 96))(a2[1], a3 + 2);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 96))(a2[2], a3 + 4);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 96))(a2[3], a3 + 6);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(*((_DWORD *)a2 + 2), a3 + 8);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(*((_DWORD *)a2 + 3), a3 + 12);
  return (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 84))(*((_DWORD *)a2 + 4), a3 + 16);
}
