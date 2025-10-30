int __fastcall sub_2B6A8(int a1)
{
  int v1; // r7
  int v2; // r5
  int *v3; // r4
  int v4; // r6
  int v5; // r1
  int v6; // t1
  int v7; // r1

  v1 = *(_DWORD *)(a1 + 156);
  v2 = a1;
  if ( dword_733CC > 0 )
  {
    v3 = (int *)dword_744C8;
    v4 = dword_744C8 + 4 * dword_733CC;
    do
    {
      v6 = *v3++;
      v5 = v6;
      if ( !*(_BYTE *)(v6 + 97)
        && *(_DWORD *)(v5 + 100) == 1
        && !sub_2B684((unsigned __int8 *)v5)
        && *(_DWORD *)(v7 + 156) < v1 )
      {
        v2 = v7;
        v1 = *(_DWORD *)(v7 + 156);
      }
    }
    while ( v3 != (int *)v4 );
    v1 = *(_DWORD *)(v2 + 156);
  }
  *(_DWORD *)(v2 + 156) = v1 + 1;
  return v2;
}
