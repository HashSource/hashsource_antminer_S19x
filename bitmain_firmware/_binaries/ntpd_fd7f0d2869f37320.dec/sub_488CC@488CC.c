int __fastcall sub_488CC(int a1, int a2)
{
  int v4; // r4
  _DWORD *v5; // r8
  int v6; // r2
  int v7; // r1
  int v8; // r0
  int v9; // r3
  int v10; // lr
  int v11; // r2
  char v12; // r1
  int v13; // r7
  int v14; // r12
  const char *v15; // r7
  int v16; // r1
  _DWORD *v17; // r4
  int result; // r0
  int v19; // [sp+4h] [bp-44h]
  int v20; // [sp+20h] [bp-28h] BYREF
  int v21; // [sp+24h] [bp-24h]
  int v22; // [sp+2Ch] [bp-1Ch]
  int v23; // [sp+30h] [bp-18h]
  int v24; // [sp+34h] [bp-14h]
  int v25; // [sp+38h] [bp-10h]
  int v26; // [sp+3Ch] [bp-Ch]
  int v27; // [sp+40h] [bp-8h]

  v4 = *(_DWORD *)(a2 + 84);
  if ( ioctl(fd, 0x20000u, &v20) < 0 )
    sub_65D40(3, "HOPF_P(%d): HOPF_CLOCK_GET_UTC: %m", a1);
  v5 = (_DWORD *)(v4 + 232);
  v6 = v22;
  v7 = v21;
  ++*(_DWORD *)(v4 + 776);
  v8 = sub_6FBFC(v20, v7, v6);
  v9 = v27;
  v10 = v23;
  v11 = (_DWORD)&unk_F4240 * v26;
  v12 = v27 & 0x20;
  v13 = v24;
  if ( (v27 & 0x20) != 0 )
    v12 = 1;
  *(_BYTE *)(v4 + 40) = v12;
  v14 = v25;
  *(_DWORD *)(v4 + 196) = v10;
  *(_DWORD *)(v4 + 200) = v13;
  *(_DWORD *)(v4 + 204) = v14;
  *(_DWORD *)(v4 + 208) = v11;
  *(_DWORD *)(v4 + 192) = v8;
  v19 = v13;
  v15 = (const char *)(v4 + 56);
  sub_6D00C(
    v4 + 56,
    128,
    "ST: %02X T: %02d:%02d:%02d.%03ld D: %02d.%02d.%04d",
    v9,
    v10,
    v19,
    v14,
    v11 / 1000000,
    v22,
    v21,
    v20);
  *(_DWORD *)(v4 + 184) = (unsigned __int16)strlen((const char *)(v4 + 56));
  sub_6055C(v4 + 232);
  if ( (v27 & 0xC0) != 0 && ((v27 & 0xC0) != 0x40 || (*(_BYTE *)(v4 + 768) & 1) != 0) )
  {
    if ( sub_3A4E8((_DWORD *)v4) )
    {
      v16 = *(_DWORD *)(v4 + 236);
      v17 = (_DWORD *)(v4 + 224);
      *v17 = *v5;
      v17[1] = v16;
      sub_3A534(a2);
      return sub_42D0C(a2 + 16, v15);
    }
    else
    {
      return sub_39C88(a2, 6);
    }
  }
  else
  {
    result = sub_39C88(a2, 6);
    *(_BYTE *)(v4 + 40) = 3;
  }
  return result;
}
