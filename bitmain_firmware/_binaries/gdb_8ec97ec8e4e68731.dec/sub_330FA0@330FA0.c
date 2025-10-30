int __fastcall sub_330FA0(int a1, int a2, int a3, int *a4)
{
  int *v4; // lr
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  char v13; // r7
  int v14; // r1
  int v15; // r2
  int v16; // r1
  int v18; // r0
  int v19; // r3
  char v20; // r2
  signed __int64 v21; // r2
  int v22; // r12
  bool v23; // cc
  _WORD *v24; // r1
  int v25; // r3
  _WORD *v26; // r2
  int v27; // r1
  char v28; // r6
  int v29; // r12
  _WORD *v30; // r1
  int v31; // r3
  _WORD *v32; // r2
  int v33; // r3
  unsigned __int8 v34; // [sp+0h] [bp-3Ch]
  int v35; // [sp+Ch] [bp-30h] BYREF
  _DWORD v36[2]; // [sp+10h] [bp-2Ch] BYREF
  char v37; // [sp+18h] [bp-24h]
  __int16 v38; // [sp+1Ah] [bp-22h]
  _DWORD v39[3]; // [sp+1Ch] [bp-20h] BYREF
  int v40; // [sp+28h] [bp-14h]
  int v41; // [sp+2Ch] [bp-10h]
  int v42; // [sp+30h] [bp-Ch]
  int v43; // [sp+34h] [bp-8h]

  v4 = a4;
  v9 = *a4;
  v10 = a4[1];
  v11 = a4[2];
  v12 = a4[3];
  v4 += 4;
  v13 = *(_BYTE *)(a2 + 8);
  v35 = 0;
  v39[0] = v9;
  v39[1] = v10;
  v39[2] = v11;
  v40 = v12;
  v14 = v4[1];
  v15 = v4[2];
  v41 = *v4;
  v42 = v14;
  v43 = v15;
  if ( (v13 & 0x30) != 0 || (*(_BYTE *)(a3 + 8) & 0x30) != 0 )
  {
    sub_32AC0C(a1, a2, a3, a4, &v35);
  }
  else
  {
    v18 = sub_328EAC(a2, a3, 0);
    if ( v18 == 0x80000000 )
    {
      v16 = v35 | 0x10;
      v35 |= 0x10u;
      goto LABEL_15;
    }
    if ( v18 )
    {
      v19 = *(_BYTE *)(a2 + 8) & 0xC0;
      if ( v18 < 0 )
      {
        if ( v19 == 192 )
        {
          v29 = *a4;
          v23 = *a4 <= 3;
          *(_DWORD *)a1 = *a4;
          v30 = (_WORD *)(a1 + 10);
          if ( v23 )
          {
            v31 = v29;
          }
          else
          {
            v32 = (_WORD *)(a1 + 10);
            v31 = v29;
            do
            {
              v31 -= 3;
              *v32++ = 999;
              v30 = v32;
            }
            while ( v31 > 3 );
          }
          *v30 = dword_438D00[v31] - 1;
          *(_BYTE *)(a1 + 8) = 0;
          v33 = a4[1];
          *(_BYTE *)(a1 + 8) = 0x80;
          *(_DWORD *)(a1 + 4) = v33 - v29 + 1;
          return a1;
        }
        v40 = 0;
        v20 = 0;
      }
      else
      {
        if ( v19 == 64 )
        {
          v22 = *a4;
          v23 = *a4 <= 3;
          *(_DWORD *)a1 = *a4;
          v24 = (_WORD *)(a1 + 10);
          if ( v23 )
          {
            v25 = v22;
          }
          else
          {
            v26 = (_WORD *)(a1 + 10);
            v25 = v22;
            do
            {
              v25 -= 3;
              *v26++ = 999;
              v24 = v26;
            }
            while ( v25 > 3 );
          }
          *v24 = dword_438D00[v25] - 1;
          *(_BYTE *)(a1 + 8) = 0;
          *(_DWORD *)(a1 + 4) = a4[1] - v22 + 1;
          return a1;
        }
        v20 = 0x80;
        v40 = 6;
      }
      v34 = v20;
      HIDWORD(v21) = v39;
      v36[1] = -1000000000;
      LODWORD(v21) = v36;
      v37 = 0;
      v36[0] = 1;
      v38 = 1;
      sub_32C3B0(a1, a2, v21, v34, &v35);
      if ( sub_330EC4((int *)a1, (int)a4) )
        return a1;
    }
    else
    {
      v27 = a2;
      v28 = *(_BYTE *)(a3 + 8) & 0x80;
      sub_32AB6C(a1, v27);
      *(_BYTE *)(a1 + 8) = v28 | *(_BYTE *)(a1 + 8) & 0x7F;
    }
  }
  v16 = v35;
  if ( !v35 )
    return a1;
LABEL_15:
  sub_327DE4(a1, v16, (int)a4);
  return a1;
}
