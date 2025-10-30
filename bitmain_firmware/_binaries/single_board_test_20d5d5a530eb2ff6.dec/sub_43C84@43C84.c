int sub_43C84()
{
  int v0; // r5
  int v1; // r0
  int v2; // r4
  int result; // r0
  _DWORD *v4; // r8
  _DWORD *v5; // r11
  int v6; // t1
  int v7; // r4
  int v8; // r7
  int v9; // t1
  size_t v10; // r0
  char s[4]; // [sp+10h] [bp-7Ch] BYREF
  char v12[4]; // [sp+14h] [bp-78h] BYREF
  int v13; // [sp+18h] [bp-74h]
  int v14; // [sp+1Ch] [bp-70h]
  int v15; // [sp+20h] [bp-6Ch]
  char v16[48]; // [sp+24h] [bp-68h] BYREF
  _DWORD v17[14]; // [sp+54h] [bp-38h] BYREF

  v17[0] = dword_705354[0];
  v17[1] = dword_705358;
  v17[2] = unk_70535C;
  v17[3] = unk_705360;
  v17[4] = unk_705364;
  v17[5] = unk_705368;
  v17[6] = unk_70536C;
  v17[7] = unk_705370;
  v17[8] = unk_705374;
  v17[9] = unk_705378;
  v17[10] = unk_70537C;
  v17[11] = unk_705380;
  v17[12] = dword_705384;
  sub_1E938(v16, 0x30u);
  printf("%s ", v16);
  v0 = v17[0];
  printf("%s : bad asic list size:%d\n", "show_sweep_failed", v17[0]);
  snprintf(byte_6411D8, 0x100u, "bad asic list size:%d", v0);
  v1 = sub_3CC5C((int)byte_6411D8, v16);
  if ( !v0 )
    return sub_2146C("Sweep fail", "pls check", 0);
  v2 = 0;
  v13 = 0;
  *(_DWORD *)v12 = 0;
  v14 = 0;
  v15 = 0;
  sub_6FBF4(v1);
  result = sub_1F650(0, "BAD ASIC");
  if ( v0 > 0 )
  {
    v4 = v17;
    v5 = v17;
    do
    {
      sub_1E938(v16, 0x30u);
      printf("%s ", v16);
      v6 = v5[1];
      ++v5;
      printf("%s : bad asic list[%d]:%d\n", "show_sweep_failed", v2, v6);
      snprintf(byte_6412D8, 0x100u, "bad asic list[%d]:%d", v2++, v6);
      sub_3CC5C((int)byte_6412D8, v16);
    }
    while ( v0 != v2 );
    v7 = 0;
    v8 = 1;
    do
    {
      while ( 1 )
      {
        v9 = v4[1];
        ++v4;
        snprintf(s, 4u, "%d", v9 + 1);
        v10 = strlen(v12);
        *(_WORD *)stpcpy(&v12[v10], s) = 32;
        sub_1E938(v16, 0x30u);
        printf("%s ", v16);
        printf("%s : line:%d,id:%s\n", "show_sweep_failed", v8, s);
        snprintf(byte_6413D8, 0x100u, "line:%d,id:%s", v8, s);
        sub_3CC5C((int)byte_6413D8, v16);
        result = v8;
        if ( (v7 & 0xFFFFFFFB) == 3 || v0 - 1 == v7 )
          break;
        if ( v0 == ++v7 )
          return result;
      }
      ++v7;
      ++v8;
      result = sub_1F650(result, v12);
      *(_DWORD *)v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
    }
    while ( v0 != v7 );
  }
  return result;
}
