int __fastcall sub_F80FC(int a1, int a2)
{
  int result; // r0

  if ( *(_DWORD *)(a1 + 84) )
    sub_F7F38(a1);
  result = sub_F7F54(a1, a2);
  *(_DWORD *)(a1 + 84) = result;
  if ( result )
  {
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 64) & 0xFFFFFF77 | 8;
    return 1;
  }
  return result;
}
