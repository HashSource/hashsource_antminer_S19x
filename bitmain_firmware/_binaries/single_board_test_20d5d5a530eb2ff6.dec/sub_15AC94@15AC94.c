bool __fastcall sub_15AC94(int a1, char *s)
{
  int v4; // r2
  int v6; // [sp+Ch] [bp-4h] BYREF

  v6 = 0;
  if ( sub_BBEDC(s, 44, 1, (int (__fastcall *)(const char *, int, int))sub_15AA94, (int)&v6) )
    return sub_15ABF0(a1, v6, v4);
  sub_D0048(38, 189, 150, (int)"crypto/engine/eng_fat.c", 86);
  sub_D1240(2, "str=", s);
  return 0;
}
