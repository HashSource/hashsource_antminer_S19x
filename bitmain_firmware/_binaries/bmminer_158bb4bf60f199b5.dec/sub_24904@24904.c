void sub_24904()
{
  int v0; // r0
  __int16 v1; // [sp+4h] [bp-8h]
  unsigned __int8 v2; // [sp+6h] [bp-6h]

  v0 = sub_24858();
  v2 = BYTE2(v0);
  v1 = v0;
  sub_1A850();
  sub_1AE00();
  sub_4A804(10);
  sub_1ACE4();
  sub_4A804(100);
  sub_1B0EC(255, (unsigned __int8)v1);
  sub_1B138(255, HIBYTE(v1), v2, 0);
  sub_4A804(5);
  sub_1AC10(255);
  sub_4A804(10);
  sub_1A958(255, 0, 1, 3u);
  sub_1A9D4(255);
  sub_1B298(255, 0);
}
