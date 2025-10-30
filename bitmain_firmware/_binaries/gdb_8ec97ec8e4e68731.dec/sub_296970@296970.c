int __fastcall sub_296970(int a1)
{
  int *v2; // r3
  int result; // r0

  if ( !dword_48AB0C )
    a1 = dword_4900D8;
  v2 = (int *)dword_4900DC;
  if ( a1 > dword_4900DC )
  {
    result = -1;
  }
  else
  {
    v2 = &dword_4900D4;
    result = 0;
  }
  if ( a1 <= dword_4900DC )
    *v2 = a1;
  return result;
}
