int __fastcall sub_31E100(_DWORD *a1)
{
  _DWORD *v1; // r3
  int result; // r0
  int v3; // t1

  v1 = a1;
  if ( !a1 )
    return 0;
  result = *a1;
  if ( *v1 )
  {
    result = 0;
    do
    {
      v3 = v1[1];
      ++v1;
      ++result;
    }
    while ( v3 );
  }
  return result;
}
