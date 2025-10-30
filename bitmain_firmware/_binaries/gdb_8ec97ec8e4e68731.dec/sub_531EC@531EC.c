int __fastcall sub_531EC(int result, int a2, int a3, int a4)
{
  if ( a2 )
    a4 = 11348;
  else
    *(_DWORD *)(result + 16) = 0;
  if ( a2 )
    HIWORD(a4) = 5;
  *(_DWORD *)(result + 20) = a2;
  if ( a2 )
    *(_DWORD *)(result + 16) = a4;
  return result;
}
