int __fastcall sub_967B4(int a1, int a2)
{
  int result; // r0
  int v3; // r4

  result = open64(a1, a2 | 0x80000);
  v3 = result;
  if ( result >= 0 && dword_47551C <= 0 )
  {
    sub_96444(result);
    return v3;
  }
  return result;
}
