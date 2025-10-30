int __fastcall sub_1C9E0(int a1, unsigned __int16 *a2)
{
  int v4; // r9
  unsigned int v5; // r0
  unsigned int v6; // r5
  int v7; // r6
  unsigned int v8; // r7
  unsigned __int16 *v9; // r11
  int v10; // r4
  char v11; // r0
  char *v12; // r1
  bool v13; // zf
  char v14; // r3
  unsigned int v15; // t1
  int result; // r0
  int v17; // r3
  int v18; // r3
  int v19; // r1
  void (__fastcall *v20)(int, char *, int *, _BYTE *); // r4
  int v21; // r4
  int v22; // r3
  int v23; // [sp+8h] [bp-98Ch] BYREF
  _BYTE v24[4]; // [sp+Ch] [bp-988h] BYREF
  _BYTE s[128]; // [sp+10h] [bp-984h] BYREF
  char v26[256]; // [sp+90h] [bp-904h] BYREF
  char v27[2052]; // [sp+190h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  memset(v26, 0, sizeof(v26));
  v23 = 128;
  if ( !dword_B3CC0 || !*(_BYTE *)(dword_B3CC0 + 28) )
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(v27, 0x800u, "eeprom is not init, chain = %d\n", a1);
      sub_3B6AC(4, v27, 0, v17);
      return -1;
    }
    return -1;
  }
  if ( !a2 )
    return 0;
  memset(s, 0, sizeof(s));
  v4 = *(_DWORD *)(dword_B3CC0 + 4 * a1);
  (*(void (__fastcall **)(int, _DWORD))(v4 + 248))(v4, *a2);
  (*(void (__fastcall **)(int, _DWORD))(v4 + 256))(v4, a2[1]);
  (*(void (__fastcall **)(int, _DWORD))(v4 + 264))(v4, *((unsigned __int8 *)a2 + 4));
  v5 = *((_DWORD *)a2 + 2);
  v6 = a2[1];
  if ( v6 > v5 )
  {
LABEL_13:
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(v27, 0x800u, "freq value[%d] less than freq base[%d] for chain %d.\n", v5, v6, a1);
      goto LABEL_22;
    }
    return -1;
  }
  v7 = *((unsigned __int8 *)a2 + 4);
  v8 = v6 + 16 * v7;
  if ( v5 >= v8 )
  {
LABEL_18:
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(v27, 0x800u, "freq value[%d] greater than freq max[%d] for chain %d.\n", v5, v6 + 16 * v7, a1);
LABEL_22:
      sub_3B6AC(3, v27, 0, v18);
      return -1;
    }
    return -1;
  }
  v9 = a2 + 4;
  v10 = 0;
  while ( 1 )
  {
    v11 = sub_8F588(v5 - v6, v7);
    v12 = &v27[(v10 >> 1) + 2048];
    v13 = (v10++ & 1) == 0;
    v14 = 16 * v11;
    if ( v13 )
      v14 = v11 & 0xF;
    *(v12 - 2432) |= v14;
    if ( v10 == 256 )
      break;
    v15 = *((_DWORD *)v9 + 1);
    v9 += 2;
    v5 = v15;
    if ( v15 < v6 )
      goto LABEL_13;
    if ( v5 >= v8 )
      goto LABEL_18;
  }
  (*(void (__fastcall **)(int, _BYTE *, int *))(v4 + 272))(v4, s, &v23);
  v19 = *((unsigned __int8 *)a2 + 1032);
  if ( *((_BYTE *)a2 + 1032) )
    v19 = 1;
  (*(void (__fastcall **)(int, int))(v4 + 280))(v4, v19);
  v20 = *(void (__fastcall **)(int, char *, int *, _BYTE *))(v4 + 20);
  v23 = 256;
  v20(v4, v26, &v23, v24);
  result = sub_5B398(a1, v24[0], v26, v23);
  v21 = result;
  if ( !result )
    return 0;
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(v27, 0x800u, "Write sweep result fail for chain %d.\n", a1);
    sub_3B6AC(3, v27, 0, v22);
    return v21;
  }
  return result;
}
