int __fastcall sub_3D5CC(_BYTE *a1, char *s)
{
  unsigned int v3; // r4
  signed int v5; // r0
  char *v6; // r0
  char *v7; // r1
  int v8; // t1
  _DWORD *v9; // lr
  int v10; // r12
  _DWORD *v11; // r6
  int v12; // r3
  unsigned int v13; // t1
  __int64 v14; // r2
  int result; // r0
  unsigned int v16; // r3
  unsigned int *v17; // r2
  unsigned int *v18; // r1
  unsigned int *v19; // r8
  unsigned int v20; // t1
  unsigned int v21[5]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v22[2]; // [sp+1Ch] [bp-8h] BYREF

  v3 = 0;
  memset(v21, 0, sizeof(v21));
  v22[0] = 0;
  v5 = strlen(s);
  if ( v5 <= 0 )
  {
    v16 = 0;
    result = 0;
  }
  else
  {
    v6 = &s[v5];
    v7 = s;
    while ( 1 )
    {
      v8 = (unsigned __int8)*v7++;
      v9 = v22;
      v10 = 6;
      v11 = v22;
      v12 = *(_DWORD *)&aTqFreezethaw[4 * v8 + 1120];
      while ( 1 )
      {
        v14 = 58LL * v3 + (unsigned int)v12;
        --v10;
        v12 = BYTE4(v14) & 0x3F;
        *v9 = v14;
        if ( v10 == -1 )
          break;
        v13 = *--v11;
        v3 = v13;
        --v9;
      }
      if ( v7 == v6 )
        break;
      v3 = v22[0];
    }
    result = 0;
    v16 = bswap32(v21[0]);
  }
  v17 = (unsigned int *)(a1 + 1);
  v18 = v21;
  *a1 = 0;
  v19 = (unsigned int *)(a1 + 25);
  while ( 1 )
  {
    *v17++ = v16;
    if ( v17 == v19 )
      break;
    v20 = v18[1];
    ++v18;
    v16 = bswap32(v20);
  }
  return result;
}
