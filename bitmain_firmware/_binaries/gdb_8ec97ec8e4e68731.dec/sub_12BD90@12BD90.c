void __fastcall sub_12BD90(int a1, int a2)
{
  int v2; // r2
  _DWORD *v3; // lr
  int v5; // r4
  int v6; // r0
  int v7; // r1
  _BYTE *v8; // r0
  unsigned int v9; // r3
  int v10; // r1
  bool v11; // r3

  v2 = -1431655765;
  v3 = *(_DWORD **)(a1 + 8);
  *(_DWORD *)(a1 + 16) = a2;
  v5 = v3[12];
  if ( a2 - 1 < (unsigned int)(-1431655765 * ((v3[13] - v5) >> 3)) && (v6 = 24 * (a2 - 1), (v2 = v5 + v6) != 0) )
  {
    if ( *(_BYTE *)(a1 + 4) )
    {
      v7 = v3[9];
      v8 = *(_BYTE **)(v5 + v6);
      v9 = *(_DWORD *)(v2 + 4) - 1;
      if ( v9 >= (v3[10] - v7) >> 2 )
        v10 = 0;
      else
        v10 = *(_DWORD *)(v7 + 4 * v9);
      v11 = *(_DWORD *)(a1 + 32) != 0;
      *(_DWORD *)(a1 + 40) = dword_4788E0;
      *(_BYTE *)(a1 + 52) = v11;
      sub_11DB2C(v8, v10);
    }
  }
  else if ( dword_47AC88 > 0 )
  {
    sub_F43B4(&off_46D334, ".debug_line section has line data without a file", v2);
  }
}
