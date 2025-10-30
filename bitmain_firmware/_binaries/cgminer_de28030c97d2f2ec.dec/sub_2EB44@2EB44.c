bool sub_2EB44()
{
  time_t timer; // [sp+0h] [bp-14h] BYREF
  __time_t v3[2]; // [sp+4h] [bp-10h] BYREF
  struct tm *v4; // [sp+Ch] [bp-8h]

  if ( byte_951F8 != 1 && byte_940F8 != 1 )
    return 1;
  sub_22308(v3);
  timer = v3[0];
  v4 = localtime(&timer);
  if ( !byte_951F8 )
    return sub_2EAC4((int)v4, (int)&unk_940FC);
  if ( byte_940F8 != 1 )
  {
    if ( sub_2EAC4((int)v4, (int)&unk_951FC) )
    {
      return 0;
    }
    else
    {
      byte_951F8 = 0;
      return 1;
    }
  }
  else if ( sub_2EAC4((int)&unk_951FC, (int)&unk_940FC) )
  {
    return sub_2EAC4((int)v4, (int)&unk_940FC) && !sub_2EAC4((int)v4, (int)&unk_951FC);
  }
  else
  {
    return !sub_2EAC4((int)v4, (int)&unk_951FC) || sub_2EAC4((int)v4, (int)&unk_940FC);
  }
}
