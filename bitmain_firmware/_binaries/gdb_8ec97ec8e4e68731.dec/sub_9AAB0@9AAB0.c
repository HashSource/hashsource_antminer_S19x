int __fastcall sub_9AAB0(int a1)
{
  int v1; // r2
  _DWORD *v2; // r3
  int v3; // r12
  int v4; // r1
  unsigned int v5; // r0
  int result; // r0
  bool v7; // zf
  int v8; // r3

  v1 = a1;
  if ( !a1 )
    return 0;
  while ( 1 )
  {
    v2 = *(_DWORD **)(v1 + 24);
    v3 = v2[2];
    v4 = *(char *)v2;
    v5 = v4 & 0xFFFFFFFB;
    if ( v3 )
      break;
    v7 = v5 == 8;
    result = v2[3];
    if ( !v7 )
      return 0;
    if ( result )
    {
      v3 = v2[3];
      goto LABEL_13;
    }
    if ( v4 == 12 )
    {
      v8 = v2[5];
      if ( v8 != v1 )
      {
        v1 = v8;
        if ( v8 )
          continue;
      }
    }
    return result;
  }
  if ( v5 != 8 )
    return 0;
LABEL_13:
  result = sub_338BD4(v3, "___XF_");
  if ( result )
    result += 5;
  return result;
}
