int __fastcall sub_233F0(int a1, int a2)
{
  int v4; // r3
  int v5; // r2
  int result; // r0
  int v7; // r12
  unsigned __int16 v8; // r11
  unsigned __int16 v9; // r9
  __int16 v10; // r10
  unsigned int v11; // lr
  unsigned int v12; // r0
  unsigned int v13; // r10
  int (__fastcall **v14)(int, int); // r1
  int v15; // r3
  int v16; // t1
  __int16 v17; // r0

  v4 = *(_DWORD *)(a1 + 84);
  dword_BA6B4 = *(_DWORD *)(a1 + 60);
  dword_BA494 = a1 + 4;
  ++numctlreq;
  if ( v4 > 11 )
  {
    v5 = *(unsigned __int8 *)(a1 + 89);
    result = *(unsigned __int16 *)(a1 + 96);
    if ( (v5 & 0xE0) == 0 && !*(_WORD *)(a1 + 96) )
    {
      v7 = (*(unsigned __int8 *)(a1 + 88) >> 3) & 7;
      byte_BA8DC = (*(_BYTE *)(a1 + 88) >> 3) & 7;
      if ( (unsigned int)(v7 - 1) > 3 )
      {
        ++numctlbadversion;
        return result;
      }
      v8 = *(_WORD *)(a1 + 98);
      word_BA4A0 = 0;
      dword_BA6A8 = 0;
      v9 = HIBYTE(v8) | (v8 << 8);
      v10 = *(_WORD *)(a1 + 90);
      v11 = *(unsigned __int16 *)(a1 + 94);
      byte_BA6AC = 0;
      byte_BA6AD = 0;
      byte_BA49C = (sys_leap << 6) | 6 | (8 * v7);
      dword_BA6B0 = 0;
      byte_BA8DD = 0;
      dword_BA6A0 = 0;
      dword_BA6C0 = 0;
      dword_BA6BC = 0;
      word_BA4A2 = v11;
      byte_BA6A4 = v5;
      word_BA6C8 = (v11 >> 8) | ((_WORD)v11 << 8);
      dword_BA498 = (int)&unk_BA4A8;
      word_BA49E = v10;
      word_BA6B8 = 1;
      dword_BA6C4 = (int)&unk_BA67C;
      if ( v9 > v4 - 12 || (v4 & 3) != 0 )
      {
        result = sub_1F734(2);
        ++numctldatatooshort;
        return result;
      }
      v12 = (v9 + 19) & 0xFFFFFFF8;
      v13 = v4 - v12;
      if ( v4 - v12 - 4 <= 0x14 && sys_authenticate )
      {
        byte_BA6AD = 1;
        dword_BA6B0 = bswap32(*(_DWORD *)(a1 + 88 + v12));
        if ( sub_632AC() )
        {
          if ( sub_63770(dword_BA6B0, a1 + 88, *(_DWORD *)(a1 + 84) - v13, v13) )
            byte_BA8DD = 1;
          else
            dword_BA6B0 = 0;
          v5 = (unsigned __int8)byte_BA6A4;
        }
        else
        {
          v5 = (unsigned __int8)byte_BA6A4;
        }
      }
      dword_BA408 = a1 + 100;
      dword_BA40C = a1 + 100 + v9;
      if ( v5 )
      {
        v14 = (int (__fastcall **)(int, int))&unk_B5480;
        while ( 1 )
        {
          v16 = *((__int16 *)v14 + 4);
          v14 += 2;
          v15 = v16;
          if ( v16 == -1 )
            break;
          if ( v15 == v5 )
            goto LABEL_28;
        }
        v17 = 3;
        ++numctlbadop;
      }
      else
      {
        v14 = (int (__fastcall **)(int, int))&unk_B5480;
LABEL_28:
        if ( *((_WORD *)v14 + 1) != 1 || byte_BA8DD && dword_BA6B0 == ctl_auth_keyid )
          return v14[1](a1, a2);
        v17 = 1;
      }
      return sub_1F734(v17);
    }
  }
  else
  {
    LOBYTE(v5) = *(_BYTE *)(a1 + 89);
    result = *(unsigned __int16 *)(a1 + 96);
    ++numctltooshort;
  }
  if ( (v5 & 0x80) != 0 )
    ++numctlinputresp;
  if ( (v5 & 0x20) != 0 )
    ++numctlinputfrag;
  if ( (v5 & 0x40) != 0 )
    ++numctlinputerr;
  if ( result )
    ++numctlbadoffset;
  return result;
}
