int __fastcall sub_A48FC(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v8; // r6
  int v10; // r10
  char v11; // r5
  int result; // r0
  int v13; // r1
  char v14; // r3
  int v15; // r0
  unsigned int v16; // r5

  v8 = a2;
  v10 = a3 + 32;
  if ( a6 )
    *a6 = 0;
  v11 = a2;
  if ( a2 )
    v11 = 1;
  if ( *(_BYTE *)(a3 + 60) )
  {
    if ( ((unsigned __int8)v11 & ((*(_BYTE *)(a3 + 56) & 8) == 0)) == 0 )
      goto LABEL_7;
  }
  else
  {
    sub_A3C94(a3 + 32, a3);
    v14 = *(_BYTE *)(a3 + 56);
    *(_BYTE *)(a3 + 60) = 1;
    if ( ((unsigned __int8)v11 & ((v14 & 8) == 0)) == 0 )
    {
LABEL_7:
      result = sub_9AE80(*(const char **)(a3 + 32), a4);
      if ( result )
      {
        v13 = *(_DWORD *)(*(_DWORD *)result + 8);
        if ( v13 )
          return sub_9D6C0(a1, v13, *(_DWORD *)(*(_DWORD *)result + 12));
      }
      else
      {
        if ( a6 )
          *a6 = 1;
        result = sub_A6DF0(a1, a3, a4, 1);
        if ( (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) <= 7 )
          return sub_A6DF0(a1, a3, a4, 0);
      }
      return result;
    }
  }
  if ( !a5 )
    return sub_A464C(a1, v8, a3, a4);
  do
  {
    sub_A464C(a1, v8, a3, a4);
    v15 = *(_DWORD *)(a1 + 8);
    v16 = (unsigned int)(*(_DWORD *)(a1 + 12) - v15) >> 3;
    result = sub_9A42C(v15, v16);
    if ( result )
      break;
    v8 = *(_DWORD *)(v8 + 12);
  }
  while ( v8 );
  if ( !v16 )
  {
    if ( !*(_BYTE *)(a3 + 60) )
    {
      sub_A3C94(v10, a3);
      *(_BYTE *)(a3 + 60) = 1;
    }
    goto LABEL_7;
  }
  return result;
}
