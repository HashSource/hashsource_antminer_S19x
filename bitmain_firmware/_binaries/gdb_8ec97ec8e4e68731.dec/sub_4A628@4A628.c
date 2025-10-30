_DWORD *__fastcall sub_4A628(_DWORD *result, int a2)
{
  int *v2; // r3
  _DWORD *v3; // r4
  int v4; // r1
  int v5; // r2

  v2 = &dword_4726BC;
  v3 = result;
  do
  {
    v2 = (int *)*v2;
    if ( !v2 )
    {
      sub_98F50(result, -1);
      return v3;
    }
  }
  while ( a2 != v2[7] );
  v4 = v2[2];
  v5 = v2[3];
  *result = v2[1];
  result[1] = v4;
  result[2] = v5;
  return result;
}
