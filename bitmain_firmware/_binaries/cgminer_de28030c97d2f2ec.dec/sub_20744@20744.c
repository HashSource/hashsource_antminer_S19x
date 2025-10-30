_BYTE *__fastcall sub_20744(int a1, int a2)
{
  _BYTE *v5; // [sp+10h] [bp-Ch]
  signed int v6; // [sp+14h] [bp-8h]

  v6 = 2 * a2 + 1;
  if ( ((2 * (_BYTE)a2 + 1) & 3) != 0 )
    v6 += 4 - v6 % 4;
  v5 = sub_202D4(v6, 1u, "util.c", "bin2hex", 787);
  sub_2067C(v5, a1, a2);
  return v5;
}
