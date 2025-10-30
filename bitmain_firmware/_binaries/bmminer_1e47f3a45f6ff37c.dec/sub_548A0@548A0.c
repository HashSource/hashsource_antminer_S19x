int __fastcall sub_548A0(unsigned int a1, int a2)
{
  char v4[2048]; // [sp+8h] [bp-804h] BYREF

  if ( dword_535DA0 )
  {
    if ( a1 <= 1 )
    {
      *((_DWORD *)&unk_535EC8 + 3 * a1) = a2;
      *((_BYTE *)&unk_535EC8 + 12 * a1 + 8) = 1;
      return a1 + 1;
    }
    else
    {
      strcpy(v4, "bad param\n");
      sub_3B6AC(0, v4, 0, (int)v4);
      return -3;
    }
  }
  else
  {
    strcpy(v4, "please init platform first!!\n");
    sub_3B6AC(0, v4, 0, (int)v4);
    return -1;
  }
}
