int __fastcall sub_75CD8(int a1, int a2, int a3)
{
  int v4; // r7
  int v5; // r5
  int v8; // r11
  int v9; // r4
  int v10; // r0
  unsigned __int16 v11; // r0
  int v12; // r0

  if ( !a3 )
    return 0;
  v5 = 0;
  v4 = 0;
  v8 = 65537 * a3 - 1;
  v9 = a3 - 1;
  do
  {
    v10 = v9;
    v9 += 0x10000;
    v11 = sub_8C218(v10, a3);
    v12 = sub_751F0(a1, 0, v5, 12, v11 | 0x80000000);
    v5 += a2;
    v4 |= v12;
  }
  while ( v9 != v8 );
  return v4;
}
