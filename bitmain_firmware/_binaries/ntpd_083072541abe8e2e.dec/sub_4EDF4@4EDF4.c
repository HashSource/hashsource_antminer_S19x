ssize_t __fastcall sub_4EDF4(ssize_t result)
{
  ssize_t v1; // r6
  char *v2; // r5

  v1 = result;
  if ( result <= 0 )
  {
    v2 = (char *)&word_BD578[54 * result];
    if ( *((_WORD *)v2 + 26) )
    {
      *((_WORD *)v2 + 26) = 0;
    }
    else
    {
      result = write(*((_DWORD *)v2 + 6), "D\r", 3u);
      if ( result < 0 )
        result = sub_64E00(3, "leitch_send: unit %d send failed %m", (unsigned __int8)v2[36]);
      word_BD578[54 * v1 + 26] = 1;
    }
  }
  return result;
}
