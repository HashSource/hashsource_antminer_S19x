unsigned int __fastcall sub_13F140(char *a1, int a2, int a3, unsigned int *a4, int a5, int *a6)
{
  unsigned int v8; // r3
  unsigned int result; // r0
  int v10; // r4
  int v11; // r6
  int v12; // r5
  int v13; // r11
  char v14; // t1
  _BYTE *v15; // r2
  __int16 v16; // r3^2
  unsigned int v17; // r2
  int v18; // [sp+0h] [bp-14h]
  unsigned int v19; // [sp+4h] [bp-10h]
  int v20; // [sp+8h] [bp-Ch] BYREF
  unsigned int v21; // [sp+Ch] [bp-8h]
  _BYTE v22[4]; // [sp+10h] [bp-4h] BYREF

  v8 = *(_DWORD *)(a5 + 4);
  v20 = *(_DWORD *)a5;
  v18 = v20;
  v21 = v8;
  result = HIWORD(v8);
  v19 = v8;
  v10 = *a6;
  if ( a3 )
  {
    v11 = a2 - 1;
    v12 = a3;
    v13 = 0;
    do
    {
      if ( !v10 )
      {
        ++v13;
        sub_13C7E0(&v20, a4, 1);
        v18 = v20;
        result = HIBYTE(v21);
        v19 = v21;
      }
      v14 = *a1++;
      v15 = &v22[v10];
      --v12;
      v10 = ((_BYTE)v10 + 1) & 7;
      *(_BYTE *)++v11 = *(v15 - 16) ^ v14;
    }
    while ( v12 );
    if ( v13 )
    {
      v16 = HIWORD(v20);
      v17 = v21;
      *(_WORD *)a5 = v20;
      result = HIWORD(v17);
      *(_WORD *)(a5 + 2) = v16;
      *(_DWORD *)(a5 + 4) = v17;
    }
  }
  *a6 = v10;
  return result;
}
