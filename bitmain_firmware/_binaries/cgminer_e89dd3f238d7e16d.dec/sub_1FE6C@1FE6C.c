_BYTE *__fastcall sub_1FE6C(int a1, int a2)
{
  int v2; // r3
  _BYTE *v6; // [sp+10h] [bp-Ch]
  signed int v7; // [sp+14h] [bp-8h]

  v7 = 2 * a2 + 1;
  if ( ((2 * (_BYTE)a2 + 1) & 3) != 0 )
  {
    v2 = v7 & 3;
    if ( v7 <= 0 )
      v2 = -(-v7 & 3);
    v7 += 4 - v2;
  }
  v6 = sub_1F9F8(v7, 1u, "util.c", "bin2hex", 787);
  sub_1FDA0(v6, a1, a2);
  return v6;
}
