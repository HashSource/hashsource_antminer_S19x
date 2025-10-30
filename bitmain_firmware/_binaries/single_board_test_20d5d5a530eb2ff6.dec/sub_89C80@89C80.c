int __fastcall sub_89C80(_DWORD *a1, _BYTE *a2, int a3, unsigned int a4, _BYTE *a5, unsigned int a6)
{
  unsigned int v6; // r9
  unsigned int v7; // r5
  size_t v8; // r8
  size_t v9; // r7
  int v10; // r4
  _BYTE *v11; // r2
  int result; // r0

  if ( a4 )
  {
    v6 = 0;
    while ( !a6 )
    {
      v9 = *(unsigned __int8 *)(a3 + v6);
LABEL_11:
      v6 += v9 + 1;
      if ( a4 <= v6 )
        goto LABEL_12;
    }
    v7 = 0;
    v8 = *(unsigned __int8 *)(a3 + v6);
    v9 = v8;
    while ( 1 )
    {
      v10 = (unsigned __int8)a5[v7];
      if ( v10 == v8 && !memcmp((const void *)(v6 + 1 + a3), &a5[v7 + 1], v8) )
        break;
      v7 += v10 + 1;
      if ( a6 <= v7 )
        goto LABEL_11;
    }
    v11 = (_BYTE *)(a3 + v6);
    result = 1;
  }
  else
  {
LABEL_12:
    result = 2;
    v11 = a5;
  }
  *a1 = v11 + 1;
  *a2 = *v11;
  return result;
}
