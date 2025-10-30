int __fastcall sub_266C84(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r11
  __int64 v8; // r8
  int v9; // r0

  result = sub_266870(a1, a2, (_DWORD *)(a3 + 68));
  if ( result )
  {
    if ( *(_DWORD *)(a3 + 64) )
      return (*((int (__fastcall **)(int, int, int))off_46D5A4[0] + 18))(a1, a2, a3);
    v7 = sub_26BC70(a1);
    v8 = sub_26BFE0(a1);
    v9 = ((int (__fastcall *)(int))loc_26C09C)(a1);
    result = ((int (__fastcall *)(int, char **, _DWORD, _DWORD, int, int, _DWORD, int, int, char **))loc_157D94)(
               v7,
               off_46D5A4[0],
               v8,
               HIDWORD(v8),
               v9,
               a2,
               0,
               a1,
               a3,
               off_46D5A4[0]);
    if ( !result )
      return (*((int (__fastcall **)(int, int, int))off_46D5A4[0] + 18))(a1, a2, a3);
  }
  return result;
}
