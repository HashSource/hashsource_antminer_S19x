int __fastcall sub_189058(int a1)
{
  int v1; // r2
  int v2; // r0
  int v3; // r1
  char v4; // r3
  int v5; // t1

  v1 = a1 - 4;
  v2 = a1 + 604;
  v3 = dword_487984 - 1;
  do
  {
    v5 = *(_DWORD *)(v1 + 4);
    v1 += 4;
    v4 = v5;
    if ( v5 )
      v4 = 1;
    *(_BYTE *)++v3 = v4;
  }
  while ( v1 != v2 );
  sub_1867A8();
  return sub_230A78(152, dword_487988);
}
