unsigned int __fastcall sub_331AC(int a1, int a2, int a3)
{
  unsigned int v3; // r6
  int v5; // r1
  unsigned int v6; // r7
  int v7; // r8
  int v8; // r9
  unsigned int result; // r0
  int v10; // r2
  int v11; // r1
  bool v12; // cc
  int v13; // r3
  int v14; // r12
  int v15; // r2
  int v16; // r2

  v3 = *(_DWORD *)(a1 + 4);
  v5 = *(unsigned __int8 *)(dword_A0D68 + 12954);
  if ( !*(_BYTE *)(dword_A0D68 + 12954) )
    v5 = 3;
  v6 = sub_75CF4(v3, v5, a3);
  v7 = *(_WORD *)(a1 + 2) & 0x7FFF;
  v8 = *(_BYTE *)a1 & 0xF;
  result = sub_75CEC(v3);
  if ( *(_DWORD *)(dword_A0D68 + 4 * v8 + 4) )
  {
    v10 = dword_1AEA68;
    if ( (*(_BYTE *)a1 & 0x20) != 0 )
    {
      ++*(_DWORD *)(dword_1AEA68 + 4 * v8 + 1941192);
    }
    else if ( (*(_BYTE *)a1 & 0x40) != 0 )
    {
      ++*(_DWORD *)(dword_1AEA68 + 4 * v8 + 1941256);
    }
    else if ( (*(_BYTE *)a1 & 0x80) != 0 )
    {
      if ( v6 > 0x4D )
      {
        ++*(_DWORD *)(dword_1AEA68 + 4 * v8 + 3853516);
      }
      else
      {
        result = 4 * (__int16)result + (v7 & 3);
        v11 = v7 >> 7;
        v12 = (unsigned int)(v7 >> 7) > 7;
        if ( (unsigned int)(v7 >> 7) <= 7 )
          v12 = result > 0x17E;
        if ( v12 )
        {
          ++*(_DWORD *)(dword_1AEA68 + 4 * v8 + 1941448);
        }
        else if ( *(_DWORD *)(*(_DWORD *)(dword_1AEA68 + 4 * ((_DWORD)&unk_EDF22 + v6) + 4) + 52 * v11 + 416 * result + 4) == v3 )
        {
          v13 = dword_1AEA68 + 4 * (383 * v6 + 29874 * v8 + result);
          result = v13 + 1941504;
          v14 = *(_DWORD *)(v13 + 1941576);
          if ( (v14 & (1 << v11)) != 0 )
          {
            ++*(_DWORD *)(dword_1AEA68 + 4 * v8 + 1941128);
          }
          else
          {
            *(_DWORD *)(v13 + 1941576) = v14 | (1 << v11);
            result = *(_DWORD *)(v13 + 8) + 1;
            *(_DWORD *)(v13 + 8) = result;
            ++*(_DWORD *)(v10 + 4 * (v6 + 78 * v8) + 1911944);
            ++*(_DWORD *)(v10 + 4 * v8 + 1916936);
          }
        }
        else
        {
          result = sub_31658((_DWORD *)(dword_1AEA68 + 52 * (v7 & 0x7F) + 6656 * v8 + 3898820), v3);
          if ( result )
            v15 = *(_DWORD *)(dword_1AEA68 + 4 * v8 + 1941384);
          else
            v15 = *(_DWORD *)(dword_1AEA68 + 4 * v8 + 1941448);
          v16 = v15 + 1;
          if ( result )
            *(_DWORD *)(dword_1AEA68 + 4 * v8 + 1941384) = v16;
          else
            *(_DWORD *)(dword_1AEA68 + 4 * v8 + 1941448) = v16;
        }
      }
    }
    else
    {
      ++*(_DWORD *)(dword_1AEA68 + 4 * v8 + 1941320);
    }
  }
  else
  {
    ++*(_DWORD *)(dword_1AEA68 + 3853512);
  }
  return result;
}
