int __fastcall sub_1C6E10(int a1)
{
  int *i; // r0

  if ( a1 )
  {
    i = (int *)sub_1C6054(a1, (int (__fastcall *)(_DWORD *, int, _DWORD *))sub_1C59C0, 0);
  }
  else
  {
    i = (int *)sub_25A3E4("Delete all auto-display expressions? ");
    if ( i )
    {
      for ( i = (int *)dword_487CEC; dword_487CEC; i = (int *)dword_487CEC )
      {
        dword_487CEC = *i;
        sub_1C5988(i);
      }
    }
  }
  return sub_243C34(i);
}
