int __fastcall sub_17C28(char a1, _BYTE *a2, _BYTE *a3)
{
  int v6; // r7
  int v7; // r3
  int v8; // r0
  int v9; // lr
  int v10; // t1

  v6 = dword_A05EC;
  if ( !dword_A05EC )
  {
    if ( sub_1782C() )
      return -1;
    sub_1774C();
    v6 = dword_A05EC;
  }
  v7 = v6;
  v8 = dword_A0D68;
  v9 = dword_A0D68 + 64;
  do
  {
    v10 = *(_DWORD *)(v8 + 4);
    v8 += 4;
    if ( v10 == 1 )
    {
      *(_BYTE *)(*(_DWORD *)v7 + 30) = a1;
      *(_BYTE *)(*(_DWORD *)v7 + 31) = *a2;
      *(_BYTE *)(*(_DWORD *)v7 + 32) = a2[1];
      *(_BYTE *)(*(_DWORD *)v7 + 33) = *a3;
      *(_BYTE *)(*(_DWORD *)v7 + 34) = a3[1];
    }
    v7 += 4;
  }
  while ( v8 != v9 );
  *(_BYTE *)(v6 + 96) = 1;
  return 0;
}
