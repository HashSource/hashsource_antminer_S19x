void __fastcall sub_1D9280(int *a1)
{
  int v1; // r4
  int v2; // r3
  int v3; // r6
  bool v4; // cf
  void *v5; // r0

  v1 = *a1;
  *a1 = 0;
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 8);
    v3 = *(_DWORD *)(v1 + 4);
    v4 = v2 != 0;
    if ( v2 == 1 )
      goto LABEL_12;
LABEL_3:
    if ( v4 )
    {
      if ( v2 == 2 )
      {
        if ( *(_DWORD *)(v1 + 20) <= 4u )
          goto LABEL_9;
        v5 = *(void **)(v1 + 28);
        if ( !v5 )
          goto LABEL_9;
LABEL_8:
        free(v5);
        goto LABEL_9;
      }
      while ( 1 )
      {
        v1 = v3;
        if ( !v3 )
          break;
LABEL_11:
        v2 = *(_DWORD *)(v1 + 8);
        v3 = *(_DWORD *)(v1 + 4);
        v4 = v2 != 0;
        if ( v2 != 1 )
          goto LABEL_3;
LABEL_12:
        if ( *(unsigned __int16 *)(v1 + 18) > 8u )
        {
          v5 = *(void **)(v1 + 20);
          if ( v5 )
            goto LABEL_8;
        }
LABEL_9:
        free((void *)v1);
      }
    }
    else
    {
      free((void *)v1);
      v1 = v3;
      --qword_4880D8;
      --dword_4880E0;
      if ( v3 )
        goto LABEL_11;
    }
  }
}
