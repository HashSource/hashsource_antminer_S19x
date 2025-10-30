int sub_69DD4()
{
  int *v0; // r3
  int result; // r0
  int v2; // r1

  if ( !dword_1B13B4 )
    return -1;
  v0 = (int *)&unk_1B135C;
  result = 0;
  do
  {
    v2 = *v0;
    v0 += 3;
    if ( v2 != -1 )
      ++result;
  }
  while ( v0 != &dword_1B13A4 );
  return result;
}
