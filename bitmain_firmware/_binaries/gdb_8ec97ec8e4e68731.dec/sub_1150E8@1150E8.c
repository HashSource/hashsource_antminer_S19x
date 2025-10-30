int __fastcall sub_1150E8(int a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v7; // r8
  int v8; // r10
  signed __int64 v9; // r4
  _DWORD *v10; // r3
  int v11; // r0
  bool v12; // cc
  unsigned int v13; // r2
  _BOOL4 v14; // r1
  unsigned int v15; // r1

  v7 = a5;
  v8 = ((int (*)(void))loc_26C048)();
  v9 = 8 * sub_26BC80(a1) + __PAIR64__(a4, a3);
  if ( sub_26BCA0(a1) )
    v9 += sub_26BC90(a1);
  v10 = *(_DWORD **)(v8 + 8);
  v11 = -858993459 * ((*(_DWORD *)(v8 + 12) - (int)v10) >> 3);
  v12 = v11 <= 0;
  if ( v11 )
    v12 = a5 <= 0;
  if ( !v12 )
  {
    v13 = 0;
    do
    {
      v15 = v10[6];
      if ( v9 >= 1 )
      {
        if ( v9 >= v15 )
        {
          v9 -= v15;
        }
        else
        {
          v7 = v7 + v9 - v15;
          v9 = 0;
          if ( *v10 != 5 )
            return 0;
        }
      }
      else
      {
        v7 -= v15;
        if ( *v10 != 5 )
          return 0;
      }
      ++v13;
      v14 = v7 > 0;
      v10 += 10;
      if ( v13 >= v11 )
        v14 = 0;
    }
    while ( v14 );
  }
  return 1;
}
