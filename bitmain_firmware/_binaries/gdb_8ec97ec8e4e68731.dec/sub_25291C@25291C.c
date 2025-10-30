int __fastcall sub_25291C(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r0

  v8 = ((int (__fastcall *)(int))loc_251F10)(a2);
  v9 = ((int (__fastcall *)(int))loc_251784)(v8);
  return (*(int (__fastcall **)(int, int, int, _DWORD, int, int))(*(_DWORD *)v9 + 16))(
           v9,
           a1,
           a2,
           *(_DWORD *)(*(_DWORD *)v9 + 16),
           a3,
           a4);
}
