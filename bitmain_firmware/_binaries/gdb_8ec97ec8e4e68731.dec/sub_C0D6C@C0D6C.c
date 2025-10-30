char *__fastcall sub_C0D6C(int a1, char a2, unsigned int a3)
{
  __int16 v3; // r5
  char *result; // r0
  __int64 v7; // r0
  int v8; // r2

  v3 = a3;
  if ( a3 >= 0x10000 )
  {
    v7 = sub_94700((int)"ax-general.c", 311, "ax-general.c (ax_tsv): variable number is %d, out of range", a3);
    return (char *)sub_C0DE0(v7, HIDWORD(v7), v8);
  }
  else
  {
    result = sub_C0878((char *)a1, 3);
    *(_BYTE *)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 4)) = a2;
    *(_BYTE *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1 + 1) = HIBYTE(v3);
    *(_BYTE *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1 + 2) = v3;
    *(_DWORD *)(a1 + 4) += 3;
  }
  return result;
}
