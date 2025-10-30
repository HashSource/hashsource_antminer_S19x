char *__fastcall sub_205BE0(int a1, int *a2)
{
  int *v3; // r4
  int v4; // r1
  char *result; // r0
  int v6; // r6
  int v7; // r7
  int v8; // r1
  char *v9; // r2

  LOWORD(v3) = (unsigned __int16)&dword_489414;
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 24) + 12) )
  {
    HIWORD(v3) = (unsigned int)&dword_489414 >> 16;
    v4 = v3[3];
    result = (char *)v3[4];
    if ( v4 == v3[5] )
    {
      v3[5] = 2 * v4;
      result = (char *)sub_93050(result, 8 * v4);
      v4 = v3[3];
      v3[4] = (int)result;
    }
    *(_DWORD *)&result[4 * v4] = a1;
    v3[3] = v4 + 1;
  }
  else
  {
    HIWORD(v3) = (unsigned int)&dword_489414 >> 16;
    v6 = *a2;
    v7 = a2[1];
    result = (char *)v3[1];
    v8 = *v3;
    if ( *v3 == v3[2] )
    {
      v3[2] = 2 * v8;
      result = (char *)sub_93050(result, 24 * v8);
      v8 = *v3;
      v3[1] = (int)result;
    }
    *v3 = v8 + 1;
    v9 = &result[12 * v8];
    *(_DWORD *)v9 = v6;
    *((_DWORD *)v9 + 1) = v7;
    *((_DWORD *)v9 + 2) = a1;
  }
  return result;
}
