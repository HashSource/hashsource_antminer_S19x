int __fastcall sub_26CBB4(_DWORD *a1, int a2, int a3)
{
  void (__fastcall *v4)(_DWORD *, int, int, _DWORD); // r4

  if ( a1[2] != 2 )
    return 0;
  v4 = *(void (__fastcall **)(_DWORD *, int, int, _DWORD))(a1[4] + 4);
  if ( !v4 )
    return 0;
  v4(a1, a2, a3, a1[5]);
  return 1;
}
