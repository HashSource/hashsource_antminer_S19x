int __fastcall sub_96444(int a1)
{
  int result; // r0
  char v3; // r4
  int v4; // r2

  result = sub_333C44(a1, 1, 0);
  if ( result != -1 )
  {
    v3 = result;
    result = sub_333C44(a1, 2, result | 1);
    if ( !dword_47551C )
    {
      if ( (v3 & 1) != 0 )
        v4 = 1;
      else
        v4 = -1;
      dword_47551C = v4;
    }
  }
  return result;
}
