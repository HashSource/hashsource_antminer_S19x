int __fastcall sub_6702C(int a1)
{
  int v1; // r2
  int v2; // r4
  int v3; // r7
  int v4; // r3
  unsigned __int16 v6; // [sp+8h] [bp-14h] BYREF
  unsigned __int8 v7; // [sp+Ch] [bp-10h]
  unsigned __int8 v8; // [sp+Dh] [bp-Fh]

  v1 = a1;
  if ( a1 <= 25566 )
  {
    v2 = 719163;
    sub_64E00(&byte_4, "baseday_set_day: invalid day (%lu), UNIX epoch substituted", a1);
    v1 = 25567;
  }
  else
  {
    v2 = a1 + 693596;
  }
  v3 = dword_B7CE4;
  dword_B7CE4 = v1;
  sub_65BF4((int)&v6, v2);
  sub_64E00(&byte_6, "basedate set to %04hu-%02hu-%02hu", v6, v7, v8);
  v4 = sub_668D4(v2, 0) - 693596;
  if ( v4 < 29223 )
    v4 = 29223;
  dword_1071FC = (v4 - 29223) / 7;
  sub_65BF4((int)&v6, v4 + 693596);
  sub_64E00(&byte_6, "gps base set to %04hu-%02hu-%02hu (week %d)", v6, v7, v8, dword_1071FC);
  return v3;
}
