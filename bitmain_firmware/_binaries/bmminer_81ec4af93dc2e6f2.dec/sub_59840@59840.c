int __fastcall sub_59840(void **a1)
{
  void **ptr; // [sp+Ch] [bp-8h]

  ptr = (void **)*a1;
  while ( ptr != a1 + 1 )
  {
    if ( *ptr == a1 + 1 )
    {
      if ( ptr[1] == a1 + 1 )
      {
        sub_59778((int)a1, (int)ptr);
        if ( ptr[2] )
        {
          ptr = (void **)ptr[2];
          if ( *ptr == a1 + 1 )
          {
            if ( ptr[1] != a1 + 1 )
            {
              free(ptr[1]);
              ptr[1] = a1 + 1;
            }
          }
          else
          {
            free(*ptr);
            *ptr = a1 + 1;
          }
        }
        else
        {
          free(ptr);
          ptr = a1 + 1;
        }
      }
      else
      {
        ptr = (void **)ptr[1];
      }
    }
    else
    {
      ptr = (void **)*ptr;
    }
  }
  free(a1);
  return 0;
}
