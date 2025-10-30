int __fastcall sub_2FDC0(int a1, int a2, int *a3, _DWORD *a4)
{
  int v7; // r7
  int v8; // r1
  int *v9; // r3
  unsigned int v10; // r0
  size_t n; // r8
  _BYTE *v12; // r6
  _BYTE *v13; // r8
  int v14; // r9
  int v15; // r10
  int v16; // r0
  int v17; // r3
  int v18; // r0
  int v19; // r5
  int v20; // r4
  int v21; // r0
  int v22; // r3
  _DWORD *v23; // r2
  bool v24; // zf
  _BYTE dest[4]; // [sp+10h] [bp-44h] BYREF
  int v26; // [sp+14h] [bp-40h]
  int v27; // [sp+18h] [bp-3Ch]
  _BYTE *v28; // [sp+1Ch] [bp-38h]
  _DWORD *v29; // [sp+20h] [bp-34h]
  int *v30; // [sp+24h] [bp-30h]
  _BYTE v31[12]; // [sp+28h] [bp-2Ch] BYREF

  if ( !a2 )
    return 0;
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4) != 5 )
    return 0;
  v29 = a4;
  v30 = a3;
  v7 = sub_2A789C(a2);
  if ( v7 == -1 )
    return 0;
  v8 = sub_2AD7AC(a2, ".dynamic");
  if ( !v8 )
    return 0;
  v9 = *(int **)(dword_487D2C + 40);
  v10 = *(_DWORD *)(dword_487D2C + 44);
  if ( v10 > (unsigned int)v9 )
  {
    if ( v8 == v9[2] )
    {
LABEL_24:
      v27 = *v9;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v9 += 4;
      if ( v10 <= (unsigned int)v9 )
        break;
      if ( v9[2] == v8 )
        goto LABEL_24;
    }
  }
  v27 = *(_DWORD *)(v8 + 28);
LABEL_12:
  n = *(_DWORD *)(v8 + 36);
  v12 = dest;
  v28 = dest;
  if ( sub_2ADEDC(a2, v8, dest, 0, 0, 0, n) )
  {
    v13 = &dest[n];
    v14 = v7 == 32 ? 8 : 16;
    if ( dest < v13 )
    {
      do
      {
        v17 = *(_DWORD *)(a2 + 4);
        if ( v7 == 32 )
        {
          v15 = (*(int (__fastcall **)(_BYTE *))(v17 + 76))(v12);
          v16 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)(a2 + 4) + 76))(v12 + 4);
        }
        else
        {
          v15 = (*(int (__fastcall **)(_BYTE *))(v17 + 64))(v12);
          v16 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)(a2 + 4) + 64))(v12 + 8);
        }
        if ( !v15 )
          break;
        if ( v15 == a1 )
        {
          v26 = v16;
          if ( v30 )
          {
            v18 = sub_16F654();
            v19 = *(_DWORD *)(sub_1780B4(v18) + 152);
            v20 = v12 - v28 + v27;
            v21 = sub_230020(v7 / 8 + v20, v31, v7 / 8);
            v22 = v26;
            if ( !v21 )
              v22 = sub_15AEA8(v31, v19);
            v23 = v29;
            v24 = v29 == 0;
            *v30 = v22;
            if ( !v24 )
              *v23 = v20;
          }
          return 1;
        }
        v12 += v14;
      }
      while ( v13 > v12 );
    }
  }
  return 0;
}
