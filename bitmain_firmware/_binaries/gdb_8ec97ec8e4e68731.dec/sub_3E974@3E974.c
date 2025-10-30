void __fastcall sub_3E974(int a1)
{
  _DWORD *v1; // r5
  void *v2; // r0
  void *v3; // r0
  _DWORD *v4; // r4

  v1 = (_DWORD *)dword_471BF4;
  if ( dword_471BF4 )
  {
    if ( a1 == *(_DWORD *)(dword_471BF4 + 4) )
    {
      v4 = (_DWORD *)dword_471BF4;
      v1 = 0;
LABEL_7:
      v2 = (void *)v4[2];
      if ( v2 )
        dlclose(v2);
      v3 = (void *)v4[3];
      if ( v3 )
        free(v3);
      if ( v1 )
        *v1 = *v4;
      else
        dword_471BF4 = *v4;
      free(v4);
    }
    else
    {
      while ( 1 )
      {
        v4 = (_DWORD *)*v1;
        if ( !*v1 )
          break;
        if ( v4[1] == a1 )
          goto LABEL_7;
        v1 = (_DWORD *)*v1;
      }
    }
  }
}
