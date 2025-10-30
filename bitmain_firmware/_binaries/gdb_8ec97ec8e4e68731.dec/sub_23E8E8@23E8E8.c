void sub_23E8E8()
{
  int *v0; // r4
  int *v1; // r6

  v0 = (int *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    do
    {
      v1 = (int *)v0[1];
      if ( v0[11] == 2 || !sub_23D9BC(v0) )
        sub_23E1DC(v0[2], v0[3], v0[4], 0);
      v0 = v1;
    }
    while ( v1 );
  }
}
