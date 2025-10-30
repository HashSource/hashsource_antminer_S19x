char *__fastcall sub_8121C(const char *a1, int a2)
{
  int v3; // r2
  unsigned int v4; // r4
  char *v5; // r8
  char *result; // r0

  if ( (unsigned int)(a2 - 3) > 0xB )
    return 0;
  v3 = *(unsigned __int8 *)a1;
  v4 = *((unsigned __int8 *)&dword_9F184[199] + v3) + a2;
  if ( v4 > 0x11 )
    return 0;
  v5 = (char *)(&off_B5208)[2 * v4];
  if ( (unsigned __int8)*v5 != v3 )
    return 0;
  result = (char *)strncmp(a1 + 1, v5 + 1, a2 - 1);
  if ( result )
    return 0;
  if ( !v5[a2] )
    return (char *)(&off_B5208)[2 * v4 + 1];
  return result;
}
