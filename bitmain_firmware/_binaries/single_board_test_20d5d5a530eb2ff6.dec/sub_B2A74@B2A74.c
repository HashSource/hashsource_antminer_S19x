int __fastcall sub_B2A74(unsigned int **a1, int a2, int a3, int a4)
{
  int v5; // r3
  int v6; // r1
  unsigned __int64 v7; // r6
  int v8; // r3
  unsigned int v10; // [sp+8h] [bp-Ch]

  v5 = *(_DWORD *)(a4 + 20);
  v6 = (*a1)[1];
  v10 = **a1;
  v7 = __PAIR64__(v6, v10);
  if ( (v5 & 1) != 0 && !__PAIR64__(v6, v10) )
    return -1;
  v8 = v5 & 2;
  if ( v8 )
  {
    if ( v6 < 0 )
    {
      LODWORD(v7) = -v10;
      v8 = 1;
      HIDWORD(v7) = v6 - (2 * v6 + (v10 != 0));
    }
    else
    {
      v8 = 0;
    }
  }
  return sub_127724(a2, v6, v7, HIDWORD(v7), v8);
}
