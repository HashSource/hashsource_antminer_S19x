int __fastcall sub_8E71C(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r6
  int v8; // r1
  int result; // r0
  int v10; // r3
  int v11; // r4

  v4 = sub_9D8A0();
  if ( !v4 )
    return 2;
  v7 = v4;
  if ( !sub_10C010(v4, v5, v6) )
    return 2;
  if ( !sub_A8450(a2, v8, 47, 0, 2) || !sub_A8398(a2, 2) )
  {
    v10 = 1244;
LABEL_8:
    sub_95494(a1, 80, 542, 68, "ssl/statem/extensions.c", v10);
    return 0;
  }
  result = sub_9D8C8(a1, v7, a2);
  if ( result )
  {
    v11 = sub_A7EDC(a2);
    result = 1;
    if ( !v11 )
    {
      v10 = 1256;
      goto LABEL_8;
    }
  }
  return result;
}
