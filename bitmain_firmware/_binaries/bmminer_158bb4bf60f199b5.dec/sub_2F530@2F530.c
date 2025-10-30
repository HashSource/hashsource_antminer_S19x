int __fastcall sub_2F530(int a1, unsigned int a2)
{
  unsigned int v2; // r3
  int v3; // r1
  int v4; // r3
  int v5; // r12
  int result; // r0
  int v7; // lr
  char *v8; // r12
  char *v9; // r3
  int v10; // t1

  v2 = a2 >> 2;
  v3 = 3 * (a2 & 3);
  v4 = 3 * v2;
  if ( (unsigned int)(2 * v4) > 0xFFFFFFF9 )
    return 0;
  v5 = 29952 * a1;
  result = 0;
  v7 = 6;
  v8 = &byte_138648[768 * v4 + 5056 + 32 * v3 + v5];
  do
  {
    v9 = v8;
    do
    {
      v10 = *((_DWORD *)v9 + 1);
      v9 += 4;
      result += v10;
    }
    while ( v9 != v8 + 96 );
    --v7;
    v8 += 384;
  }
  while ( v7 );
  return result;
}
