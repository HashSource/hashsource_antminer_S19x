void __fastcall sub_1BA654(void *a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r2
  void *v5; // r3
  _DWORD *v6; // r4
  void *v7; // r0

  v4 = (_DWORD *)dword_487C08;
  if ( dword_487C08 )
  {
    v5 = *(void **)(dword_487C08 + 4);
    v6 = *(_DWORD **)dword_487C08;
    if ( v5 == a1 )
    {
      dword_487C08 = *(_DWORD *)dword_487C08;
      v7 = v5;
      v6 = v4;
    }
    else
    {
      while ( 1 )
      {
        if ( !v6 )
        {
          sub_946B0("Failed to detach observer", a1, v4, v5);
          return;
        }
        v7 = (void *)v6[1];
        v5 = (void *)*v6;
        if ( v7 == a1 )
          break;
        v4 = v6;
        v6 = (_DWORD *)*v6;
      }
      *v4 = v5;
    }
    if ( v7 )
      free(v7);
    free(v6);
  }
  else
  {
    sub_946B0("Failed to detach observer", a1, 0, a4);
  }
}
