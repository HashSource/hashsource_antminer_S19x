int __fastcall sub_434C0(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r6
  int v5; // r5
  int v6; // r6
  int i; // r4
  int v8; // r0
  int v9; // r0
  int result; // r0
  int v11; // r1
  int v12; // r3
  char v13[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = sub_22178();
  if ( v2 > a1 )
  {
    v3 = a1;
    v4 = v2;
  }
  else
  {
    v3 = v2;
    v4 = a1;
  }
  v5 = v2;
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v13, 0x800u, "vol=%d\n", a1);
    sub_3AF5C(4, v13, 0, v12);
  }
  v6 = v4 - v3;
  if ( v6 <= sub_26EA8() )
    return sub_21E80(a1);
  for ( i = 1; ; ++i )
  {
    sub_26EA8();
    if ( sub_8C490(v6) < i )
      break;
    v8 = sub_26EA8();
    if ( v5 > a1 )
      sub_21E80(v5 - i * v8);
    else
      sub_21E80(v5 + i * v8);
  }
  v9 = sub_26EA8();
  result = sub_8C724(v6, v9);
  if ( v11 > 0 )
    return sub_21E80(a1);
  return result;
}
