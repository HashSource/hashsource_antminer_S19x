void __fastcall sub_1D9488(int a1)
{
  void *v1; // r0
  _DWORD *v2; // r4
  _DWORD *v3; // r3
  _DWORD *v4; // r0

  if ( dword_487D4C )
  {
    v4 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v4, "Process record: record_full_close\n");
  }
  if ( off_46DAB8 )
    sub_1D9360(off_46DAB8);
  if ( dword_4880B0 )
  {
    free((void *)dword_4880B0);
    dword_4880B0 = 0;
  }
  v1 = (void *)dword_4883D8;
  if ( dword_4883D8 )
  {
    v2 = *(_DWORD **)dword_4883D8;
    if ( *(_DWORD *)dword_4883D8 )
    {
      do
      {
        free(v1);
        v3 = (_DWORD *)*v2;
        v1 = v2;
        dword_4883D8 = (int)v2;
        v2 = v3;
      }
      while ( v3 );
    }
    dword_4883D8 = 0;
  }
  if ( dword_4880E8 )
    sub_1532D4(&dword_4880E8);
}
