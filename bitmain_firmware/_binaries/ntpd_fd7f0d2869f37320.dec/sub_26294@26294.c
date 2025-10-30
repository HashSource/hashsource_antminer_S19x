int __fastcall sub_26294(int result, int a2, const char *a3)
{
  int v4; // r6
  char v6; // r3
  char v7; // r2
  int v8; // r1
  int v9; // r0
  const char *v10; // r10
  int v11; // r11
  const char *v12; // r0
  size_t v13; // r0
  int v14; // r4
  unsigned int v15; // r0
  int v16; // r0
  unsigned int v17; // r2
  int v18; // r4
  unsigned int v19; // r0
  int v20; // r0
  char v21; // r2
  int v22; // r10
  const char *v23; // r0
  size_t v24; // r0
  int v25; // r4
  int v26; // r0
  const char **v27; // r4
  __int16 v28; // r3
  size_t v29; // r0
  const char **v30; // r0
  unsigned __int8 v31[68]; // [sp+10h] [bp-15Ch] BYREF
  const char **v32; // [sp+54h] [bp-118h]
  _DWORD v33[2]; // [sp+5Ch] [bp-110h] BYREF
  char v34[256]; // [sp+64h] [bp-108h] BYREF

  v4 = result;
  if ( a2 )
  {
    v6 = result & 0x7F;
    if ( *(_BYTE *)(a2 + 73) == (result & 0x7F) )
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
      v10 = (const char *)sub_6B36C(v9);
    else
      v10 = (const char *)sub_6D2C0(v9);
    v11 = sub_237F8(a2);
    v12 = (const char *)sub_6E39C(v4);
    sub_6D00C(v34, 256, "%s %04x %02x %s", v10, v11, v4, v12);
    if ( a3 )
    {
      v13 = strlen(v34);
      sub_6D00C(&v34[v13], 256 - v13, " %s", a3);
    }
    if ( (ntp_syslogmask & 0x20) == 0 )
      goto LABEL_10;
    goto LABEL_32;
  }
  if ( (unsigned __int8)byte_BA8DE == (unsigned __int8)result )
  {
    if ( (unsigned __int8)byte_BA8DF > 0xEu )
      return result;
    v21 = byte_BA8DF + 1;
  }
  else
  {
    v21 = 1;
  }
  byte_BA8DE = result;
  byte_BA8DF = v21;
  v22 = sub_2389C();
  v23 = (const char *)sub_6E39C(v4);
  sub_6D00C(v34, 256, "0.0.0.0 %04x %02x %s", v22, v4, v23);
  if ( a3 )
  {
    v24 = strlen(v34);
    sub_6D00C(&v34[v24], 256 - v24, " %s", a3);
  }
  if ( (ntp_syslogmask & 2) != 0 )
LABEL_32:
    sub_65D40(6, "%s", v34);
LABEL_10:
  result = sub_431D4(v34);
  if ( num_ctl_traps <= 0 )
    return result;
  if ( (v4 & 0x80) != 0 )
  {
    if ( !a2 )
      return result;
    word_BA4A2 = HIBYTE(*(_WORD *)(a2 + 60)) | (*(_WORD *)(a2 + 60) << 8);
    dword_BA6C4 = (int)&unk_BA67C;
    dword_BA498 = (int)&unk_BA4A8;
    v14 = 1;
    byte_BA6AC = 1;
    byte_BA6A4 = 7;
    dword_BA6A8 = 0;
    byte_BA6AD = 0;
    v15 = sub_237F8(a2);
    word_BA4A0 = (v15 >> 8) | ((_WORD)v15 << 8);
    do
    {
      v16 = v14++;
      sub_20A90(v16, a2);
    }
    while ( v14 != 51 );
    if ( v4 == 139 )
    {
      v32 = 0;
      sub_3ABAC(a2 + 16, 0, v31);
      v25 = 1;
      sub_1FC68("refclockstatus", v31[64] & 0xF | (unsigned __int8)(16 * v31[65]));
      do
      {
        v26 = v25++;
        sub_20410(v26, v31, 0);
      }
      while ( v25 != 14 );
      v27 = v32;
      if ( !v32 || (v28 = *(_WORD *)((char *)&dword_0 + (_DWORD)v32 + 2), (v28 & 0x80) != 0) )
      {
        v30 = v32;
      }
      else
      {
        do
        {
          if ( (v28 & 0x20) != 0 )
          {
            v29 = strlen(v27[1]);
            v33[0] = v27[1];
            v33[1] = v29;
            sub_1F104((char *)v33, 1, 0);
          }
          v27 += 2;
          if ( !v27 )
            break;
          v28 = *((_WORD *)v27 + 1);
        }
        while ( (v28 & 0x80) == 0 );
        v30 = v32;
      }
      sub_25108(v30);
    }
  }
  else
  {
    v18 = 1;
    dword_BA6A8 = 0;
    byte_BA6AD = 0;
    word_BA4A2 = 0;
    byte_BA6A4 = 7;
    dword_BA498 = (int)&unk_BA4A8;
    dword_BA6C4 = (int)&unk_BA67C;
    byte_BA6AC = 1;
    v19 = sub_2389C();
    word_BA4A0 = (v19 >> 8) | ((_WORD)v19 << 8);
    do
    {
      v20 = v18++;
      sub_21480(v20);
    }
    while ( v18 != 20 );
  }
  return (int)sub_1EDD4(0);
}
