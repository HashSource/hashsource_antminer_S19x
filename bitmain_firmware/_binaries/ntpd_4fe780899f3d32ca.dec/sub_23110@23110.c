int __fastcall sub_23110(int a1, int a2)
{
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // lr
  int v8; // r3
  int v9; // r10
  unsigned __int16 v10; // r9
  bool v11; // zf
  unsigned int v12; // r10
  __int16 v13; // r12
  unsigned int v14; // r12
  unsigned int v15; // r11
  int v16; // r3
  char *i; // r0
  int v18; // r0
  int (*v19)(); // r3
  unsigned int v20; // r2

  result = a1 + 4;
  v5 = *(_DWORD *)(a1 + 84);
  v6 = *(unsigned __int8 *)(a1 + 89);
  dword_B96B4 = *(_DWORD *)(a1 + 60);
  dword_B9494 = result;
  v7 = *(unsigned __int16 *)(a1 + 96);
  ++numctlreq;
  if ( v5 <= 11 )
  {
    ++numctltooshort;
LABEL_3:
    if ( (v6 & 0x80) != 0 )
      ++numctlinputresp;
    if ( (v6 & 0x20) != 0 )
      ++numctlinputfrag;
    if ( (v6 & 0x40) != 0 )
      ++numctlinputerr;
    if ( v7 )
      ++numctlbadoffset;
    return result;
  }
  if ( (v6 & 0xE0) != 0 || v7 )
    goto LABEL_3;
  v8 = (*(unsigned __int8 *)(a1 + 88) >> 3) & 7;
  byte_B98DC = (*(_BYTE *)(a1 + 88) >> 3) & 7;
  if ( (unsigned int)(v8 - 1) > 3 )
  {
    ++numctlbadversion;
    return result;
  }
  v9 = v5 & 3;
  if ( (v5 & 3) != 0 )
    v9 = 1;
  v10 = __rev16(*(unsigned __int16 *)(a1 + 98));
  word_B94A0 = 0;
  dword_B96A8 = 0;
  if ( v10 > v5 - 12 )
    v9 |= 1u;
  byte_B96AC = 0;
  v11 = v9 == 0;
  v12 = *(unsigned __int16 *)(a1 + 94);
  byte_B96AD = 0;
  dword_B96B0 = 0;
  word_B94A2 = v12;
  v13 = *(_WORD *)(a1 + 90);
  byte_B98DD = 0;
  byte_B949C = (sys_leap << 6) | 6 | (8 * v8);
  dword_B96A0 = 0;
  dword_B96C0 = 0;
  dword_B96BC = 0;
  word_B949E = v13;
  word_B96B8 = 1;
  byte_B96A4 = v6;
  word_B96C8 = __rev16(v12);
  dword_B9498 = (int)&unk_B94A8;
  dword_B96C4 = (int)&unk_B967C;
  if ( !v11 )
  {
    result = sub_1F4D0(2);
    ++numctldatatooshort;
    return result;
  }
  v14 = (v10 + 19) & 0xFFFFFFF8;
  v15 = v5 - v14;
  if ( v5 - v14 - 4 <= 0x14 && sys_authenticate )
  {
    v20 = *(_DWORD *)(a1 + 88 + v14);
    byte_B96AD = 1;
    dword_B96B0 = bswap32(v20);
    if ( sub_623A4(dword_B96B0, result) )
    {
      if ( !sub_62854(dword_B96B0, a1 + 88, *(_DWORD *)(a1 + 84) - v15, v15) )
      {
        v6 = (unsigned __int8)byte_B96A4;
        dword_B96B0 = 0;
        goto LABEL_24;
      }
      byte_B98DD = 1;
    }
    v6 = (unsigned __int8)byte_B96A4;
  }
LABEL_24:
  dword_B940C = a1 + 100 + v10;
  dword_B9408 = a1 + 100;
  if ( v6 )
  {
    v16 = 1;
    for ( i = (char *)&unk_B4480; ; i += 8 )
    {
      if ( v16 == -1 )
      {
        v18 = 3;
        ++numctlbadop;
        return sub_1F4D0(v18);
      }
      if ( v16 == v6 )
        break;
      v16 = *((__int16 *)i + 8);
    }
    if ( *((_WORD *)i + 5) == 1 && (!byte_B98DD || dword_B96B0 != ctl_auth_keyid) )
    {
      v18 = 1;
      return sub_1F4D0(v18);
    }
    v19 = (int (*)())*((_DWORD *)i + 3);
  }
  else
  {
    v19 = sub_23CE8;
  }
  return ((int (__fastcall *)(int, int))v19)(a1, a2);
}
