int __fastcall sub_3AE7C(struct sockaddr *a1, int a2, int a3, int a4)
{
  unsigned int v8; // r4
  int *v9; // r10
  unsigned int v10; // r4
  int v11; // t1

  v8 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
  if ( v8 )
  {
    v9 = (int *)(a3 + 8);
    v10 = v8 - 1;
    do
    {
      --v10;
      v11 = *v9++;
      sub_621BC(v11, a4);
    }
    while ( v10 != -1 );
  }
  return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
}
