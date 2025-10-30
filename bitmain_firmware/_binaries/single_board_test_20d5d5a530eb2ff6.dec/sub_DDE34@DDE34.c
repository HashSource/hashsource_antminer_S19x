int sub_DDE34()
{
  int result; // r0
  int v1; // [sp+4h] [bp-4h] BYREF

  result = sub_10C5A4(&v1, (char *)&loc_DDFB4 + 1);
  if ( result )
  {
    dword_6E1A10 = sub_10C510(result);
    if ( dword_6E1A10 )
    {
      nullsub_4();
      result = 1;
      dword_6E1A14 = 1;
      dword_21FB2C = v1;
    }
    else
    {
      sub_10C574(0);
      dword_6E1A10 = 0;
      sub_10C5CC(&v1);
      result = 0;
    }
  }
  dword_6E1A18 = result;
  return result;
}
