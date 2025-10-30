int __fastcall sub_99420(int a1, _BYTE *a2, int a3)
{
  _BYTE *v3; // lr
  _BYTE *v4; // r12
  unsigned int v5; // t1
  unsigned int v6; // r3
  int v7; // r4
  unsigned int v8; // r3
  char v9; // r4

  if ( a3 <= 0 )
  {
    *a2 = 0;
    return 0;
  }
  else
  {
    v3 = (_BYTE *)(a1 - 1);
    v4 = a2 + 2;
    do
    {
      v5 = (unsigned __int8)*++v3;
      v4 += 2;
      v6 = v5 >> 4;
      v7 = (v5 >> 4) + 87;
      if ( v5 >> 4 <= 9 )
        LOBYTE(v7) = v6 + 48;
      *(v4 - 4) = v7;
      v8 = *v3 & 0xF;
      v9 = v8 + 87;
      if ( v8 <= 9 )
        v9 = v8 + 48;
      *(v4 - 3) = v9;
    }
    while ( v3 != (_BYTE *)(a1 + a3 - 1) );
    a2[2 * a3] = 0;
    return a3;
  }
}
