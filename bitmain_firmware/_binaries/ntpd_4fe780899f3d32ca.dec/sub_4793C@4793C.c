__int16 *__fastcall sub_4793C(int a1, int a2)
{
  int v4; // r4
  int v5; // r2
  int v6; // r1
  int v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r3
  int v11; // lr
  int v12; // r2
  int v13; // r7
  int v14; // r1
  const char *v15; // r7
  _DWORD *v16; // r8
  int v17; // r1
  _DWORD *v18; // r4
  __int16 *result; // r0
  int v20; // [sp+4h] [bp-44h]
  int v21; // [sp+20h] [bp-28h] BYREF
  int v22; // [sp+24h] [bp-24h]
  int v23; // [sp+2Ch] [bp-1Ch]
  int v24; // [sp+30h] [bp-18h]
  int v25; // [sp+34h] [bp-14h]
  int v26; // [sp+38h] [bp-10h]
  int v27; // [sp+3Ch] [bp-Ch]
  int v28; // [sp+40h] [bp-8h]

  v4 = *(_DWORD *)(a2 + 84);
  if ( ioctl(fd, 0x20000u, &v21) < 0 )
    sub_64E00(3, "HOPF_P(%d): HOPF_CLOCK_GET_UTC: %m", a1);
  v5 = v23;
  v6 = v22;
  v7 = v21;
  ++*(_DWORD *)(v4 + 776);
  v8 = sub_6EC68(v7, v6, v5);
  v9 = v27;
  v10 = v28;
  *(_DWORD *)(v4 + 192) = v8;
  v11 = v24;
  v12 = (_DWORD)&unk_F4240 * v9;
  if ( (v10 & 0x20) != 0 )
    LOBYTE(v8) = 1;
  v13 = v25;
  v14 = v26;
  if ( (v10 & 0x20) != 0 )
    *(_BYTE *)(v4 + 40) = v8;
  else
    *(_BYTE *)(v4 + 40) = v10 & 0x20;
  *(_DWORD *)(v4 + 196) = v11;
  *(_DWORD *)(v4 + 200) = v13;
  *(_DWORD *)(v4 + 208) = v12;
  *(_DWORD *)(v4 + 204) = v14;
  v20 = v13;
  v15 = (const char *)(v4 + 56);
  v16 = (_DWORD *)(v4 + 232);
  sub_6C054(
    v4 + 56,
    128,
    "ST: %02X T: %02d:%02d:%02d.%03ld D: %02d.%02d.%04d",
    v10,
    v11,
    v20,
    v14,
    v12 / 1000000,
    v23,
    v22,
    v21);
  *(_DWORD *)(v4 + 184) = (unsigned __int16)strlen((const char *)(v4 + 56));
  sub_5F724(v4 + 232);
  if ( (v28 & 0xC0) != 0 && ((v28 & 0xC0) != 0x40 || (*(_BYTE *)(v4 + 768) & 1) != 0) )
  {
    if ( sub_39CF8((_DWORD *)v4) )
    {
      v17 = *(_DWORD *)(v4 + 236);
      v18 = (_DWORD *)(v4 + 224);
      *v18 = *v16;
      v18[1] = v17;
      sub_39D44(a2);
      return (__int16 *)sub_41F44(a2 + 16, v15);
    }
    else
    {
      return sub_394A0((__int16 *)a2, 6);
    }
  }
  else
  {
    result = sub_394A0((__int16 *)a2, 6);
    *(_BYTE *)(v4 + 40) = 3;
  }
  return result;
}
