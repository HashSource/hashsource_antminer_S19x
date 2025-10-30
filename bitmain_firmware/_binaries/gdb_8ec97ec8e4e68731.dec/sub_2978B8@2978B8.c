int __fastcall sub_2978B8(int a1)
{
  int result; // r0

  if ( (dword_490158 < a1) | ((unsigned int)a1 >> 31) )
    return 0;
  result = dword_48BB28;
  if ( dword_48BB28 )
  {
    dword_490164 = a1;
    return 1;
  }
  return result;
}
