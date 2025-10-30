int __fastcall sub_674E4(unsigned int a1)
{
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( dword_1B0E60 )
  {
    if ( a1 > 1 )
    {
      strcpy(v2, "bad param\n");
      sub_47AB4(0, v2, 0);
      return -3;
    }
    else
    {
      return a1 + 1;
    }
  }
  else
  {
    strcpy(v2, "please init platform first!!\n");
    sub_47AB4(0, v2, 0);
    return -2;
  }
}
