int __fastcall sub_3B048(int *a1, int a2)
{
  int *v4; // r3
  char *v5; // r3
  int v6; // r3
  int v7; // r1
  int v8; // r3
  _BYTE *v9; // r3
  int v10; // r1
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v15; // [sp+4h] [bp-10Ch]
  int v16; // [sp+8h] [bp-108h] BYREF
  int v17; // [sp+Ch] [bp-104h] BYREF
  _BYTE v18[124]; // [sp+10h] [bp-100h] BYREF
  char v19; // [sp+8Ch] [bp-84h] BYREF
  _BYTE v20[124]; // [sp+90h] [bp-80h] BYREF
  _BYTE var4[36]; // [sp+10Ch] [bp-4h] BYREF

  while ( 1 )
  {
    v4 = &v17;
    v16 = a2;
    v17 = 0;
    do
    {
      v4[1] = 0;
      ++v4;
    }
    while ( v4 != (int *)&v19 );
    v5 = &v19;
    do
    {
      *((_DWORD *)v5 + 1) = 0;
      v5 += 4;
    }
    while ( v5 != var4 );
    v6 = *a1 + 31;
    v7 = *a1 & 0x1F;
    if ( *a1 >= 0 )
      v6 = *a1;
    v8 = v6 >> 5;
    if ( *a1 <= 0 )
      v7 = -(-*a1 & 0x1F);
    v9 = &var4[4 * v8 + 4];
    v10 = 1 << v7;
    v11 = *((_DWORD *)v9 - 64) | v10;
    v12 = *((_DWORD *)v9 - 32) | v10;
    *((_DWORD *)v9 - 64) = v11;
    *((_DWORD *)v9 - 32) = v12;
    sub_258BD4();
    v13 = ((int (__fastcall *)(int, _BYTE *, _DWORD, _BYTE *, int *, int))sub_154724)(*a1 + 1, v18, 0, v20, &v16, v15);
    if ( v13 > 0 )
      return 0;
    if ( !v13 )
      break;
    if ( *_errno_location() != 4 )
      return -1;
  }
  return -2;
}
