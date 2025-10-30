int __fastcall sub_754F8(char *a1, size_t a2, int a3)
{
  double v3; // d0
  int v6; // [sp+Ch] [bp-28h]
  int v9; // [sp+20h] [bp-14h]
  int v10; // [sp+24h] [bp-10h]
  _BYTE *src; // [sp+28h] [bp-Ch]
  char *dest; // [sp+2Ch] [bp-8h]
  _BYTE *desta; // [sp+2Ch] [bp-8h]

  v6 = a3;
  if ( !a3 )
    v6 = 17;
  v9 = snprintf(a1, a2, "%.*g", v6, v3);
  if ( v9 < 0 )
    return -1;
  v10 = v9;
  if ( v9 >= a2 )
    return -1;
  sub_75390(a1);
  if ( !strchr(a1, 46) && !strchr(a1, 101) )
  {
    if ( v9 + 3 >= a2 )
      return -1;
    a1[v9] = 46;
    a1[v9 + 1] = 48;
    a1[v9 + 2] = 0;
    v10 = v9 + 2;
  }
  dest = strchr(a1, 101);
  if ( dest )
  {
    desta = dest + 1;
    src = desta + 1;
    if ( *desta == 45 )
      ++desta;
    while ( *src == 48 )
      ++src;
    if ( src != desta )
    {
      memmove(desta, src, a1 - src + v10);
      v10 += desta - src;
    }
  }
  return v10;
}
