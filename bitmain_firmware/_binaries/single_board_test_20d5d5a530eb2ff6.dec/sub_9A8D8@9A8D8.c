int __fastcall sub_9A8D8(_DWORD *a1, int a2)
{
  void *v5; // r5
  int v6; // r6
  void *v7; // r0
  int v8; // r3
  int v9; // r3
  int v10; // r2
  int v11; // r1
  int v12; // r0
  char v13; // r3
  __int16 v14; // r5
  int v15; // r2
  int v16; // r3
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r1
  void *v21; // r1
  int v22; // [sp+10h] [bp-20h] BYREF
  int v23; // [sp+14h] [bp-1Ch]

  if ( a1[30] )
    return 0;
  v5 = (void *)a1[29];
  v6 = CRYPTO_malloc(52, "ssl/statem/statem_dtls.c", 62);
  if ( !v6 )
  {
    sub_D0048(20, 623, 65, "ssl/statem/statem_dtls.c", 63);
    return 0;
  }
  v7 = v5;
  if ( v5 )
  {
    v7 = (void *)CRYPTO_malloc(v5, "ssl/statem/statem_dtls.c", 68);
    if ( !v7 )
    {
      sub_D0048(20, 623, 65, "ssl/statem/statem_dtls.c", 69);
      CRYPTO_free(v6, "ssl/statem/statem_dtls.c", 70);
      return 0;
    }
  }
  v8 = a1[27];
  *(_DWORD *)(v6 + 48) = 0;
  *(_DWORD *)(v6 + 44) = v7;
  memcpy(v7, *(const void **)(v8 + 4), a1[29]);
  v9 = a1[32];
  if ( a2 )
  {
    v10 = *(_DWORD *)(v9 + 292);
    if ( *a1 == 256 )
      v11 = 3;
    else
      v11 = 1;
    if ( v11 + v10 != a1[29] )
      return 0;
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 292);
    if ( v10 + 12 != a1[29] )
      return 0;
  }
  v12 = *(unsigned __int16 *)(v9 + 296);
  *(_DWORD *)(v6 + 4) = v10;
  *(_WORD *)(v6 + 8) = v12;
  v13 = *(_BYTE *)(v9 + 288);
  *(_DWORD *)(v6 + 12) = 0;
  *(_BYTE *)v6 = v13;
  v14 = *(_WORD *)(a1[974] + 2);
  v15 = a1[251];
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(a1[32] + 292);
  v16 = a1[256];
  *(_DWORD *)(v6 + 24) = v15;
  v17 = a1[249];
  *(_DWORD *)(v6 + 28) = v16;
  v18 = a1[285];
  *(_DWORD *)(v6 + 20) = a2;
  *(_DWORD *)(v6 + 32) = v17;
  *(_DWORD *)(v6 + 36) = v18;
  *(_WORD *)(v6 + 40) = v14;
  v22 = 0;
  v23 = 0;
  v19 = sub_9A8D0(v12, a2);
  v20 = *(_DWORD *)(v6 + 20);
  BYTE2(v23) = BYTE1(v19);
  HIBYTE(v23) = sub_9A8D0(*(unsigned __int16 *)(v6 + 8), v20);
  v21 = (void *)sub_A8668(&v22, v6);
  if ( v21 )
  {
    sub_A8708(*(_DWORD *)(a1[32] + 276), v21);
    return 1;
  }
  else
  {
    sub_9A264(v6);
    return 0;
  }
}
