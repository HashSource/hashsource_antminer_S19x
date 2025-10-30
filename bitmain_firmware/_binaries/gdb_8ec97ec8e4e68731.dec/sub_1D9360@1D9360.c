void __fastcall sub_1D9360(int *ptr)
{
  int *v2; // r5
  int v3; // r4
  int v4; // r3
  void *v5; // r0
  int v6; // r3
  void *v7; // r0

  while ( ptr[1] )
    ptr = (int *)ptr[1];
  v2 = (int *)*ptr;
  if ( *ptr )
  {
    while ( 1 )
    {
      v3 = v2[1];
      v4 = *(_DWORD *)(v3 + 8);
      if ( v4 == 1 )
        break;
      if ( !v4 )
        goto LABEL_11;
      if ( v4 == 2 )
      {
        if ( *(_DWORD *)(v3 + 20) > 4u )
        {
          v5 = *(void **)(v3 + 28);
          if ( v5 )
            goto LABEL_10;
        }
        goto LABEL_11;
      }
LABEL_12:
      ptr = v2;
      v2 = (int *)*v2;
      if ( !v2 )
        goto LABEL_13;
    }
    if ( *(unsigned __int16 *)(v3 + 18) > 8u )
    {
      v5 = *(void **)(v3 + 20);
      if ( v5 )
LABEL_10:
        free(v5);
    }
LABEL_11:
    free((void *)v3);
    goto LABEL_12;
  }
LABEL_13:
  if ( ptr != &dword_4880B8 )
  {
    v6 = ptr[2];
    switch ( v6 )
    {
      case 1:
        if ( *((unsigned __int16 *)ptr + 9) <= 8u )
          goto LABEL_20;
        v7 = (void *)ptr[5];
        if ( !v7 )
          goto LABEL_20;
        break;
      case 0:
        goto LABEL_20;
      case 2:
        if ( (unsigned int)ptr[5] <= 4 )
          goto LABEL_20;
        v7 = (void *)ptr[7];
        if ( !v7 )
          goto LABEL_20;
        break;
      default:
        return;
    }
    free(v7);
LABEL_20:
    free(ptr);
    return;
  }
  dword_4880E0 = (int)v2;
  dword_4880BC = (int)v2;
}
