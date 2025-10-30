int __fastcall sub_54150(unsigned int a1, int a2)
{
  char v4[2048]; // [sp+8h] [bp-804h] BYREF

  if ( dword_530F14 )
  {
    if ( a1 <= 1 )
    {
      *((_DWORD *)&unk_531094 + 2 * a1) = a2;
      *((_BYTE *)&unk_531094 + 8 * a1 + 4) = 1;
      return a1 + 1;
    }
    else
    {
      strcpy(v4, "bad param\n");
      sub_3AF5C(0, v4, 0, (int)v4);
      return -3;
    }
  }
  else
  {
    strcpy(v4, "please init platform first!!\n");
    sub_3AF5C(0, v4, 0, (int)v4);
    return -2;
  }
}
