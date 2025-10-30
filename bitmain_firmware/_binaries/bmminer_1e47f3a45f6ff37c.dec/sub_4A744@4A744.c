unsigned int __fastcall sub_4A744(int a1)
{
  int v2; // r7
  int v3; // r0
  int v4; // r0
  int v5; // r6
  unsigned int v6; // r10
  unsigned int v7; // r5
  unsigned int v8; // r9
  int v9; // r11
  unsigned int result; // r0
  unsigned int v11; // r8
  int v12; // r3
  unsigned int v13; // r6
  int v14; // r10
  unsigned int v15; // r8
  bool v16; // cf
  int v17; // r12
  unsigned int v18; // r2
  int v19; // r6
  int v20; // r1
  int v21; // lr
  int v22; // r2
  int v23; // r2
  int v24; // r3

  v2 = *(_DWORD *)(a1 + 4);
  v3 = sub_26AB4();
  v4 = sub_7A704(v2, v3);
  v5 = *(_WORD *)(a1 + 2) & 0x7FFF;
  v6 = *(unsigned __int16 *)(a1 + 9);
  v7 = *(_BYTE *)a1 & 0xF;
  v8 = v4;
  v9 = sub_7A6FC(v2);
  result = sub_26A94();
  if ( v7 <= 3 && (v11 = result, (result = sub_26C0C(v7)) != 0) )
  {
    if ( (*(_BYTE *)a1 & 0x20) != 0 )
    {
      ++*(_DWORD *)(dword_535D90 + 4 * v7 + 8431656);
    }
    else if ( (*(_BYTE *)a1 & 0x40) != 0 )
    {
      ++*(_DWORD *)(dword_535D90 + 4 * v7 + 8431672);
    }
    else if ( (*(_BYTE *)a1 & 0x80) != 0 )
    {
      result = sub_26A44();
      if ( v8 < result )
      {
        v12 = v5 & 0x7F;
        v13 = v5 >> 7;
        v14 = v12 + (v6 >> 9);
        v15 = (v14 & 3) + v11 * v9;
        result = sub_26A84();
        v16 = v13 >= 7;
        if ( v13 <= 7 )
          v16 = v15 >= result;
        if ( v16 )
        {
          ++*(_DWORD *)(dword_535D90 + 4 * v7 + 8431720);
        }
        else
        {
          v17 = dword_535D90;
          result = *(_DWORD *)(dword_535D90 + 4 * ((_DWORD)&unk_202A2A + v8) + 4);
          if ( *(_DWORD *)(result + 84 * (v13 + 8 * v15) + 4) == v2 )
          {
            v18 = v8 + (v7 << 8);
            v19 = 1 << v13;
            v20 = dword_535D90 + 4 * (v15 + (v18 << 10));
            v21 = *(_DWORD *)(v20 + 8);
            if ( (v21 & v19) != 0 )
            {
              ++*(_DWORD *)(dword_535D90 + 4 * v7 + 8431640);
            }
            else
            {
              v24 = dword_535D90 + 4 * v18 + 8425472;
              *(_DWORD *)(v20 + 8) = v21 | v19;
              ++*(_DWORD *)(v20 + 4231176);
              ++*(_DWORD *)(v24 + 8);
              ++*(_DWORD *)(v17 + 4 * v7 + 8429576);
              return v20 + 4231168;
            }
          }
          else
          {
            result = sub_4B108((char *)&unk_80ACAC + 10752 * v7 + 84 * v14 + dword_535D90);
            if ( result )
              v22 = *(_DWORD *)(dword_535D90 + 4 * v7 + 8431704);
            else
              v22 = *(_DWORD *)(dword_535D90 + 4 * v7 + 8431720);
            v23 = v22 + 1;
            if ( result )
              *(_DWORD *)(dword_535D90 + 4 * v7 + 8431704) = v23;
            else
              *(_DWORD *)(dword_535D90 + 4 * v7 + 8431720) = v23;
          }
        }
      }
      else
      {
        ++*(_DWORD *)(dword_535D90 + 4 * v7 + 8431756);
      }
    }
    else
    {
      ++*(_DWORD *)(dword_535D90 + 4 * v7 + 8431688);
    }
  }
  else
  {
    ++*(_DWORD *)(dword_535D90 + 8431752);
  }
  return result;
}
