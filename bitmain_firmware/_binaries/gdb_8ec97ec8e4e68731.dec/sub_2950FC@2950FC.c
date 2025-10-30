char *__fastcall sub_2950FC(const char *a1, int a2)
{
  signed int v4; // r0
  int v5; // r6
  int v6; // r5
  char *result; // r0

  v4 = strlen(a1);
  v5 = v4;
  v6 = v4;
  if ( dword_48AAF0 <= v4 )
    sub_2912F8(v4);
  result = strcpy((char *)dword_48AAD4, a1);
  dword_4900DC = v5;
  if ( a2 )
  {
    result = (char *)sub_2923B8();
    v6 = dword_4900DC;
  }
  if ( dword_4900D8 <= v6 )
  {
    if ( dword_4900D8 < 0 )
      dword_4900D8 = 0;
  }
  else
  {
    dword_4900D8 = v6;
  }
  if ( dword_4900D4 > v6 )
  {
    dword_4900D4 = v6;
  }
  else if ( dword_4900D4 < 0 )
  {
    dword_4900D4 = 0;
  }
  return result;
}
