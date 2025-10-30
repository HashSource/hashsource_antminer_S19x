int __fastcall sub_6E75C(const char *a1)
{
  char v3[2048]; // [sp+8h] [bp-804h] BYREF

  if ( dword_53696C )
    return 0;
  if ( a1 )
  {
    dword_536968 = open(a1, 2050);
    if ( dword_536968 >= 0 )
    {
      dword_53696C = 1;
      return dword_536968;
    }
    else
    {
      strcpy(v3, "open lcd failed!!!\n");
      sub_3B6AC(0, v3, 0, (int)v3);
      return -1;
    }
  }
  else
  {
    strcpy(v3, "bad param\n");
    sub_3B6AC(0, v3, 0, (int)v3);
    return -3;
  }
}
