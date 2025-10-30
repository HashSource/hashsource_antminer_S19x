int __fastcall sub_32C204(int a1, int a2, int a3, int *a4)
{
  unsigned __int64 v4; // r8
  char v6; // r0
  int v8; // r1
  unsigned int v10; // r0
  int v11; // r6
  bool v12; // cc
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r3
  bool v18; // cc
  int v20; // [sp+14h] [bp-4h] BYREF

  v6 = *(_BYTE *)(a2 + 8);
  v20 = 0;
  if ( (v6 & 0x30) != 0 || (*(_BYTE *)(a3 + 8) & 0x30) != 0 )
  {
    sub_32AC0C(a1, a2, a3, a4, &v20);
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 || *(_DWORD *)(a3 + 4) )
    goto LABEL_7;
  v10 = sub_327B04(a3);
  v11 = v10;
  v12 = v10 > 0x80000000;
  if ( v10 != 0x80000000 )
    v12 = v10 + 2147483646 > 1;
  if ( !v12 || (int)abs32(v10) > *a4 )
  {
LABEL_7:
    v8 = 128;
    v20 = 128;
    goto LABEL_8;
  }
  sub_32AB6C(a1, a2);
  if ( v11 && (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
  {
    if ( v11 > 0 )
    {
      v14 = *a4;
      if ( *a4 != v11 )
      {
        v15 = *(_DWORD *)a1;
        v16 = v11 + *(_DWORD *)a1;
        if ( v14 < v16 )
        {
          sub_327D34((int *)a1, v16 - v14, v14);
          v15 = *(_DWORD *)a1;
        }
        if ( v15 > 1 || *(_WORD *)(a1 + 10) )
          *(_DWORD *)a1 = sub_32845C((char *)(a1 + 10), v15, v11);
        goto LABEL_4;
      }
LABEL_24:
      *(_WORD *)(a1 + 10) = 0;
      *(_DWORD *)a1 = 1;
      goto LABEL_4;
    }
    v17 = *(_DWORD *)a1;
    if ( -v11 >= *(_DWORD *)a1 )
      goto LABEL_24;
    v18 = v17 <= 49;
    if ( v17 <= 49 )
    {
      v13 = 35608;
    }
    else
    {
      LODWORD(v4) = -1431655765;
      v17 += 2;
    }
    if ( v18 )
    {
      HIWORD(v13) = 67;
      v13 = *(unsigned __int8 *)(v13 + v17 + 20);
    }
    else
    {
      v4 = (unsigned int)v17 * (unsigned __int64)(unsigned int)v4;
    }
    if ( !v18 )
      v13 = HIDWORD(v4) >> 1;
    sub_328630((_WORD *)(a1 + 10), v13, -v11);
    *(_DWORD *)a1 += v11;
  }
LABEL_4:
  v8 = v20;
  if ( !v20 )
    return a1;
LABEL_8:
  sub_327DE4(a1, v8, (int)a4);
  return a1;
}
