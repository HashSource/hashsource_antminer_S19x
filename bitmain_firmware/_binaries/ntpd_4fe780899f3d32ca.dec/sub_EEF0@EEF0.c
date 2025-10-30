int __fastcall sub_EEF0(int *a1, void (**a2)(void *ptr))
{
  void (**v3)(void *); // r5
  int v4; // r3
  bool v5; // zf
  int *v6; // r0

  if ( a1 )
  {
    v3 = a2;
    if ( !a2 )
      v3 = &free;
    while ( 1 )
    {
      v6 = (int *)*a1;
      if ( !*a1 )
        break;
      v4 = *v6;
      v5 = *v6 == 0;
      *a1 = *v6;
      if ( v5 )
      {
        a1[1] = v4;
      }
      else if ( (int *)a1[1] == v6 )
      {
        a1[1] = (int)a1;
      }
      ((void (*)(void))v3)();
    }
    free(a1);
  }
  return 0;
}
