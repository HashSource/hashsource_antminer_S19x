void __fastcall sub_C197C(int a1)
{
  void *v2; // r0

  if ( a1 )
  {
    if ( *(int *)(a1 + 56) > 0 )
    {
      obstack_free((struct obstack *)a1, 0);
      v2 = *(void **)(a1 + 48);
      if ( !v2 )
        goto LABEL_5;
    }
    else
    {
      v2 = *(void **)(a1 + 48);
      if ( !v2 )
      {
LABEL_5:
        free((void *)a1);
        return;
      }
    }
    free(v2);
    goto LABEL_5;
  }
}
