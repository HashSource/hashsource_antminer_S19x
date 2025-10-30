bool __fastcall sub_292EE0(int a1)
{
  int v1; // r5
  _BOOL4 result; // r0

  v1 = dword_470798;
  if ( a1 >= 0 )
    dword_470798 = a1;
  result = sub_292E10();
  if ( v1 >= 0 )
    dword_470798 = v1;
  return result;
}
