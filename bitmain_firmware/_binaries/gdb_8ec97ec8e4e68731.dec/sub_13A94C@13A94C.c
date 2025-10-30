unsigned int *__fastcall sub_13A94C(_DWORD *a1, char *a2)
{
  char *v2; // r5
  unsigned int *result; // r0
  char *v6; // r1
  unsigned int *v7; // r2
  unsigned int v8; // r4
  unsigned int v9; // t1
  unsigned int v10; // r3
  unsigned int v11; // t1
  char *v12; // r12

  if ( a2 - (char *)a1 <= 64 )
    return (unsigned int *)sub_1499B0(a1);
  v2 = (char *)(a1 + 16);
  result = (unsigned int *)sub_1499B0(a1);
  if ( a2 != v2 )
  {
    result = a1 + 15;
    do
    {
      v6 = v2;
      v7 = result;
      v9 = *(_DWORD *)v2;
      v2 += 4;
      v8 = v9;
      v11 = *result++;
      v10 = v11;
      if ( v8 >= v11 )
      {
        v7 = (unsigned int *)v6;
      }
      else
      {
        v12 = v2;
        while ( 1 )
        {
          *((_DWORD *)v12 - 1) = v10;
          v12 -= 4;
          v10 = *(v7 - 1);
          if ( v8 >= v10 )
            break;
          --v7;
        }
      }
      *v7 = v8;
    }
    while ( a2 != v2 );
  }
  return result;
}
