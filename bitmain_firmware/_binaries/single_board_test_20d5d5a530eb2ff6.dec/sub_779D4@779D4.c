int __fastcall sub_779D4(int a1, int a2, int a3)
{
  int v3; // r4
  int v7; // r6
  int v8; // r5
  int v9; // r9
  unsigned __int16 v10; // r0
  int v11; // r0

  if ( !a3 )
    return 0;
  v3 = 0;
  v7 = a3 - 1;
  v8 = 0;
  v9 = 0;
  do
  {
    ++v8;
    v10 = sub_189090(v7, a3);
    v11 = sub_771FC(a1, 0, v3, 12, v10 | 0x80000000);
    v7 += 0x10000;
    v3 += a2;
    v9 |= v11;
  }
  while ( a3 != v8 );
  return v9;
}
