int __fastcall sub_8BCB0(_DWORD *a1, int a2, int a3)
{
  if ( *(_DWORD *)(*a1 + 4 * a2) )
  {
    if ( a1[1] > a1[2] - 1 && sub_8BA58((int)a1, 0) )
    {
      sub_8CD10(2, "src/zc_arraylist.c", 107, "expand_internal fail");
      return -1;
    }
    else
    {
      memmove((void *)(*a1 + 4 * (a2 + 1)), (const void *)(*a1 + 4 * a2), 4 * (a1[1] - a2));
      *(_DWORD *)(*a1 + 4 * a2) = a3;
      ++a1[1];
      return 0;
    }
  }
  else
  {
    *(_DWORD *)(*a1 + 4 * a2) = a3;
    return 0;
  }
}
