char *__fastcall sub_B448(int a1)
{
  int v1; // r12
  char *result; // r0
  char v4; // lr
  char v5; // r1
  char v6; // r2
  char v7; // r3
  __int16 v8; // [sp+16h] [bp-16h] BYREF
  __int16 v9; // [sp+18h] [bp-14h] BYREF
  __int16 v10; // [sp+1Ah] [bp-12h] BYREF
  __int16 v11; // [sp+1Ch] [bp-10h] BYREF
  __int16 v12; // [sp+1Eh] [bp-Eh] BYREF
  char v13[4]; // [sp+20h] [bp-Ch] BYREF
  int v14; // [sp+24h] [bp-8h]

  v1 = _stack_chk_guard;
  *(_BYTE *)(a1 + 2) = 0;
  *(_BYTE *)(a1 + 3) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 5) = 0;
  *(_BYTE *)(a1 + 6) = 0;
  *(_BYTE *)(a1 + 7) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 9) = 0;
  *(_WORD *)a1 = 1970;
  *(_BYTE *)(a1 + 4) = 1;
  *(_BYTE *)(a1 + 5) = 1;
  v14 = v1;
  if ( sscanf("16:46:40/Feb  5 2025", "%hu:%hu:%hu/%3s %hu %hu", &v8, &v9, &v10, v13, &v11, &v12) != 6 )
    return 0;
  result = strstr("JanFebMarAprMayJunJulAugSepOctNovDec", v13);
  if ( result )
  {
    v4 = v11;
    v5 = v8;
    v6 = v9;
    v7 = v10;
    *(_WORD *)a1 = v12;
    *(_BYTE *)(a1 + 4) = (result - "JanFebMarAprMayJunJulAugSepOctNovDec") / 3 + 1;
    *(_BYTE *)(a1 + 5) = v4;
    *(_BYTE *)(a1 + 6) = v5;
    *(_BYTE *)(a1 + 7) = v6;
    *(_BYTE *)(a1 + 8) = v7;
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}
