int __fastcall sub_183C28(int a1)
{
  int *v1; // r3

  v1 = &dword_487914;
  do
  {
    v1 = (int *)v1[1];
    if ( !v1 )
      return -1;
  }
  while ( a1 != v1[2] );
  return v1[3];
}
