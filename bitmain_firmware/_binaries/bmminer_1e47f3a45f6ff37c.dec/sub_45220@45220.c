int __fastcall sub_45220(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6
  int v5; // r4
  int v6; // r6
  int i; // r4
  int v8; // r0
  int v9; // r0
  int result; // r0
  int v11; // r1
  int v12; // r3
  char v13[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = sub_226A8();
  v3 = v2;
  if ( v2 > a1 )
  {
    v4 = a1;
    v5 = v2;
  }
  else
  {
    v4 = v2;
    v5 = a1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(v13, 0x800u, "vol=%d\n", a1);
    sub_3B6AC(4, v13, 0, v12);
  }
  v6 = v5 - v4;
  if ( v6 <= sub_273FC() )
    return sub_223A0(a1);
  for ( i = 1; ; ++i )
  {
    sub_273FC();
    if ( i > sub_8F800(v6) )
      break;
    v8 = sub_273FC();
    if ( v3 > a1 )
      sub_223A0(v3 - i * v8);
    else
      sub_223A0(v3 + i * v8);
  }
  v9 = sub_273FC();
  result = sub_8FA94(v6, v9);
  if ( v11 > 0 )
    return sub_223A0(a1);
  return result;
}
