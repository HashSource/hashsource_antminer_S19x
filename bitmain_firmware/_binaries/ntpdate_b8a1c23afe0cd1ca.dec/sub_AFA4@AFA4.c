char *__fastcall sub_AFA4(int a1)
{
  int v2; // lr
  char *result; // r0
  int v4; // r6
  __int16 v5; // r0
  char v6; // r1
  char v7; // r3
  char v8; // r2
  __int16 v9; // [sp+16h] [bp-16h] BYREF
  __int16 v10; // [sp+18h] [bp-14h] BYREF
  __int16 v11; // [sp+1Ah] [bp-12h] BYREF
  __int16 v12; // [sp+1Ch] [bp-10h] BYREF
  __int16 v13; // [sp+1Eh] [bp-Eh] BYREF
  char v14[4]; // [sp+20h] [bp-Ch] BYREF
  int v15; // [sp+24h] [bp-8h]

  *(_DWORD *)(a1 + 6) = 0;
  v2 = _stack_chk_guard;
  *(_DWORD *)(a1 + 2) = 0;
  *(_WORD *)(a1 + 4) = 257;
  *(_WORD *)a1 = 1970;
  v15 = v2;
  if ( sscanf("17:10:05/Jan 14 2020", "%hu:%hu:%hu/%3s %hu %hu", &v9, &v10, &v11, v14, &v12, &v13) != 6 )
    return 0;
  result = strstr("JanFebMarAprMayJunJulAugSepOctNovDec", v14);
  if ( result )
  {
    v4 = result - "JanFebMarAprMayJunJulAugSepOctNovDec";
    v5 = v13;
    v6 = v12;
    v7 = v11;
    *(_BYTE *)(a1 + 6) = v9;
    v8 = v10;
    *(_WORD *)a1 = v5;
    *(_BYTE *)(a1 + 5) = v6;
    *(_BYTE *)(a1 + 7) = v8;
    *(_BYTE *)(a1 + 4) = (char)v4 / 3 + 1;
    *(_BYTE *)(a1 + 8) = v7;
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}
