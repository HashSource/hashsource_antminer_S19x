int __fastcall sub_922A8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  if ( *(_DWORD *)(a9 + 4) )
    return (*(int (__fastcall **)(int, int, int, int, int, _DWORD))(a9 + 4))(a1, a2, a4, a5, a8, *(_DWORD *)a9);
  else
    return 1;
}
