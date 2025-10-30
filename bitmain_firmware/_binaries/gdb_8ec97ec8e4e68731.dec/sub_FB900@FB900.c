void sub_FB900()
{
  int v0; // r12
  void *v1; // r6

  if ( dword_47ACB8 )
  {
    v0 = ps_getpid_0((int)&dword_4878EC);
    dword_4878EC = dword_475848;
    dword_4878F0 = dword_47584C;
    dword_4878F4 = dword_475850;
    if ( v0 )
      sub_1838B8(v0);
    sub_2019CC();
    v1 = (void *)dword_47AD00;
    if ( dword_47AD00 )
    {
      if ( *(_DWORD *)dword_47AD00 )
        free(*(void **)dword_47AD00);
      free(v1);
      dword_47AD00 = 0;
    }
    ((void (__fastcall *)(int))loc_1625A8)(dword_47ACB8);
    dword_47ACB8 = 0;
  }
  dword_47AD04 = 0;
  dword_47ACBC = 0;
}
