int __fastcall sub_578D0(const char *a1)
{
  char v3[2048]; // [sp+8h] [bp-804h] BYREF

  if ( dword_5313E8 )
    return 0;
  if ( a1 )
  {
    dword_5313E4 = open(a1, 2050);
    if ( dword_5313E4 >= 0 )
    {
      dword_5313E8 = 1;
      return dword_5313E4;
    }
    else
    {
      strcpy(v3, "open lcd failed!!!\n");
      sub_3AF5C(0, v3, 0, (int)v3);
      return -1;
    }
  }
  else
  {
    strcpy(v3, "bad param\n");
    sub_3AF5C(0, v3, 0, (int)v3);
    return -3;
  }
}
