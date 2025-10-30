int __fastcall sub_E2428(__int64 a1, unsigned int a2)
{
  int v2; // r4
  unsigned int v3; // r5
  char *v4; // r9
  void (__fastcall *v5)(int, int, _DWORD, unsigned int); // r8
  int v6; // r7
  char v7; // r2
  char v8; // r2
  unsigned int v9; // r3
  int v10; // lr
  int v11; // r6
  char v12; // r1
  char v13; // r0
  int v14; // r2
  _BOOL4 v15; // r6
  char v16; // t1

  if ( a2 )
  {
    v2 = a1;
    v3 = a2;
    v4 = (char *)HIDWORD(a1);
    v5 = *(void (__fastcall **)(int, int, _DWORD, unsigned int))(a1 + 40);
    *(_BYTE *)a1 |= 0x40u;
    v6 = a1 + 16;
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v5)(a1, a1 + 16, *(_DWORD *)(a1 + 44));
    ++*(_QWORD *)(v2 + 32);
    v7 = *(_BYTE *)(v2 + 16);
    if ( v3 < 0xFF00 )
    {
      v9 = 2;
      v8 = v7 ^ BYTE1(v3);
      v12 = *(_BYTE *)(v2 + 17) ^ v3;
    }
    else
    {
      v8 = ~v7;
      v9 = 6;
      v10 = *(unsigned __int8 *)(v2 + 19) ^ HIWORD(v3);
      v11 = *(unsigned __int8 *)(v2 + 20) ^ (v3 >> 8);
      v12 = *(_BYTE *)(v2 + 17) ^ 0xFE;
      v13 = *(_BYTE *)(v2 + 21) ^ v3;
      *(_BYTE *)(v2 + 18) ^= HIBYTE(v3);
      *(_BYTE *)(v2 + 19) = v10;
      *(_BYTE *)(v2 + 20) = v11;
      *(_BYTE *)(v2 + 21) = v13;
    }
    *(_BYTE *)(v2 + 17) = v12;
    *(_BYTE *)(v2 + 16) = v8;
    do
    {
      while ( 1 )
      {
        v14 = v2 + v9;
        v15 = v9 <= 0xF;
        if ( !v3 )
          v15 = 0;
        ++v9;
        if ( !v15 )
          break;
        --v3;
        v16 = *v4++;
        *(_BYTE *)(v14 + 16) ^= v16;
      }
      v5(v6, v6, *(_DWORD *)(v2 + 44), v9);
      v9 = 0;
      a1 = *(_QWORD *)(v2 + 32) + 1LL;
      *(_QWORD *)(v2 + 32) = a1;
    }
    while ( v3 );
  }
  return a1;
}
