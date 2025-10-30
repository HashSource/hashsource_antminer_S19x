void *__fastcall sub_2AB3FC(void *a1, int a2)
{
  void *v3; // r5
  _BOOL4 v4; // r4

  if ( !a1 )
    return sub_2AB368(a2);
  if ( a2 < 0 )
  {
    v3 = 0;
    ((void (__fastcall *)(int))loc_2A6C48)(6);
  }
  else
  {
    v3 = realloc(a1, a2);
    v4 = a2 != 0;
    if ( v3 )
      v4 = 0;
    if ( v4 )
      ((void (__fastcall *)(int))loc_2A6C48)(6);
  }
  return v3;
}
