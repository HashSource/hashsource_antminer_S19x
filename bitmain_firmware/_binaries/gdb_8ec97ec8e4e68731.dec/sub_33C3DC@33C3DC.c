_DWORD *__fastcall sub_33C3DC(_DWORD *a1, char *s)
{
  unsigned int v4; // r0

  v4 = strlen(s);
  if ( 0x7FFFFFFF - a1[1] < v4 )
    sub_33D184("basic_string::append");
  return sub_33C320(a1, s, v4);
}
