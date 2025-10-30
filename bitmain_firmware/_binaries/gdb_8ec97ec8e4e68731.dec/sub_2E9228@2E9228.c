int __fastcall sub_2E9228(int a1, int a2, int a3, int *a4, int a5)
{
  unsigned int v5; // r9
  int v7; // r1
  unsigned int v8; // r6
  char v9; // r5
  int v10; // r3
  unsigned int v11; // r4
  int v12; // r11
  int v13; // r0
  _BOOL4 v14; // r2
  unsigned __int8 *v15; // r11
  char v16; // r8
  int v17; // r10
  int v18; // r5
  int v19; // r5
  int v20; // r8
  int v21; // r0
  int v22; // r11
  unsigned int v23; // r5
  int v24; // r0
  _BYTE *v25; // r9
  int v26; // r6
  unsigned int v28; // r0
  unsigned int v29; // r0
  bool v30; // zf
  int v33; // [sp+10h] [bp-14h]
  char v34; // [sp+14h] [bp-10h]

  v5 = a4[2];
  v7 = (v5 >> 6) & 0x3F;
  v8 = (v5 >> 18) & 0xF;
  v9 = v5 & 0x3F;
  if ( (v5 & 0x8000000) != 0 )
    ++v9;
  v33 = (2 * ~(-1 << (v7 - 1))) | 1;
  if ( (v5 & 0x8000000) != 0 )
    LOBYTE(v10) = v9 - v7;
  else
    v10 = (v5 >> 6) & 0x3F;
  v11 = (v5 >> 22) & 0xF;
  if ( (v5 & 0x8000000) == 0 )
    LOBYTE(v10) = 8 * v8 - v10 - v9;
  v34 = v10;
  v12 = *a4;
  v13 = sub_2A6904(a1);
  v14 = v11 - 1 > 3 || v8 < v11;
  v15 = (unsigned __int8 *)(a3 + v13 * v12);
  if ( v14 || (unsigned __int64)sub_347674((v5 >> 18) & 0xF, (v5 >> 22) & 0xF) >> 32 )
    goto LABEL_12;
  v30 = v15 == 0;
  if ( v15 )
    v30 = a1 == 0;
  if ( v30 )
LABEL_12:
    sub_2A6BBC("elflink.c", 8435);
  if ( v11 == 4 )
  {
    if ( v8 == 4 )
    {
      v16 = 0;
      goto LABEL_17;
    }
    v16 = 0;
    sub_2A6BBC("elflink.c", 8439);
  }
  else
  {
    v16 = 8 * v11;
  }
  if ( !v8 )
  {
    v19 = 0;
    goto LABEL_25;
  }
LABEL_17:
  v17 = (v5 >> 18) & 0xF;
  v18 = 0;
  do
  {
    switch ( v11 )
    {
      case 2u:
        v18 = (v18 << v16) | (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)(a1 + 4) + 52))(v15);
        break;
      case 4u:
        v18 = (v18 << v16) | (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)(a1 + 4) + 40))(v15);
        break;
      case 1u:
        v18 = *v15 | (v18 << v16);
        break;
      default:
        sub_2A6BF0((int)"elflink.c", 8468, (int)"get_value");
    }
    v17 -= v11;
    v15 += v11;
  }
  while ( v17 );
  v19 = v18 & ~(v33 << v34);
LABEL_25:
  if ( ((v5 >> 29) & 1) != 0 )
  {
    v20 = 2;
  }
  else
  {
    if ( (v5 & 0x10000000) != 0 )
      v21 = 2;
    else
      v21 = 3;
    v20 = sub_3008DC(v21, (v5 >> 6) & 0x3F);
  }
  v22 = *a4;
  v23 = v19 | ((v33 & a5) << v34);
  v24 = sub_2A6904(a1);
  v25 = (_BYTE *)(a3 + v8 - v11 + v24 * v22);
  if ( v8 )
  {
    v26 = -(a3 + v24 * v22 - v11);
    do
    {
      switch ( v11 )
      {
        case 2u:
          v28 = v23;
          v23 >>= 16;
          (*(void (__fastcall **)(unsigned int, _BYTE *))(*(_DWORD *)(a1 + 4) + 60))(v28, v25);
          break;
        case 4u:
          v29 = v23;
          v23 = 0;
          (*(void (__fastcall **)(unsigned int, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(v29, v25);
          break;
        case 1u:
          *v25 = v23;
          v23 >>= 8;
          break;
        default:
          sub_2A6BF0((int)"elflink.c", 8414, (int)"put_value");
      }
      v25 -= v11;
    }
    while ( &v25[v26] );
  }
  return v20;
}
