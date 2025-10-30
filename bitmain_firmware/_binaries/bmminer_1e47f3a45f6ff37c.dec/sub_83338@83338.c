int __fastcall sub_83338(_DWORD *a1, const char *a2)
{
  int v6; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  if ( a2 && *a2 )
  {
    for ( i = 0; a1[1] > i; ++i )
    {
      v6 = *(_DWORD *)(*a1 + 4 * i);
      if ( v6 && !strcasecmp(a2, (const char *)(v6 + 4)) )
        return i;
    }
    sub_8CD10(2, "src/level_list.c", 142, "str[%s] can't found in level list", a2);
    return -1;
  }
  else
  {
    sub_8CD10(2, "src/level_list.c", 132, "str is [%s], can't find level", a2);
    return -1;
  }
}
