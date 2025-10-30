int __fastcall sub_6F6C8(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r0
  int v5; // r2
  int v6; // r1
  char v7; // t1

  v3 = a1 << 6;
  if ( a3 )
  {
    v4 = dword_1B1438 + v3 + 31;
    v5 = a2 + a3 - 1;
    v6 = a2 - 1;
    do
    {
      v7 = *(_BYTE *)++v4;
      *(_BYTE *)++v6 = v7;
    }
    while ( v6 != v5 );
  }
  return 0;
}
