int __fastcall sub_17614(int result, int a2, int a3, int a4)
{
  int v4; // r10
  int i; // r4
  int v8; // r3
  int v9; // r1
  int v10; // r7
  unsigned __int8 *v11; // r12
  int v12; // r3
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v4 = result;
  for ( i = 0; i != 16; ++i )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
      {
        v8 = dword_A05EC;
        v9 = 2 * i;
        v10 = (unsigned __int8)byte_A05F0;
        *(_BYTE *)(v4 + i) = *(_BYTE *)(*(_DWORD *)(dword_A05EC + 4 * i) + 29);
        *(_BYTE *)(a2 + i) = *(_BYTE *)(*(_DWORD *)(v8 + 4 * i) + 30);
        *(_WORD *)(a3 + v9) = *(_WORD *)(*(_DWORD *)(v8 + 4 * i) + 31);
        result = *(unsigned __int16 *)(*(_DWORD *)(v8 + 4 * i) + 33);
        *(_WORD *)(a4 + v9) = result;
        if ( !v10 && (unsigned int)dword_9E31C > 3 )
          break;
      }
      if ( ++i == 16 )
        goto LABEL_7;
    }
    v11 = *(unsigned __int8 **)(v8 + 4 * i);
    v12 = i;
    snprintf(
      s,
      0x800u,
      "chain[%d] board bin: %d, chip bin: %d, chip ft: A%dV%d, chip version: %c%c\n",
      v12,
      v11[29],
      v11[30],
      v11[31],
      v11[32],
      v11[33],
      v11[34]);
    result = sub_47AB4(3, s, 0);
  }
LABEL_7:
  byte_A05F0 = 1;
  return result;
}
