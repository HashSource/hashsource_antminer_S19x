unsigned __int8 *__fastcall sub_13F03C(
        unsigned __int8 *result,
        int a2,
        int a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        int a7,
        int *a8)
{
  unsigned int v10; // lr
  unsigned int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r11
  unsigned int v14; // r10
  unsigned int v15; // r8
  unsigned int v16; // r9
  unsigned int v17; // r12
  int v18; // r4
  unsigned __int8 *v19; // r7
  int v20; // r6
  unsigned __int8 *v21; // t1
  _BYTE *v22; // r3
  int v23; // [sp+4h] [bp-20h]
  unsigned int v25; // [sp+10h] [bp-14h]
  unsigned int v26; // [sp+14h] [bp-10h]
  unsigned int v27; // [sp+18h] [bp-Ch] BYREF
  unsigned int v28; // [sp+1Ch] [bp-8h]
  _BYTE v29[4]; // [sp+20h] [bp-4h] BYREF

  v10 = *(_DWORD *)a7;
  v11 = *(_DWORD *)(a7 + 4);
  v27 = v10;
  v12 = v10 >> 8;
  v13 = HIWORD(v10);
  v14 = HIBYTE(v10);
  v15 = v11 >> 8;
  v16 = HIWORD(v11);
  v17 = HIBYTE(v11);
  v25 = v10;
  v28 = v11;
  v26 = v11;
  v18 = *a8;
  if ( a3 )
  {
    v19 = result;
    v20 = a2 - 1;
    v23 = 0;
    do
    {
      if ( !v18 )
      {
        sub_13E794((int *)&v27, a4, a5, a6);
        LOBYTE(v10) = v27;
        LOBYTE(v11) = v28;
        v25 = v27;
        v12 = v27 >> 8;
        v13 = HIWORD(v27);
        v14 = HIBYTE(v27);
        v15 = v28 >> 8;
        v16 = HIWORD(v28);
        v17 = HIBYTE(v28);
        ++v23;
        v26 = v28;
      }
      v21 = (unsigned __int8 *)*v19++;
      result = v21;
      v22 = &v29[v18];
      --a3;
      v18 = ((_BYTE)v18 + 1) & 7;
      *(_BYTE *)++v20 = *(v22 - 16) ^ (unsigned __int8)v21;
    }
    while ( a3 );
    if ( v23 )
    {
      *(_BYTE *)a7 = v10;
      *(_BYTE *)(a7 + 1) = v12;
      *(_BYTE *)(a7 + 2) = v13;
      *(_BYTE *)(a7 + 3) = v14;
      *(_BYTE *)(a7 + 4) = v11;
      *(_BYTE *)(a7 + 5) = v15;
      *(_BYTE *)(a7 + 6) = v16;
      *(_BYTE *)(a7 + 7) = v17;
    }
  }
  *a8 = v18;
  return result;
}
