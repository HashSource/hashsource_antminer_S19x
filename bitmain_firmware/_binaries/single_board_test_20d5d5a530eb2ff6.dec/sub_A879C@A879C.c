int __fastcall sub_A879C(int *a1)
{
  int v1; // r3
  int result; // r0

  v1 = *a1;
  if ( !*a1 )
    return 0;
  result = 0;
  do
  {
    v1 = *(_DWORD *)(v1 + 12);
    ++result;
  }
  while ( v1 );
  return result;
}
