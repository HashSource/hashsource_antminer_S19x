int sub_53C3C()
{
  int result; // r0
  int *v1; // r2
  int v2; // r12
  int v3; // t1

  *(_DWORD *)dword_9ED70 = 0;
  dword_9ED74 = 0;
  dword_1AF0D0 = 0;
  dword_1AF0D4 = 0;
  result = sub_51B18(0, dword_9ED70, 8u, 0);
  if ( dword_242F4C > 0 )
  {
    result = 0;
    v1 = (int *)dword_244048;
    v2 = dword_244048 + 4 * dword_242F4C;
    do
    {
      v3 = *v1++;
      *(_DWORD *)(v3 + 368) = 0;
      *(_DWORD *)(v3 + 372) = 0;
    }
    while ( v1 != (int *)v2 );
  }
  return result;
}
