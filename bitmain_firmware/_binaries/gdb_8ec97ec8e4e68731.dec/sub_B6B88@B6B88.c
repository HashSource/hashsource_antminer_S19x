int __fastcall sub_B6B88(int result, int a2)
{
  int v2; // r12
  int v3; // r12
  int v4; // r3

  v2 = *(_DWORD *)(result + 4);
  if ( v2 )
  {
    v3 = v2 + 1;
    v4 = 1;
    do
      *(_DWORD *)(result + 8 * v4++) += a2;
    while ( v3 != v4 );
  }
  return result;
}
