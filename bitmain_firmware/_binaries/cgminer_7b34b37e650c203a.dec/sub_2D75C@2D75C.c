int sub_2D75C()
{
  int result; // r0
  int *v1; // r2
  int v2; // r12
  int v3; // t1

  *(_DWORD *)dword_68728 = 0;
  dword_6872C = 0;
  dword_68FF0 = 0;
  dword_68FF4 = 0;
  result = sub_2AEF8(0, dword_68728, 8u, 0);
  if ( dword_733CC > 0 )
  {
    result = 0;
    v1 = (int *)dword_744C8;
    v2 = dword_744C8 + 4 * dword_733CC;
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
