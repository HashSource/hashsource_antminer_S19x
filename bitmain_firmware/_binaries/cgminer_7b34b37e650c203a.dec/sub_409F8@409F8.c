int __fastcall sub_409F8(int result, int a2)
{
  const char **v3; // r4
  int v4; // r6
  const char *v5; // r3
  int v6[8]; // [sp+4h] [bp-20h] BYREF

  v3 = (const char **)result;
  v4 = dword_7686C;
  if ( a2 )
  {
    v6[0] = 0;
    memset(&v6[2], 0, 16);
    v6[6] = a2;
    v6[1] = 8;
    sub_407E0(v6);
    v5 = v3[1];
    if ( v5 == (const char *)16 )
    {
LABEL_7:
      result = 7 * v4;
      *(_DWORD *)(dword_76864 + 28 * v4 + 20) = dword_7686C - v4;
      return result;
    }
  }
  else
  {
    v5 = *(const char **)(result + 4);
    if ( v5 == (const char *)16 )
      return result;
  }
  do
  {
    if ( v5 == (const char *)8 )
    {
      result = sub_409F8(*v3, v3[6]);
    }
    else
    {
      sub_4066C(v3);
      result = sub_407E0((int *)v3);
    }
    v3 += 7;
    v5 = v3[1];
  }
  while ( v5 != (const char *)16 );
  if ( a2 )
    goto LABEL_7;
  return result;
}
