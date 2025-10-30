int __fastcall sub_10AAA0(int a1, _DWORD *a2)
{
  int v2; // lr
  int *v3; // r2
  int result; // r0
  int v5; // r3
  int v6; // t1
  int v7; // r12

  v2 = *(_DWORD *)(a1 + 8);
  *a2 = a1;
  a2[1] = -1;
  if ( v2 <= 0 )
    return 0;
  v3 = *(int **)(a1 + 12);
  result = *v3;
  if ( *v3 )
  {
    v7 = *v3;
    v5 = 0;
LABEL_7:
    a2[1] = v5;
    a2[2] = v7;
    return v7;
  }
  else
  {
    v5 = 0;
    while ( v2 != ++v5 )
    {
      v6 = v3[1];
      ++v3;
      v7 = v6;
      if ( v6 )
        goto LABEL_7;
    }
  }
  return result;
}
