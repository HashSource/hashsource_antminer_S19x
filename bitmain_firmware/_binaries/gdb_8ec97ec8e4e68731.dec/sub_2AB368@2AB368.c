void *__fastcall sub_2AB368(signed int a1)
{
  void *v2; // r5
  _BOOL4 v3; // r4

  if ( a1 < 0 )
  {
    v2 = 0;
    ((void (__fastcall *)(int))loc_2A6C48)(6);
  }
  else
  {
    v2 = malloc(a1);
    v3 = a1 != 0;
    if ( v2 )
      v3 = 0;
    if ( v3 )
      ((void (__fastcall *)(int))loc_2A6C48)(6);
  }
  return v2;
}
