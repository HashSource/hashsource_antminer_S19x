int __fastcall sub_CD70(int a1)
{
  int v1; // r2
  int v2; // r4
  int v3; // r7
  int v4; // r0
  int v5; // r1
  int v6; // r3
  unsigned __int16 v8; // [sp+8h] [bp-14h] BYREF
  unsigned __int8 v9; // [sp+Ch] [bp-10h]
  unsigned __int8 v10; // [sp+Dh] [bp-Fh]

  v1 = a1;
  if ( a1 <= 25566 )
  {
    v2 = 719163;
    sub_ABF8(&byte_4, "baseday_set_day: invalid day (%lu), UNIX epoch substituted", a1);
    v1 = 25567;
  }
  else
  {
    v2 = a1 + 693596;
  }
  v3 = dword_31044;
  dword_31044 = v1;
  sub_B9FC((int)&v8, v2);
  sub_ABF8(&byte_6, "basedate set to %04hu-%02hu-%02hu", v8, v9, v10);
  v4 = sub_C668(v2, 0);
  v5 = v4;
  if ( v4 - 693596 > 29222 )
  {
    v6 = (v4 - 722819) / 7;
  }
  else
  {
    v5 = 722819;
    v6 = 0;
  }
  dword_33320 = v6;
  sub_B9FC((int)&v8, v5);
  sub_ABF8(&byte_6, "gps base set to %04hu-%02hu-%02hu (week %d)", v8, v9, v10, dword_33320);
  return v3;
}
