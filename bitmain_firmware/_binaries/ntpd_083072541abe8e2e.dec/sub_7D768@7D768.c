int __fastcall sub_7D768(int a1, int a2, int a3)
{
  int v3; // r4
  int v6; // r5
  int *v8; // r0

  v3 = a1;
  if ( a1 == -1 )
  {
    v8 = _errno_location();
    if ( !*v8 )
      *v8 = 22;
  }
  else if ( sub_8B908(0x7FFFFFFF, a3) < a2 || (v6 = a2 * a3, 0x7FFFFFFF - v6 < v3) )
  {
    v3 = -1;
    *_errno_location() = 34;
  }
  else
  {
    v3 += v6;
  }
  return v3;
}
