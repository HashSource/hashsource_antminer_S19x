int __fastcall sub_18728(int a1, int a2)
{
  char v2; // r3
  int v4; // r4
  char v5; // r5
  char v6; // r0
  bool v7; // cc
  int result; // r0
  char v9; // [sp+Fh] [bp-5h] BYREF

  if ( a2 )
    v2 = 68;
  else
    v2 = 4;
  v9 = v2;
  v4 = 0;
  while ( 1 )
  {
    v7 = sub_17674() <= v4;
    result = v4++;
    if ( v7 )
      break;
    v5 = sub_265D0();
    v6 = sub_265B0();
    sub_174FC(a1, (unsigned __int8)(v5 * v6), 9, 1, &v9);
  }
  return result;
}
