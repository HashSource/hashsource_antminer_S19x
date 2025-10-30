int __fastcall sub_69BC4(int a1)
{
  int v1; // r3
  int v2; // r2
  int v3; // r12

  if ( !dword_1B13B4 )
    return -1;
  v1 = 0;
  do
  {
    v2 = dword_1B125C[4 * v1];
    v3 = 4 * v1++;
    if ( v2 == a1 )
      return dword_1B125C[v3 + 1];
  }
  while ( v1 != 16 );
  return -2;
}
