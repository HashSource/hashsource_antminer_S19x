size_t __fastcall sub_E92B8(int a1, int *a2, _DWORD *a3, void *src, size_t n, void (__fastcall *a6)(int *, int *, int))
{
  size_t v6; // r2
  int v10; // r0
  int v11; // r10
  int v12; // r1
  unsigned int v13; // r4
  int *v14; // r5
  unsigned int v15; // r7
  int v16; // r1
  int v17; // r1
  int v18; // r1
  int v20; // [sp+10h] [bp-14h] BYREF
  int v21; // [sp+14h] [bp-10h]
  int v22; // [sp+18h] [bp-Ch]
  int v23; // [sp+1Ch] [bp-8h]

  v6 = n & 7;
  if ( (n & 7) != 0 )
    return 0;
  if ( n - 16 > 0x7FFFFFF0 )
    return v6;
  memmove(a3 + 2, src, n);
  if ( !a2 )
    a2 = (int *)&unk_1B65D8;
  v10 = *a2;
  v11 = 6;
  v12 = a2[1];
  v13 = 1;
  v20 = v10;
  v21 = v12;
  do
  {
    v14 = a3 + 2;
    v15 = ((n - 1) >> 3) + 1 + v13;
    do
    {
      v16 = v14[1];
      v22 = *v14;
      v23 = v16;
      a6(&v20, &v20, a1);
      HIBYTE(v21) ^= v13;
      if ( v13 > 0xFF )
      {
        BYTE2(v21) ^= BYTE1(v13);
        BYTE1(v21) ^= BYTE2(v13);
        LOBYTE(v21) = v21 ^ HIBYTE(v13);
      }
      v17 = v23;
      ++v13;
      v14 += 2;
      *(v14 - 2) = v22;
      *(v14 - 1) = v17;
    }
    while ( v15 != v13 );
    --v11;
    v13 = v15;
  }
  while ( v11 );
  v18 = v21;
  *a3 = v20;
  a3[1] = v18;
  return n + 8;
}
