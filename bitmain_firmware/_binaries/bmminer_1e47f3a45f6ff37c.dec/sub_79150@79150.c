int __fastcall sub_79150(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r6
  int v8; // r5
  int v9; // r8
  unsigned __int16 v10; // r0
  int v11; // r1

  if ( !a3 )
    return 0;
  v3 = 0;
  v4 = a3 - 1;
  v8 = 0;
  v9 = 0;
  do
  {
    v10 = sub_8F588(v4, a3);
    v11 = v3;
    ++v8;
    v4 += 0x10000;
    v3 += a2;
    v9 |= sub_79118(a1, v11, 1, v10);
  }
  while ( v8 != a3 );
  return v9;
}
