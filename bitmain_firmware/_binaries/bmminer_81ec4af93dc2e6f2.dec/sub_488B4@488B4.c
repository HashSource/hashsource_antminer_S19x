unsigned int __fastcall sub_488B4(int a1)
{
  int v2; // r7
  int v3; // r0
  unsigned int v4; // r8
  unsigned int v5; // r4
  int v6; // r6
  int v7; // r10
  unsigned int result; // r0
  unsigned int v9; // r9
  int v10; // r5
  unsigned int v11; // r9
  _BOOL4 v12; // r3
  int v13; // r2
  int v14; // r2
  int v15; // r2
  unsigned int v16; // r3
  int v17; // r5
  int v18; // r1
  int v19; // r12

  v2 = *(_DWORD *)(a1 + 4);
  v3 = sub_265B0();
  v4 = sub_772B8(v2, v3);
  v5 = *(_BYTE *)a1 & 0xF;
  v6 = *(_WORD *)(a1 + 2) & 0x7FFF;
  v7 = sub_772B0(v2);
  result = sub_26590();
  if ( v5 <= 3 && (v9 = result, (result = sub_266F0(v5)) != 0) )
  {
    if ( (*(_BYTE *)a1 & 0x20) != 0 )
    {
      ++*(_DWORD *)(dword_530F04 + 4 * v5 + 8431656);
    }
    else if ( (*(_BYTE *)a1 & 0x40) != 0 )
    {
      ++*(_DWORD *)(dword_530F04 + 4 * v5 + 8431672);
    }
    else if ( (*(_BYTE *)a1 & 0x80) != 0 )
    {
      result = sub_26540();
      if ( result > v4 )
      {
        v10 = v6 >> 7;
        v11 = (v6 & 3) + v9 * v7;
        result = sub_26580();
        v12 = v6 >> 7 > 7;
        if ( result <= v11 )
          v12 = 1;
        if ( v12 )
        {
          ++*(_DWORD *)(dword_530F04 + 4 * v5 + 8431720);
        }
        else
        {
          result = 52;
          v13 = dword_530F04;
          if ( *(_DWORD *)(*(_DWORD *)(dword_530F04 + 4 * ((_DWORD)&unk_202A2A + v4) + 4) + 52 * v10 + 416 * v11 + 4) == v2 )
          {
            v16 = v4 + (v5 << 8);
            v17 = 1 << v10;
            v18 = dword_530F04 + 4 * (v11 + (v16 << 10));
            v19 = *(_DWORD *)(v18 + 8);
            if ( (v19 & v17) != 0 )
            {
              ++*(_DWORD *)(dword_530F04 + 4 * v5 + 8431640);
            }
            else
            {
              *(_DWORD *)(v18 + 8) = v19 | v17;
              ++*(_DWORD *)(v18 + 4231176);
              ++*(_DWORD *)(v13 + 4 * v16 + 8425480);
              ++*(_DWORD *)(v13 + 4 * v5 + 8429576);
              return v18 + 4231168;
            }
          }
          else
          {
            result = sub_49324((char *)&unk_80ACAC + 6656 * v5 + 52 * (v6 & 0x7F) + dword_530F04, v2);
            if ( result )
              v14 = *(_DWORD *)(dword_530F04 + 4 * v5 + 8431704);
            else
              v14 = *(_DWORD *)(dword_530F04 + 4 * v5 + 8431720);
            v15 = v14 + 1;
            if ( result )
              *(_DWORD *)(dword_530F04 + 4 * v5 + 8431704) = v15;
            else
              *(_DWORD *)(dword_530F04 + 4 * v5 + 8431720) = v15;
          }
        }
      }
      else
      {
        ++*(_DWORD *)(dword_530F04 + 4 * v5 + 8431756);
      }
    }
    else
    {
      ++*(_DWORD *)(dword_530F04 + 4 * v5 + 8431688);
    }
  }
  else
  {
    ++*(_DWORD *)(dword_530F04 + 8431752);
  }
  return result;
}
