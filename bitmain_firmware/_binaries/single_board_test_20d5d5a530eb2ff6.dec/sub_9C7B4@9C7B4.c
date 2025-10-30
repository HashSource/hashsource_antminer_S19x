int __fastcall sub_9C7B4(int a1)
{
  const char *v1; // r3
  const char *v2; // r1
  int v3; // r2
  int v4; // t1
  bool v5; // zf

  if ( a1 == 50 )
    return 40;
  v1 = "2";
  do
  {
    v2 = v1;
    v4 = *((_DWORD *)v1 + 2);
    v1 += 8;
    v3 = v4;
    v5 = v4 == 0;
    if ( v4 )
      v5 = v3 == a1;
  }
  while ( !v5 );
  return *((_DWORD *)v2 + 3);
}
