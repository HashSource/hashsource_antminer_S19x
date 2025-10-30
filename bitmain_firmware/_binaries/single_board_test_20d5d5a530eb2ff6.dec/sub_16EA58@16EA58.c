int __fastcall sub_16EA58(int result, _DWORD *a2, _DWORD *a3)
{
  if ( a2 )
    *a2 = *(_DWORD *)(result + 36);
  if ( a3 )
  {
    result += 28;
    *a3 = result;
  }
  return result;
}
