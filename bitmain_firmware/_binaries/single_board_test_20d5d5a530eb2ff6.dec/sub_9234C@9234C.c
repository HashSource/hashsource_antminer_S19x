int *__fastcall sub_9234C(int *result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3

  v1 = result[1];
  v2 = *result;
  if ( v1 )
  {
    v3 = 0;
    result = 0;
    do
    {
      ++v3;
      *(_DWORD *)(v2 + 12) = 0;
      v2 += 36;
    }
    while ( v3 != v1 );
  }
  return result;
}
