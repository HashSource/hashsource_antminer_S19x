_DWORD *__fastcall sub_B8ACC(_DWORD *result)
{
  int v1; // r3
  int v2; // r2
  int v3; // t1

  v1 = result[1];
  if ( v1 > 0 )
  {
    v2 = *result + 4 * v1;
    do
    {
      v3 = *(_DWORD *)(v2 - 4);
      v2 -= 4;
      if ( v3 )
        break;
      --v1;
    }
    while ( v1 );
    result[1] = v1;
  }
  if ( !v1 )
    result[3] = 0;
  return result;
}
