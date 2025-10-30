int sub_2923B8()
{
  int v0; // r6
  int *v1; // r4
  int v2; // r2

  v0 = dword_48B6E0;
  if ( dword_48B6E0 )
  {
    v1 = (int *)dword_48B6E0;
    do
    {
      v2 = v1[4];
      dword_48B6E0 = *v1;
      if ( !v2 )
        sub_297758(v1[3]);
      sub_297758(v1);
      v1 = (int *)dword_48B6E0;
    }
    while ( dword_48B6E0 );
  }
  dword_48B6E0 = 0;
  return sub_297DAC(-1, v0, 0);
}
