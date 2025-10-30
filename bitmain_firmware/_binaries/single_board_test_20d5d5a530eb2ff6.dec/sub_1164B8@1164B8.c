bool __fastcall sub_1164B8(int a1, int *a2)
{
  int v3; // r4
  void **v4; // r0

  if ( a1 != 1 )
    return 1;
  v3 = *a2;
  v4 = sub_10BFCC();
  *(_DWORD *)(v3 + 24) = v4;
  return v4 != 0;
}
