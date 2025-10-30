bool sub_2DB30()
{
  time_t timer; // [sp+0h] [bp-14h] BYREF
  __time_t v3[2]; // [sp+4h] [bp-10h] BYREF
  struct tm *v4; // [sp+Ch] [bp-8h]

  if ( byte_94060 != 1 && byte_92F60 != 1 )
    return 1;
  sub_21AC0(v3);
  timer = v3[0];
  v4 = localtime(&timer);
  if ( !byte_94060 )
    return sub_2DAB0((int)v4, (int)&unk_92F64);
  if ( byte_92F60 != 1 )
  {
    if ( sub_2DAB0((int)v4, (int)&unk_94064) )
    {
      return 0;
    }
    else
    {
      byte_94060 = 0;
      return 1;
    }
  }
  else if ( sub_2DAB0((int)&unk_94064, (int)&unk_92F64) )
  {
    return sub_2DAB0((int)v4, (int)&unk_92F64) && !sub_2DAB0((int)v4, (int)&unk_94064);
  }
  else
  {
    return !sub_2DAB0((int)v4, (int)&unk_94064) || sub_2DAB0((int)v4, (int)&unk_92F64);
  }
}
