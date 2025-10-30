int __fastcall sub_75DA0(int result)
{
  int v1; // r12
  double *v2; // r4
  double *v3; // r5
  int v4; // r1
  int v5; // r6
  int v6; // r3
  int v7; // t1

  if ( !byte_65E46C || !byte_65E5D0 )
    return sub_74528(result);
  if ( dword_65E484 > 1 )
  {
    v1 = dword_65E484 - 1;
    v2 = &dbl_65E488;
    v3 = &dbl_65E528;
    v4 = 1;
    do
    {
      while ( 1 )
      {
        v7 = *(unsigned __int8 *)v2;
        v2 = (double *)((char *)v2 + 1);
        v6 = v7;
        v5 = v4;
        if ( result >= v7 )
          break;
        v5 = v4;
LABEL_7:
        ++v4;
        ++v3;
        if ( v1 <= v5 )
          return result;
      }
      if ( result <= *(unsigned __int8 *)v2 || result <= v6 )
        goto LABEL_7;
      ++v4;
      ++v3;
    }
    while ( v1 > v5 );
  }
  return result;
}
