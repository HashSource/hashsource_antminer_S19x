int __fastcall sub_2A8634(_DWORD *a1, void *src, __int64 n)
{
  __int64 v5; // r4
  unsigned int *v6; // r6
  unsigned int v7; // lr
  unsigned int v8; // r1
  unsigned int v9; // r8
  bool v10; // cc
  int result; // r0
  unsigned int v12; // r8

  v5 = n;
  v6 = (unsigned int *)a1[2];
  HIDWORD(n) = a1[7];
  v7 = a1[6];
  v8 = *v6;
  v9 = n + v7;
  v10 = (n + __PAIR64__(HIDWORD(v5), v7)) >> 32 != 0;
  result = v6[1];
  if ( !((n + __PAIR64__(HIDWORD(v5), v7)) >> 32) )
    v10 = v9 > v8;
  if ( !v10 )
    goto LABEL_6;
  v12 = (v9 + 127) & 0xFFFFFF80;
  *v6 = n + v7;
  if ( ((v8 + 127) & 0xFFFFFF80) >= v12 )
    goto LABEL_6;
  result = sub_2AB4B4(result, v12);
  v6[1] = result;
  if ( result )
  {
    if ( *v6 < v12 )
    {
      memset((void *)(result + *v6), 0, v12 - *v6);
      result = v6[1];
    }
    v7 = a1[6];
LABEL_6:
    memcpy((void *)(result + v7), src, v5);
    return v5;
  }
  *v6 = 0;
  return result;
}
