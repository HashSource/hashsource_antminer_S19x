char *__fastcall sub_2CD30(int a1)
{
  char *v2; // r5
  int v3; // r4
  int v4; // r3
  unsigned __int16 v6; // [sp+18h] [bp-10h] BYREF
  unsigned __int8 v7; // [sp+1Ch] [bp-Ch]
  unsigned __int8 v8; // [sp+1Dh] [bp-Bh]
  unsigned __int8 v9; // [sp+1Eh] [bp-Ah]
  unsigned __int8 v10; // [sp+1Fh] [bp-9h]
  unsigned __int8 v11; // [sp+20h] [bp-8h]

  v2 = (char *)&lib_stringbuf + 128 * lib_nextbuf;
  v3 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v2, 0, 0x80u);
  v4 = *(_DWORD *)(a1 + 4);
  lib_nextbuf = v3;
  if ( v4 < 0 || sub_666D8(&v6, a1) < 0 )
    sub_6C054(v2, 128, "%s", "9999-12-31T23:59:59Z");
  else
    sub_6C054(v2, 128, "%04d-%02d-%02dT%02d:%02d:%02dZ", v6, v7, v8, v9, v10, v11);
  return v2;
}
