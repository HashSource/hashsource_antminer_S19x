int __fastcall sub_2DB2EC(int a1, int a2, int a3, unsigned int a4)
{
  int v5; // r12
  int result; // r0
  int v7; // r1
  int v8; // r5
  int v9; // r0
  unsigned int v10; // r3
  int v11; // r3
  int savedregs; // [sp+0h] [bp+0h]
  int savedregs_4; // [sp+4h] [bp+4h]
  int savedregs_8; // [sp+8h] [bp+8h]
  int savedregs_12; // [sp+Ch] [bp+Ch]

  v5 = (*(unsigned __int16 *)(a3 + 24) >> 7) & 7;
  if ( v5 == 1 )
  {
    v7 = *(_DWORD *)(*(_DWORD *)(a3 + 140) + 136);
    if ( !v7 )
      return a4;
    v10 = *(_DWORD *)(a3 + 40);
    if ( v10 <= a4 )
      return a4 + *(_DWORD *)(a3 + 36) - v10;
    v11 = *(_DWORD *)(v7 + 4);
    if ( v11 )
    {
      savedregs_8 = savedregs;
      savedregs_12 = savedregs_4;
      result = *(_DWORD *)(v7 + 4 * (a4 / 0xC + 2));
      if ( result != -1 )
        return a4 - *(_DWORD *)(v11 + 4 * (a4 / 0xC));
    }
    else
    {
      return a4;
    }
  }
  else if ( v5 == 3 )
  {
    return sub_2F3E24();
  }
  else if ( (*(_DWORD *)(a3 + 20) & 0x4000000) != 0 )
  {
    v8 = *(_DWORD *)(a3 + 36)
       - (*(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 392) + 10) >> 3);
    v9 = sub_2A6904(a1);
    return sub_347418(v8, v9) - a4;
  }
  else
  {
    return a4;
  }
  return result;
}
