int __fastcall sub_812E0(const char *a1, int a2)
{
  int v3; // r2
  unsigned int v4; // r3
  char (**v5)[4]; // r5
  char *v6; // r7
  int result; // r0

  if ( (unsigned int)(a2 - 4) > 4 )
    return 0;
  v3 = *(unsigned __int8 *)a1;
  v4 = *((unsigned __int8 *)&dword_9F184[263] + v3) + a2;
  if ( v4 > 9 )
    return 0;
  v5 = &(&off_B5208)[2 * v4];
  v6 = (char *)v5[36];
  if ( (unsigned __int8)*v6 != v3 )
    return 0;
  result = strncmp(a1 + 1, v6 + 1, a2 - 1);
  if ( result )
    return 0;
  if ( !v6[a2] )
    return (int)v5[37];
  return result;
}
