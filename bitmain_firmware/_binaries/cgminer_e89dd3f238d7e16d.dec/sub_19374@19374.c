int __fastcall sub_19374(int a1, int a2)
{
  void *v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  char v12[16]; // [sp+Ch] [bp-860h] BYREF
  char s[64]; // [sp+80Ch] [bp-60h] BYREF
  int v14; // [sp+84Ch] [bp-20h]
  int v15; // [sp+850h] [bp-1Ch]
  int v16; // [sp+854h] [bp-18h]
  int v17; // [sp+858h] [bp-14h]
  int v18; // [sp+85Ch] [bp-10h]
  int v19; // [sp+860h] [bp-Ch]
  int v20; // [sp+864h] [bp-8h]

  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = a2;
  memset(s, 0, sizeof(s));
  if ( v14 && a1 )
  {
    v3 = sub_1524C(a1, 1, 22, *(const char **)(v14 + 8));
    v16 = sub_65D18(v3);
    v15 = sub_651D4(v16);
    v4 = sub_66A38("1.0.0");
    sub_65420(v15, "BMMiner", v4);
    v5 = sub_66A38("3.1");
    sub_65420(v15, "API", v5);
    v6 = sub_66A38(byte_869B0);
    sub_65420(v15, "Miner", v6);
    v7 = sub_66A38(byte_86AB0);
    sub_65420(v15, "CompileTime", v7);
    snprintf(s, 0x40u, "%s", byte_86BB0);
    if ( byte_94354 )
      snprintf(s, 0x40u, "%s", &byte_94354);
    v8 = sub_66A38(s);
    sub_65420(v15, "Type", v8);
    sub_661B4(v16, v15);
    sub_65420(a1, "VERSION", v16);
    v9 = sub_66F54(1, 0);
    sub_65420(a1, "id", v9);
    return v20;
  }
  else
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v12, 0x800u, "%s: input bad api param\n", "get_version_old");
      sub_1DB6C(3, v12, 0);
    }
    return -2147483646;
  }
}
