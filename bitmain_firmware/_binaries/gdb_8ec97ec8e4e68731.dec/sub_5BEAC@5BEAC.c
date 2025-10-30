_DWORD *__fastcall sub_5BEAC(_DWORD *a1)
{
  int v2; // r2

  if ( !dword_47482C )
  {
    sub_1B9B88(373452);
    dword_47482C = 1;
  }
  v2 = dword_474828;
  *a1 = &dword_474828;
  a1[1] = v2;
  dword_474828 = 1;
  return a1;
}
