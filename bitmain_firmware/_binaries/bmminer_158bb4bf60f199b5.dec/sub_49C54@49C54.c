size_t __fastcall sub_49C54(_BYTE *a1, char *s)
{
  size_t result; // r0
  char v5; // r1
  char *v6; // r7
  unsigned int v7; // r12
  char *v8; // r6
  int v9; // t1
  unsigned int *v10; // r2
  int v11; // r3
  size_t *v12; // r3
  unsigned int *v13; // r2
  size_t *v14; // r5
  unsigned int v15; // t1
  int v16; // [sp+0h] [bp-20h] BYREF
  int v17; // [sp+4h] [bp-1Ch]
  unsigned int v18[5]; // [sp+8h] [bp-18h] BYREF
  unsigned int v19; // [sp+1Ch] [bp-4h] BYREF

  memset(v18, 0, sizeof(v18));
  v17 = 0;
  v19 = 0;
  result = strlen(s);
  if ( result )
  {
    v6 = s - 1;
    v7 = 0;
    v8 = &v6[result];
    while ( 1 )
    {
      v9 = (unsigned __int8)*++v6;
      v10 = &v19;
      v11 = dword_81958[v9 + 286];
      while ( 1 )
      {
        *v10-- = 58 * v7 + v11;
        v11 = (58LL * v7 + (unsigned __int64)(unsigned int)v11) >> 32;
        if ( &v16 == (int *)v10 )
          break;
        v7 = *v10;
      }
      if ( v8 == v6 )
        break;
      v7 = v19;
    }
    v5 = v17;
    result = bswap32(v18[0]);
  }
  else
  {
    v5 = 0;
  }
  v12 = (size_t *)(a1 + 1);
  v13 = v18;
  *a1 = v5;
  v14 = (size_t *)(a1 + 25);
  while ( 1 )
  {
    *v12++ = result;
    if ( v12 == v14 )
      break;
    v15 = v13[1];
    ++v13;
    result = bswap32(v15);
  }
  return result;
}
