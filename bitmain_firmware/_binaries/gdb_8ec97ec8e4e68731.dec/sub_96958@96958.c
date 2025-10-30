int __fastcall sub_96958(int a1, int a2, int a3)
{
  int result; // r0
  int v4; // r4

  result = socket(a1, a2 | 0x80000, a3);
  v4 = result;
  if ( result != -1 && dword_47551C <= 0 )
  {
    sub_96444(result);
    return v4;
  }
  return result;
}
