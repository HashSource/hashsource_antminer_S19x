int __fastcall sub_3DD40(char *a1, int a2)
{
  bool v2; // zf
  int v3; // r3
  int v5; // r2
  int v6; // r4

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 )
    return 255;
  v3 = 0;
  v5 = *a1;
  if ( a2 <= 0 )
    return *a1;
  do
  {
    v6 = a1[v3];
    v3 = (unsigned __int8)(v3 + 1);
    if ( v5 < v6 )
      v5 = v6;
  }
  while ( a2 > v3 );
  return v5;
}
