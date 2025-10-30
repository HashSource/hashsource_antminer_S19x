int __fastcall sub_DBB9C(unsigned int a1, int a2)
{
  int v4; // r1
  int v5; // r2
  int *v6; // r4
  int v7; // r4
  _DWORD *v9; // r0

  if ( a1 > 0xF )
  {
    sub_D0048(15, 113, 7, (int)"crypto/ex_data.c", 55);
    return 0;
  }
  if ( !sub_10C594(&unk_6E1994, sub_DBB2C) || !dword_6E1950 )
  {
    sub_D0048(15, 113, 65, (int)"crypto/ex_data.c", 60);
    return 0;
  }
  if ( !dword_6E194C[0] )
    return 0;
  sub_10C554(dword_6E194C[0]);
  if ( a2 >= 0
    && (v6 = &dword_6E194C[a1], a2 < sub_10C010(v6[2], v4, v5))
    && (v9 = (_DWORD *)sub_10C01C(v6[2], a2)) != 0 )
  {
    v7 = 1;
    v9[2] = nullsub_29;
    v9[4] = sub_DBB18;
    v9[3] = nullsub_28;
  }
  else
  {
    v7 = 0;
  }
  sub_10C564(dword_6E194C[0]);
  return v7;
}
