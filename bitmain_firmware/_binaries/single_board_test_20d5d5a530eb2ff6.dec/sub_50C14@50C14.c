int __fastcall sub_50C14(char *a1, unsigned int a2, unsigned int a3)
{
  char *v3; // r4
  unsigned int v4; // r3
  char *v6; // r5
  bool v7; // zf

  if ( (unsigned int)a1 < a2 - 3 )
  {
    v3 = a1;
    v4 = *(_DWORD *)a1 ^ a3;
    if ( v4 )
      return &v3[__clz(__rbit32(v4)) >> 3] - a1;
    while ( 1 )
    {
      v3 += 4;
      if ( (unsigned int)v3 >= a2 - 3 )
        break;
      v4 = *(_DWORD *)v3 ^ a3;
      if ( v4 )
        return &v3[__clz(__rbit32(v4)) >> 3] - a1;
    }
  }
  else
  {
    v3 = a1;
  }
  if ( a2 > (unsigned int)v3 && (unsigned __int8)*v3 == (unsigned __int8)a3 )
  {
    v6 = v3 + 1;
    do
    {
      a3 >>= 8;
      v7 = a2 == (_DWORD)v6;
      v3 = v6++;
    }
    while ( !v7 && (unsigned __int8)*v3 == (unsigned __int8)a3 );
  }
  return v3 - a1;
}
