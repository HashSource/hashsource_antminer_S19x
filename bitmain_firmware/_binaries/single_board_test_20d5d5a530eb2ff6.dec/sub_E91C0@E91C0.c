int __fastcall sub_E91C0(int a1, _DWORD *a2, char *dest, int *a4, int a5, void (__fastcall *a6)(int *, int *, int))
{
  int v9; // r1
  int v10; // r10
  unsigned int v11; // r4
  char *v12; // r5
  int v13; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r1
  size_t n; // [sp+4h] [bp-28h]
  int v18; // [sp+8h] [bp-24h]
  unsigned int v19; // [sp+Ch] [bp-20h]
  char *v20; // [sp+10h] [bp-1Ch]
  int v22; // [sp+18h] [bp-14h] BYREF
  int v23; // [sp+1Ch] [bp-10h]
  int v24; // [sp+20h] [bp-Ch]
  int v25; // [sp+24h] [bp-8h]

  n = a5 - 8;
  if ( ((a5 - 8) & 7) != 0 || (unsigned int)(a5 - 24) > 0x7FFFFFF0 )
    return 0;
  v9 = a4[1];
  v22 = *a4;
  v23 = v9;
  v18 = 6;
  memmove(dest, a4 + 2, n);
  v10 = 6 * (n >> 3);
  v19 = ~((unsigned int)(a5 - 9) >> 3);
  v20 = &dest[a5 - 16];
  do
  {
    if ( a5 != 8 )
    {
      v11 = v10;
      v12 = v20;
      do
      {
        HIBYTE(v23) ^= v11;
        if ( v11 > 0xFF )
        {
          BYTE2(v23) ^= BYTE1(v11);
          BYTE1(v23) ^= BYTE2(v11);
          LOBYTE(v23) = v23 ^ HIBYTE(v11);
        }
        v13 = *(_DWORD *)v12;
        --v11;
        v14 = *((_DWORD *)v12 + 1);
        v12 -= 8;
        v24 = v13;
        v25 = v14;
        a6(&v22, &v22, a1);
        v15 = v25;
        *((_DWORD *)v12 + 2) = v24;
        *((_DWORD *)v12 + 3) = v15;
      }
      while ( v11 != v19 + v10 );
      v10 += v19;
    }
    --v18;
  }
  while ( v18 );
  v16 = v23;
  *a2 = v22;
  a2[1] = v16;
  return a5 - 8;
}
