int __fastcall sub_559D0(unsigned int a1, int a2)
{
  char v5[2048]; // [sp+Ch] [bp-808h] BYREF
  int v6; // [sp+80Ch] [bp-8h]

  v6 = sub_55088(a1);
  if ( v6 )
  {
    if ( a2 == 200 )
    {
      strcpy(v5, "interval is same with default\n");
      sub_3B6AC(1, v5, 0, (int)v5);
    }
    else
    {
      sub_556C8(v6, a2, dword_535EF8);
    }
    return 0;
  }
  else
  {
    strcpy(v5, "unsuported led port\n");
    sub_3B6AC(0, v5, 0, (int)v5);
    return -1;
  }
}
