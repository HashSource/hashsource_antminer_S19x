void sub_1DB2CC()
{
  int *v0; // r0

  v0 = &dword_4880B8;
  do
  {
    if ( !v0[2] )
      break;
    v0 = (int *)v0[1];
  }
  while ( v0 );
  JUMPOUT(0x1DB168);
}
