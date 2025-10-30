unsigned int __fastcall sub_40E20(unsigned int result, _WORD *a2)
{
  int v3; // r7
  unsigned __int16 *v4; // r6
  int v5; // r3
  int v6; // r3
  __int16 v7; // r3
  __int16 v8; // r2
  int v9; // r3
  int v10; // r3
  __int16 v11; // r3

  if ( !a2 )
    sub_6FC54("ntp_restrict.c", 511, 0, "((void *)0) != r4a");
  *a2 = 1;
  a2[1] = 0;
  v3 = *(unsigned __int16 *)result;
  v4 = (unsigned __int16 *)result;
  ++dword_BDBC0;
  if ( v3 == 2 )
  {
    result = bswap32(*(_DWORD *)(result + 4));
    if ( (result & 0xF0000000) == 0xE0000000 )
    {
      a2[1] = 2;
      return result;
    }
    result = sub_40994(result, (unsigned __int16)(HIBYTE(v4[1]) | (v4[1] << 8)));
    if ( !result )
      sub_6FC54("ntp_restrict.c", 535, 2, "match != ((void *)0)");
    v8 = *(_WORD *)(result + 8);
    ++*(_DWORD *)(result + 4);
    if ( (int *)result == &dword_BDB58 )
      v9 = dword_BDBC4;
    else
      v9 = dword_BDBC8;
    v10 = v9 + 1;
    if ( (int *)result == &dword_BDB58 )
      dword_BDBC4 = v10;
    else
      dword_BDBC8 = v10;
    v11 = *(_WORD *)(result + 12);
    *a2 = v8;
    a2[1] = v11;
    v3 = *v4;
  }
  if ( v3 == 10 && *((unsigned __int8 *)v4 + 8) != 255 )
  {
    result = sub_40AF4((int)(v4 + 4), (unsigned __int16)(HIBYTE(v4[1]) | (v4[1] << 8)));
    if ( !result )
      sub_6FC54("ntp_restrict.c", 564, 2, "match != ((void *)0)");
    ++*(_DWORD *)(result + 4);
    if ( (int *)result == &dword_BDB8C )
      v5 = dword_BDBC4;
    else
      v5 = dword_BDBC8;
    v6 = v5 + 1;
    if ( (int *)result == &dword_BDB8C )
      dword_BDBC4 = v6;
    else
      dword_BDBC8 = v6;
    v7 = *(_WORD *)(result + 12);
    *a2 = *(_WORD *)(result + 8);
    a2[1] = v7;
  }
  return result;
}
