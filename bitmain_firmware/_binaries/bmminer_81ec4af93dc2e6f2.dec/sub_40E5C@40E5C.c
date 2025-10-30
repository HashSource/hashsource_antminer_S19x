int sub_40E5C()
{
  int v0; // r0
  const char *v1; // r0
  int v2; // r0
  int v3; // r0
  __int16 v5; // [sp+4h] [bp-8h]
  unsigned __int8 v6; // [sp+6h] [bp-6h]

  v0 = sub_40D98();
  v6 = BYTE2(v0);
  v5 = v0;
  sub_275C8();
  sub_3D9D4();
  sub_279BC();
  sub_3D9D4();
  sub_27C48(255, (unsigned __int8)v5);
  sub_3D9D4();
  sub_27C94(255, HIBYTE(v5), v6, 0);
  sub_3D9D4();
  sub_2772C(255);
  sub_3D9D4();
  sub_27670(255, 0, 1, 3u);
  sub_276DC(255);
  v1 = (const char *)sub_26510();
  if ( !strcmp(v1, "BHB56903") )
    v2 = 9;
  else
    v2 = 4;
  sub_28274(v2);
  v3 = sub_3F0C4();
  return sub_5BAAC(v3);
}
