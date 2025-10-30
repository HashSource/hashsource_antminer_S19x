int __fastcall sub_3D820(char *a1, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r4

  v2 = *a1;
  if ( a2 <= 0 )
    return *a1;
  v3 = 0;
  do
  {
    v4 = a1[v3];
    v3 = (unsigned __int8)(v3 + 1);
    if ( v2 >= v4 )
      v2 = v4;
  }
  while ( v3 < a2 );
  return v2;
}
