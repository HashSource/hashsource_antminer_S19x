ssize_t __fastcall sub_4FF40(ssize_t result)
{
  ssize_t v1; // r5
  char *v2; // r6

  v1 = result;
  if ( result <= 0 )
  {
    v2 = (char *)&word_BE58C[54 * result];
    if ( *((_WORD *)v2 + 26) )
    {
      *((_WORD *)v2 + 26) = 0;
    }
    else
    {
      result = write(*((_DWORD *)v2 + 6), "D\r", 3u);
      if ( result < 0 )
        result = sub_65D40(3, "leitch_send: unit %d send failed %m", (unsigned __int8)v2[36]);
      word_BE58C[54 * v1 + 26] = 1;
    }
  }
  return result;
}
