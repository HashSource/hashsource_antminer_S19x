int sub_42A4C()
{
  int v0; // r0
  const char *v1; // r0
  int v2; // r0
  __int16 v4; // [sp+4h] [bp-8h]
  unsigned __int8 v5; // [sp+6h] [bp-6h]

  v0 = sub_42988();
  v4 = v0;
  v5 = BYTE2(v0);
  sub_27B40();
  sub_3E0F0();
  sub_27F10();
  sub_3E0F0();
  sub_281E0(255, (unsigned __int8)v4);
  sub_3E0F0();
  sub_28220(255, HIBYTE(v4), v5, 0);
  sub_3E0F0();
  sub_27C84(255);
  sub_3E0F0();
  sub_27BD0(255, 0, 1, 3u);
  sub_27C3C(255);
  v1 = (const char *)sub_26A14();
  if ( !strcmp(v1, "BHB56903") )
    v2 = 9;
  else
    v2 = 4;
  sub_287F0(v2);
  return sub_40BFC();
}
