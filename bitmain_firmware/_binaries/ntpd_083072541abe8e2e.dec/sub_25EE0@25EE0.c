__int16 *__fastcall sub_25EE0(__int16 *result, int a2, const char *a3)
{
  __int16 *v5; // r6
  int v6; // r2
  char v7; // r3
  int v8; // r1
  int v9; // r0
  const char *v10; // r11
  int v11; // r10
  const char *v12; // r0
  size_t v13; // r0
  unsigned int v14; // r3
  int v15; // r4
  int v16; // r0
  unsigned int v17; // r3
  char v18; // r3
  int v19; // r10
  const char *v20; // r0
  size_t v21; // r0
  int v22; // r4
  int v23; // r0
  int v24; // r4
  int v25; // r0
  int v26; // r4
  __int16 v27; // r3
  const char *v28; // r5
  unsigned __int8 v29[68]; // [sp+10h] [bp-15Ch] BYREF
  int v30; // [sp+54h] [bp-118h]
  _DWORD v31[2]; // [sp+5Ch] [bp-110h] BYREF
  char v32[256]; // [sp+64h] [bp-108h] BYREF

  v5 = result;
  if ( a2 )
  {
    v6 = (unsigned __int8)result & 0x7F;
    if ( *(unsigned __int8 *)(a2 + 73) == v6 )
    {
      v17 = *(unsigned __int8 *)(a2 + 74);
      if ( v17 > 0xE )
        return result;
      v7 = v17 + 1;
    }
    else
    {
      v7 = 1;
    }
    v8 = *(unsigned __int16 *)(a2 + 16);
    v9 = a2 + 16;
    *(_BYTE *)(a2 + 73) = v6;
    *(_BYTE *)(a2 + 74) = v7;
    if ( v8 == 2 && *(_WORD *)(a2 + 20) == 32639 )
      v10 = (const char *)sub_6A3FC(v9);
    else
      v10 = (const char *)sub_6C2E8(v9);
    v11 = sub_23504(a2);
    v12 = (const char *)sub_6D3C4(v5);
    sub_6C054(v32, 256, "%s %04x %02x %s", v10, v11, v5, v12);
    if ( a3 )
    {
      v13 = strlen(v32);
      sub_6C054(&v32[v13], 256 - v13, " %s", a3);
    }
    if ( (ntp_syslogmask & 0x20) == 0 )
      goto LABEL_11;
    goto LABEL_27;
  }
  if ( (unsigned __int8)byte_B98DE == (unsigned __int8)result )
  {
    if ( (unsigned __int8)byte_B98DF > 0xEu )
      return result;
    v18 = byte_B98DF + 1;
  }
  else
  {
    v18 = 1;
  }
  byte_B98DE = (char)result;
  byte_B98DF = v18;
  v19 = sub_235A8();
  v20 = (const char *)sub_6D3C4(v5);
  sub_6C054(v32, 256, "0.0.0.0 %04x %02x %s", v19, v5, v20);
  if ( a3 )
  {
    v21 = strlen(v32);
    sub_6C054(&v32[v21], 256 - v21, " %s", a3);
  }
  if ( (ntp_syslogmask & 2) != 0 )
LABEL_27:
    sub_64E00(6, "%s", v32);
LABEL_11:
  result = (__int16 *)sub_4241C(v32);
  if ( num_ctl_traps > 0 )
  {
    if ( ((unsigned __int8)v5 & 0x80) == 0 )
    {
      v22 = 1;
      dword_B96A8 = 0;
      byte_B96AD = 0;
      word_B94A2 = 0;
      byte_B96A4 = 7;
      dword_B9498 = (int)&unk_B94A8;
      dword_B96C4 = (int)&unk_B967C;
      byte_B96AC = 1;
      word_B94A0 = __rev16(sub_235A8());
      do
      {
        v23 = v22++;
        sub_21888(v23);
      }
      while ( v22 != 20 );
      return sub_1EBA4(0);
    }
    if ( a2 )
    {
      v14 = *(unsigned __int16 *)(a2 + 60);
      v15 = 1;
      byte_B96A4 = 7;
      dword_B9498 = (int)&unk_B94A8;
      dword_B96C4 = (int)&unk_B967C;
      word_B94A2 = __rev16(v14);
      dword_B96A8 = 0;
      byte_B96AD = 0;
      byte_B96AC = 1;
      word_B94A0 = __rev16(sub_23504(a2));
      do
      {
        v16 = v15++;
        sub_20810(v16, a2);
      }
      while ( v15 != 51 );
      if ( v5 == (__int16 *)((char *)&dword_88 + 3) )
      {
        v30 = 0;
        sub_3A3B4(a2 + 16, 0, v29, 0);
        v24 = 1;
        sub_1FA04("refclockstatus", v29[64] & 0xF | (unsigned __int8)(16 * v29[65]));
        do
        {
          v25 = v24++;
          sub_201A8(v25, v29, 0);
        }
        while ( v24 != 14 );
        v26 = v30;
        if ( v30 )
        {
          v27 = *(_WORD *)((char *)&dword_0 + v30 + 2);
          if ( (v27 & 0x80) == 0 )
          {
            do
            {
              if ( (v27 & 0x20) != 0 )
              {
                v28 = *(const char **)(v26 + 4);
                v31[1] = strlen(v28);
                v31[0] = v28;
                sub_1EEC8((char *)v31, 1, 0);
              }
              v26 += 8;
              if ( !v26 )
                break;
              v27 = *(_WORD *)(v26 + 2);
            }
            while ( (v27 & 0x80) == 0 );
            v26 = v30;
          }
        }
        sub_24DE4((_WORD *)v26);
      }
      return sub_1EBA4(0);
    }
  }
  return result;
}
