int __fastcall sub_922C8(int result, int a2, int a3, int a4, int a5)
{
  if ( *(_DWORD *)(a5 + 8) )
    return (*(int (__fastcall **)(int, int, int, _DWORD))(a5 + 8))(result, a2, a4, *(_DWORD *)a5);
  return result;
}
