int __fastcall sub_24DE98(int a1)
{
  _BYTE *v2; // r3
  char *v3; // r6
  void *v4; // r0
  int v5; // r5
  int v6; // r3
  int v8; // r6
  int v9; // r7
  char *v10; // r0
  int v11; // r2
  char *v12; // r9
  char *v13; // r3
  bool v14; // zf
  void **v15; // r5
  void **v16; // r8
  void *v17; // r6
  void *v18; // t1

  v2 = (_BYTE *)a1;
  do
    *v2++ = 0;
  while ( (_BYTE *)(a1 + 32) != v2 );
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  v3 = (char *)sub_9836C(0x600u);
  v4 = *(void **)(a1 + 32);
  if ( v4 )
    sub_339E64(v4);
  v5 = *(_DWORD *)(a1 + 44);
  v6 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 32) = v3;
  *(_DWORD *)(a1 + 36) = v3;
  *(_DWORD *)(a1 + 40) = v3 + 1536;
  if ( (unsigned int)(v6 - v5) >= 0x200 )
    return a1;
  v8 = *(_DWORD *)(a1 + 48);
  v9 = v8 - v5;
  v10 = (char *)sub_9836C(0x200u);
  v12 = v10;
  if ( v5 != v8 )
  {
    v13 = v10;
    do
    {
      v14 = v13 == 0;
      v5 += 4;
      if ( v13 )
        v11 = *(_DWORD *)(v5 - 4);
      v13 += 4;
      if ( !v14 )
      {
        *(_DWORD *)(v5 - 4) = 0;
        *((_DWORD *)v13 - 1) = v11;
      }
    }
    while ( v8 != v5 );
  }
  v15 = *(void ***)(a1 + 44);
  v16 = *(void ***)(a1 + 48);
  if ( v15 != v16 )
  {
    do
    {
      v18 = *v15++;
      v17 = v18;
      if ( v18 )
      {
        sub_C0960((int)v17);
        sub_33AC04(v17);
      }
    }
    while ( v16 != v15 );
    v16 = *(void ***)(a1 + 44);
  }
  if ( v16 )
    sub_339E64(v16);
  *(_DWORD *)(a1 + 48) = &v12[v9];
  *(_DWORD *)(a1 + 44) = v12;
  *(_DWORD *)(a1 + 52) = v12 + 512;
  return a1;
}
