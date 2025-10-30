int __fastcall sub_296944(int a1)
{
  int *v2; // r3
  bool v3; // cc
  int result; // r0

  v2 = (int *)dword_4900DC;
  v3 = dword_4900DC < a1;
  if ( dword_4900DC < a1 )
  {
    result = -1;
  }
  else
  {
    v2 = &dword_4900D4;
    result = 0;
  }
  if ( !v3 )
    *v2 = a1;
  return result;
}
