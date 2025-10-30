void __fastcall sub_2029F4(unsigned int **a1)
{
  unsigned int *v2; // r0
  unsigned int v3; // r5
  unsigned int v4; // r3
  unsigned int v5; // r4
  void *v6; // r0
  void *v7; // r0

  v2 = *a1;
  if ( v2 )
  {
    if ( *v2 )
    {
      v3 = 0;
      while ( 1 )
      {
        v4 = v3 + 2;
        ++v3;
        v5 = v2[v4];
        if ( v5 )
        {
          v6 = *(void **)(v5 + 36);
          if ( v6 )
            sub_339E64(v6);
          v7 = *(void **)(v5 + 24);
          if ( v7 )
            sub_339E64(v7);
          if ( *(_DWORD *)v5 != v5 + 8 )
            sub_339E64(*(void **)v5);
          sub_33AC04((void *)v5);
          v2 = *a1;
        }
        if ( !v2 )
          break;
        if ( v3 >= *v2 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      free(v2);
    }
  }
  *a1 = 0;
}
