char *__fastcall sub_281FB8(int a1)
{
  char *result; // r0

  if ( dword_48AB9C )
  {
    sub_292748(a1);
    dword_48AB9C = 0;
    return sub_280570(*(char **)dword_48B6E0);
  }
  else
  {
    result = (char *)dword_48B6E0;
    if ( dword_48B6E0 && (dword_48ABA0 & 0xFFFFFFD7) == 0x41 )
    {
      result = sub_280570((char *)dword_48B6E0);
    }
    else if ( dword_48ABA0 == 67 )
    {
      result = (char *)sub_292748(dword_48B6E0);
    }
    for ( ; dword_48B6E8 > 0; result = (char *)sub_292748(result) )
      ;
  }
  return result;
}
