int __fastcall sub_15C6C8(int a1, int a2, int a3, int a4, unsigned __int8 a5, int a6)
{
  int v7; // r3
  char *v8; // r0

  sub_2594B0(a1, "{");
  v7 = a5 & 7;
  if ( (a5 & 7) != 0 )
  {
    if ( v7 == 7 )
    {
      sub_2594B0(a1, "stack=<unavailable>");
    }
    else if ( v7 == 2 )
    {
      sub_2594B0(a1, "stack=<sentinel>");
    }
    else
    {
      v8 = sub_98B08(a2, 0);
      sub_2594B0(a1, "stack=%s", v8);
    }
  }
  else
  {
    sub_2594B0(a1, "!stack");
  }
  sub_2594B0(a1, (const char *)&word_3D7D40);
  sub_15C504(a1, (int)"code", (a5 >> 3) & 1, a3);
  sub_2594B0(a1, (const char *)&word_3D7D40);
  sub_15C504(a1, (int)"special", (a5 >> 4) & 1, a4);
  if ( a6 )
    sub_2594B0(a1, ",artificial=%d", a6);
  return sub_2594B0(a1, "}");
}
