int __fastcall sub_3F180(int a1, int a2)
{
  bool v2; // zf
  int v3; // r1
  int v4; // lr
  int v5; // r1
  int v6; // r0
  int v7; // r12
  int v8; // t1
  char *v9; // r3

  v2 = a2 == 0;
  v3 = (unsigned __int16)(a2 - 1);
  if ( v2 )
    return 0xFFFF;
  v4 = a1 + v3;
  v5 = a1 - 1;
  v6 = 255;
  v7 = 255;
  do
  {
    v8 = *(unsigned __int8 *)++v5;
    v9 = &aTqFreezethaw[v6 ^ v8];
    v6 = (unsigned __int8)v9[2280] ^ v7;
    v7 = (unsigned __int8)v9[2536];
  }
  while ( v5 != v4 );
  return v6 | (v7 << 8);
}
