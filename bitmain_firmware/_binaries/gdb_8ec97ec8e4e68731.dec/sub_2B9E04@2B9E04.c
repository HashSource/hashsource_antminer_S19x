void *__fastcall sub_2B9E04(_DWORD *a1, char a2, int a3)
{
  void *result; // r0
  int v7; // r5
  unsigned int v8; // r1

  result = (void *)a1[38];
  if ( result )
  {
    v7 = a1[36];
    v8 = a1[37];
    a1[36] = v7 + 1;
    if ( v7 + 1 <= v8 )
      goto LABEL_3;
    a1[37] = 2 * v8;
    result = sub_2AB4B4(result, 16 * v8);
    a1[38] = result;
    if ( result )
      goto LABEL_3;
  }
  else
  {
    v7 = 0;
    result = sub_2AB368(8);
    a1[38] = result;
    a1[37] = 1;
    a1[36] = 1;
    if ( result )
    {
LABEL_3:
      *((_DWORD *)result + 2 * v7) = a3;
      *((_BYTE *)result + 8 * v7 + 4) = a2;
    }
  }
  return result;
}
