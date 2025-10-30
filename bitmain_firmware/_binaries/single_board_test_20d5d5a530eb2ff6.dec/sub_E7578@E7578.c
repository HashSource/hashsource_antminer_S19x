int __fastcall sub_E7578(int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v4; // r10
  unsigned int v5; // r5
  unsigned int v6; // r6
  unsigned int v7; // r8
  unsigned int v8; // r9
  int v9; // r11
  _DWORD *v10; // r6
  int v11; // r0
  __int64 v12; // r8
  unsigned int v14; // r3
  unsigned __int8 *v15; // [sp+0h] [bp-2Ch]
  int v18; // [sp+10h] [bp-1Ch]
  int v19; // [sp+14h] [bp-18h]
  int v20; // [sp+1Ch] [bp-10h]

  v4 = *(_DWORD *)(a1 + 360);
  v5 = *(__int64 *)(a1 + 48) >> 29;
  v6 = 8 * *(_DWORD *)(a1 + 48);
  v7 = *(__int64 *)(a1 + 56) >> 29;
  v8 = 8 * *(_DWORD *)(a1 + 56);
  if ( v4 )
  {
    v9 = a1 + 376;
    memset((void *)(a1 + 376 + v4), 0, ((v4 + 15) & 0xFFFFFFF0) - v4);
    v14 = (v4 + 15) & 0xFFFFFFF0;
    v15 = (unsigned __int8 *)(a1 + 64);
    if ( v14 == 48 )
    {
      v4 = 0;
      v18 = a1 + 96;
      sub_E50B4((_BYTE *)(a1 + 64), a1 + 96, v9, 48);
      v19 = 16;
    }
    else
    {
      v18 = a1 + 96;
      v19 = v14 + 16;
      v4 = (v4 + 15) & 0xFFFFFFF0;
    }
  }
  else
  {
    v9 = a1 + 376;
    v15 = (unsigned __int8 *)(a1 + 64);
    v18 = a1 + 96;
    if ( *(_DWORD *)(a1 + 364) )
      sub_E4ECC((_BYTE *)(a1 + 64), a1 + 96);
    v19 = 16;
  }
  *(_DWORD *)(a1 + 48) = v6;
  *(_DWORD *)(a1 + 52) = v5;
  *(_DWORD *)(a1 + 56) = v8;
  *(_DWORD *)(a1 + 60) = v7;
  v20 = (BYTE1(v6) << 16) | (v6 << 24) | HIBYTE(v6) | (BYTE2(v6) << 8);
  v10 = (_DWORD *)(v9 + v4);
  *(_DWORD *)(v9 + v4) = (BYTE1(v5) << 16) | (v5 << 24) | HIBYTE(v5) | (BYTE2(v5) << 8);
  v10[1] = v20;
  v10[2] = (BYTE1(v7) << 16) | (v7 << 24) | HIBYTE(v7) | (BYTE2(v7) << 8);
  v10[3] = (BYTE1(v8) << 16) | (v8 << 24) | HIBYTE(v8) | (BYTE2(v8) << 8);
  sub_E50B4(v15, v18, v9, v19);
  v11 = (int)a2;
  if ( a2 )
    v11 = 1;
  if ( a3 > 0x10 )
    v11 = 0;
  v12 = *(_QWORD *)(a1 + 72) ^ *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 64) ^= *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 72) = v12;
  if ( v11 )
    return sub_BC33C(v15, a2, a3);
  else
    return -1;
}
