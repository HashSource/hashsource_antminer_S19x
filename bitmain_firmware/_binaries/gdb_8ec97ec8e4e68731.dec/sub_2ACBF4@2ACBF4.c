int __fastcall sub_2ACBF4(int a1, int a2)
{
  int *v2; // r0
  unsigned int v3; // r1
  int v4; // r4
  unsigned int v6; // r3

  if ( a2 < 0 )
  {
    v4 = 0;
    ((void (__fastcall *)(int))loc_2A6C48)(6);
    return v4;
  }
  v2 = *(int **)(a1 + 168);
  if ( a2 )
  {
    v3 = (a2 + 7) & 0xFFFFFFF8;
    if ( !v3 )
      goto LABEL_4;
  }
  else
  {
    v3 = 8;
  }
  v6 = v2[1];
  if ( v6 >= v3 )
  {
    v4 = *v2;
    v2[1] = v6 - v3;
    *v2 = v4 + v3;
    if ( v4 )
      return v4;
    goto LABEL_9;
  }
LABEL_4:
  v4 = sub_324C4C(v2, v3);
  if ( v4 )
    return v4;
LABEL_9:
  ((void (__fastcall *)(int))loc_2A6C48)(6);
  return v4;
}
