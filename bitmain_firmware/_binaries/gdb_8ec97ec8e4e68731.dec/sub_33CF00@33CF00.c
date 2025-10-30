_DWORD *__fastcall sub_33CF00(_DWORD *a1, char *src)
{
  int v4; // r2

  v4 = -1;
  *a1 = a1 + 2;
  if ( src )
    v4 = (int)&src[strlen(src)];
  sub_33CDCC(a1, src, v4);
  return a1;
}
