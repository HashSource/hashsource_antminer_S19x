int __fastcall sub_2D0D8(int result)
{
  int v1; // r5
  int v2; // r6
  int *v3; // r2
  int v4; // r4
  int v5; // r1
  int v6; // t1
  int v7; // r3
  bool v8; // cc
  int v9; // r3
  int v10; // r3

  v1 = dword_733CC;
  v2 = dword_733CC - 1;
  if ( dword_733CC > 0 )
  {
    v3 = (int *)dword_744C8;
    v4 = dword_744C8 + 4 * dword_733CC;
    do
    {
      v6 = *v3++;
      v5 = v6;
      v7 = *(_DWORD *)(v6 + 4);
      v8 = v7 <= *(_DWORD *)(result + 4);
      v9 = v7 - 1;
      if ( !v8 )
        *(_DWORD *)(v5 + 4) = v9;
    }
    while ( v3 != (int *)v4 );
  }
  if ( *(_DWORD *)result < v2 )
  {
    **(_DWORD **)(dword_744C8 + 4 * v2) = *(_DWORD *)result;
    *(_DWORD *)(dword_744C8 + 4 * *(_DWORD *)result) = *(_DWORD *)(dword_744C8 + 4 * v2);
    v1 = dword_733CC;
  }
  *(_DWORD *)result = v1;
  v10 = dword_733CC;
  *(_BYTE *)(result + 105) = 1;
  dword_733CC = v10 - 1;
  return result;
}
