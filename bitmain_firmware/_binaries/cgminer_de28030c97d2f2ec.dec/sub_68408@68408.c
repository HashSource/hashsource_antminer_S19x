int __fastcall sub_68408(int result, int a2)
{
  if ( result )
  {
    *(_BYTE *)(result + 92) = 0;
    *(_DWORD *)result = -1;
    *(_DWORD *)(result + 4) = -1;
    *(_DWORD *)(result + 8) = 0;
    if ( a2 )
      return sub_68488(result, a2);
    else
      *(_BYTE *)(result + 12) = 0;
  }
  return result;
}
