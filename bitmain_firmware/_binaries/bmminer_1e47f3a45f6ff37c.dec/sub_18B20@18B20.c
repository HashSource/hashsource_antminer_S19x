int __fastcall sub_18B20(int a1, int a2)
{
  int v3; // r4
  char v4; // r3
  int v5; // r0
  char v6; // r5
  char v7; // r0
  bool v8; // cc
  int result; // r0
  char i; // [sp+Fh] [bp-5h] BYREF

  v3 = 0;
  if ( a2 )
    v4 = 68;
  else
    v4 = 4;
  for ( i = v4; ; sub_17858(a1, (unsigned __int8)(v7 * v6), 9, 1, &i) )
  {
    v8 = v3 < sub_179C4();
    result = v3++;
    if ( !v8 )
      break;
    v5 = sub_26AD4(result);
    v6 = v5;
    v7 = sub_26AB4(v5);
  }
  return result;
}
