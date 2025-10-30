int __fastcall sub_613D4(int a1)
{
  char v3[12]; // [sp+8h] [bp-81Ch] BYREF
  int v4; // [sp+808h] [bp-1Ch]
  int v5; // [sp+80Ch] [bp-18h]
  unsigned __int8 v6; // [sp+810h] [bp-14h]
  unsigned __int8 v7; // [sp+811h] [bp-13h]
  unsigned __int8 v8; // [sp+812h] [bp-12h]
  unsigned __int8 v9; // [sp+813h] [bp-11h]
  int v10; // [sp+814h] [bp-10h]
  int v11; // [sp+818h] [bp-Ch]
  int v12; // [sp+81Ch] [bp-8h]

  v11 = 0;
  v10 = 0;
  v9 = 6;
  v8 = 0;
  v7 = 15;
  v6 = 127;
  v5 = 0;
  v4 = 1536;
  v12 = sub_60E30(a1, 1536);
  if ( v12 )
  {
    snprintf(v3, 0x800u, "%s set 1704 flash pointer err\n", "_erase_pic_app");
    sub_3AF5C(0, v3, 0, (int)v3);
  }
  else
  {
    v5 = (v7 << 8) + v6 - ((v9 << 8) + v8) + 1;
    v12 = sub_61118(a1, v5);
    if ( v5 == v12 )
    {
      return 0;
    }
    else
    {
      snprintf(v3, 0x800u, "%s erase pic err\n", "_erase_pic_app");
      sub_3AF5C(0, v3, 0, (int)v3);
      return -2147483136;
    }
  }
  return v12;
}
