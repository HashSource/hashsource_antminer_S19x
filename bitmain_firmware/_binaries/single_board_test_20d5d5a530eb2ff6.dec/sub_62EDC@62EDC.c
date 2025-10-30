int __fastcall sub_62EDC(int a1)
{
  bool v2; // zf

  if ( !*(_BYTE *)(dword_223680 + 260) )
    return *(unsigned __int8 *)(dword_223680 + 260);
  if ( a1 == 540 )
  {
    v2 = dword_65143C == 10;
    if ( dword_65143C != 10 )
      v2 = dword_65143C == 20;
    if ( v2 )
      return -10;
    else
      return 0;
  }
  else if ( a1 == 565 )
  {
    if ( dword_65143C == 20 )
      return -20;
    else
      return 0;
  }
  else
  {
    return 0;
  }
}
