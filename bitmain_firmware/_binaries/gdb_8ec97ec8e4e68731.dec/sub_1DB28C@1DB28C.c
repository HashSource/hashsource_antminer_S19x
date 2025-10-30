void sub_1DB28C()
{
  int *i; // r0

  for ( i = off_46DAB8; i[1]; i = (int *)i[1] )
    ;
  do
  {
    if ( !i[2] )
      break;
    i = (int *)*i;
  }
  while ( i );
  JUMPOUT(0x1DB168);
}
