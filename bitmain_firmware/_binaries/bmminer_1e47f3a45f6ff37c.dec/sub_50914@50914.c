unsigned __int8 *__fastcall sub_50914(int a1, unsigned int *a2, int *a3)
{
  unsigned int v3; // r3
  int *v7; // r2
  unsigned __int8 *result; // r0
  int v9; // r0
  int v10; // r2
  bool v11; // zf
  int v12; // r3
  int v13; // t1

  v3 = *a2;
  if ( dword_9CD91C <= *a2 )
    return 0;
  while ( 1 )
  {
    v7 = (int *)(dword_9CD914 + 28 * v3);
    if ( v7[1] != 8 )
      break;
LABEL_8:
    *a2 = ++v3;
    if ( dword_9CD91C <= v3 )
      return 0;
  }
  if ( a1 )
  {
    result = sub_507EC(a1, a3);
    a1 = (int)result;
    if ( result )
      return result;
    v3 = *a2;
    goto LABEL_8;
  }
  v9 = *v7;
  v10 = *v7;
  while ( 1 )
  {
    v13 = *(unsigned __int8 *)++v10;
    v12 = v13;
    if ( (v13 & 0xDF) == 0 )
      break;
    v11 = v12 == 124;
    if ( v12 != 124 )
      v11 = v12 == 61;
    if ( v11 )
      break;
    ++a1;
  }
  *a3 = a1;
  return (unsigned __int8 *)(v9 + 1);
}
