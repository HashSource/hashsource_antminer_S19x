int __fastcall sub_1CDAC(int a1, int *a2, int a3, int a4)
{
  unsigned int v5; // r4
  int v8; // r9
  int v9; // r3
  bool v10; // zf
  int v12; // r1
  int v13; // r4
  int v14; // r3
  bool v15; // zf
  unsigned __int64 v16; // r2
  int v18; // r1
  int v19; // r4
  __int64 v20; // r2
  int v21; // r8
  int v22; // r2
  int v23; // r3
  unsigned int v24; // r4
  int v25; // r4
  int v26; // r4
  bool v27; // zf
  int v28; // r3
  bool v29; // zf
  _DWORD v30[2]; // [sp+0h] [bp-14h] BYREF
  _DWORD v31[3]; // [sp+8h] [bp-Ch] BYREF

  v5 = *(_DWORD *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 4);
  v30[1] = 0;
  *(_DWORD *)(a1 + 24) = (unsigned __int8)v5 >> 4;
  v30[0] = 0;
  v9 = (v5 >> 21) & 0xB;
  v31[0] = 0;
  *(_DWORD *)(a1 + 20) = (v5 >> 21) & 0xF;
  v31[1] = 0;
  if ( v9 != 10 )
  {
    if ( v9 == 8 )
    {
      v18 = v5 & 0xF;
      v19 = HIWORD(v5) & 0xF;
      ((void (__fastcall *)(int, int, _DWORD *))loc_1DF9FC)(v8, v18, v30);
      ((void (__fastcall *)(int, int, _DWORD *))loc_1DF9FC)(v8, v19, v31);
      HIDWORD(v20) = v30[0];
      if ( v19 == 15 )
        HIDWORD(v20) = v30[0] + 8;
      if ( *(_DWORD *)(a1 + 20) == 12 )
        HIDWORD(v20) += v31[0];
      else
        HIDWORD(v20) = v31[0] - HIDWORD(v20);
      if ( a4 == 1 )
      {
        LODWORD(v20) = 2;
        *(_QWORD *)a3 = v20;
        *(_DWORD *)(a1 + 28) = 1;
      }
      else
      {
        *(_DWORD *)(a3 + 4) = HIDWORD(v20);
        *(_DWORD *)(a3 + 12) = HIDWORD(v20) + 4;
        *(_DWORD *)a3 = 4;
        *(_DWORD *)(a3 + 8) = 4;
        *(_DWORD *)(a1 + 28) = 2;
      }
      return 0;
    }
    v10 = v9 == 11;
    if ( v9 != 11 )
      v10 = v9 == 2;
    if ( v10 )
    {
      v12 = HIWORD(v5) & 0xF;
      v13 = (v5 >> 4) & 0xF0 | v5 & 0xF;
      ((void (__fastcall *)(int, int, _DWORD *))loc_1DF9FC)(v8, v12, v30);
      v14 = *(_DWORD *)(a1 + 20);
      v15 = v14 == 6;
      if ( v14 != 6 )
        v15 = v14 == 15;
      if ( v15 )
        HIDWORD(v16) = v13 + v30[0];
      else
        HIDWORD(v16) = v30[0] - v13;
    }
    else
    {
      v27 = v9 == 0;
      if ( v9 )
        v27 = v9 == 9;
      if ( !v27 )
        return 0;
      ((void (__fastcall *)(int, unsigned int, _DWORD *))loc_1DF9FC)(v8, v5 & 0xF, v30);
      ((void (__fastcall *)(int, unsigned int, _DWORD *))loc_1DF9FC)(v8, HIWORD(v5) & 0xF, v31);
      v28 = *(_DWORD *)(a1 + 20);
      v29 = v28 == 4;
      if ( v28 != 4 )
        v29 = v28 == 13;
      if ( v29 )
        v16 = __PAIR64__(v30[0], v31[0]);
      else
        v16 = __PAIR64__(v31[0], v30[0]);
      if ( v29 )
        HIDWORD(v16) += v16;
      else
        HIDWORD(v16) -= v16;
    }
    if ( a4 == 1 )
    {
      LODWORD(v16) = 2;
      *(_QWORD *)a3 = v16;
      *(_DWORD *)(a1 + 28) = 1;
    }
    else
    {
      *(_DWORD *)(a3 + 4) = HIDWORD(v16);
      *(_DWORD *)(a3 + 12) = HIDWORD(v16) + 4;
      *(_DWORD *)a3 = 4;
      *(_DWORD *)(a3 + 8) = 4;
      *(_DWORD *)(a1 + 28) = 2;
    }
    *a2 = *(_WORD *)(a1 + 14) & 0xF;
    *(_DWORD *)(a1 + 32) = 1;
    return 0;
  }
  v21 = HIWORD(v5) & 0xF;
  ((void (__fastcall *)(int, int, _DWORD *))loc_1DF9FC)(v8, v21, v30);
  v22 = v5 & 0xF;
  v23 = v30[0];
  v24 = v5 >> 8;
  if ( v21 == 15 )
    v23 = v30[0] + 8;
  v25 = (unsigned __int8)(16 * v24) | v22;
  if ( *(_DWORD *)(a1 + 20) == 14 )
    v26 = v25 + v23;
  else
    v26 = v23 - v25;
  if ( a4 == 1 )
  {
    *(_DWORD *)a3 = 2;
    *(_DWORD *)(a3 + 4) = v26;
    *(_DWORD *)(a1 + 28) = 1;
  }
  else
  {
    *(_DWORD *)(a3 + 4) = v26;
    *(_DWORD *)(a3 + 12) = v26 + 4;
    *(_DWORD *)a3 = 4;
    *(_DWORD *)(a3 + 8) = 4;
    *(_DWORD *)(a1 + 28) = 2;
  }
  return 0;
}
