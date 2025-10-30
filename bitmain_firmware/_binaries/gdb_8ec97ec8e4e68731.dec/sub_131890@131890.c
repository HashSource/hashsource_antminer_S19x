void __fastcall sub_131890(int a1, int a2, int a3)
{
  int v6; // r3
  _DWORD v7[2]; // [sp+8h] [bp-8h] BYREF

  if ( *(_DWORD *)(a1 + 16) )
    sub_11E8E8(a1);
  v6 = *(_BYTE *)(a1 + 10) & 4;
  if ( (*(_BYTE *)(a1 + 10) & 4) != 0 )
  {
    ((void (__fastcall *)(int, _DWORD, _DWORD, _DWORD, void *, _DWORD))loc_12DAAC)(a1, 0, 0, 0, &loc_137EE8, 0);
    sub_11E9EC();
  }
  else
  {
    v7[0] = a2;
    v7[1] = a3;
    ((void (__fastcall *)(int, int, int, int, int (*)(int, int, int, int, int), _DWORD *))loc_12DAAC)(
      a1,
      v6,
      v6,
      v6,
      sub_13A070,
      v7);
    sub_11E9EC();
  }
}
