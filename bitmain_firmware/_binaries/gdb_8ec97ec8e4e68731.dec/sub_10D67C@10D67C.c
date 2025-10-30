void __fastcall sub_10D67C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int *v8; // r4
  int v9; // r12
  _DWORD _0[16]; // [sp+0h] [bp-20h] BYREF

  v8 = &dword_4872C0;
  _0[12] = a1;
  _0[13] = a2;
  _0[14] = a3;
  _0[15] = a4;
  v9 = dword_4872C0;
  _0[0] = a1;
  _0[1] = a2;
  _0[2] = a3;
  _0[3] = a4;
  _0[4] = a5;
  _0[5] = a6;
  _0[6] = a7;
  _0[7] = a8;
  if ( dword_4872C0 )
  {
    while ( !sub_10D0AC((_DWORD *)(v9 + 4), _0) )
    {
      v8 = (int *)*v8;
      v9 = *v8;
      if ( !*v8 )
        return;
    }
    sub_10D108((int)v8);
  }
}
