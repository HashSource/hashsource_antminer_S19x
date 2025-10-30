int __fastcall sub_2F038C(int result)
{
  unsigned int v1; // r2
  int v2; // r1
  int *v3; // r3
  int *v4; // r1
  int v5; // t1

  v1 = *(_DWORD *)(result + 28);
  if ( v1 > 1 )
  {
    v2 = *(_DWORD *)(result + 40);
    result = 0;
    v3 = (int *)(v2 + 4);
    v4 = (int *)(v2 + 4 * v1);
    do
    {
      v5 = *v3++;
      *(_DWORD *)(v5 + 16) = 0;
    }
    while ( v3 != v4 );
  }
  return result;
}
