char *__fastcall sub_42858(int a1)
{
  char *v2; // r5
  int v3; // r4
  unsigned __int16 v5; // [sp+10h] [bp-10h] BYREF
  unsigned __int8 v6; // [sp+14h] [bp-Ch]
  unsigned __int8 v7; // [sp+15h] [bp-Bh]
  unsigned __int8 v8; // [sp+16h] [bp-Ah]
  unsigned __int8 v9; // [sp+17h] [bp-9h]

  v2 = (char *)&lib_stringbuf + 128 * lib_nextbuf;
  v3 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v2, 0, 0x80u);
  lib_nextbuf = v3;
  if ( sub_66750(&v5, a1, 0) < 0 )
    sub_6C054(v2, 128, "ntpcal_ntp_to_date: %ld: range error", a1);
  else
    sub_6C054(v2, 128, "%04d%02d%02d%02d%02d", v5, v6, v7, v8, v9);
  return v2;
}
