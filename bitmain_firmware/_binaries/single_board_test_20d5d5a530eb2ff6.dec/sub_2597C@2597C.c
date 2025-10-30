int sub_2597C()
{
  unsigned int v0; // r5
  unsigned int v1; // r0
  unsigned int v2; // r3
  char *v3; // r2
  int v4; // t1
  char *v5; // r4
  char *v6; // r4
  int *v7; // r6
  char *v8; // r5
  char *v9; // r0
  int v10; // t1
  char s[4]; // [sp+4h] [bp-58h] BYREF
  int v13; // [sp+8h] [bp-54h]
  int v14; // [sp+Ch] [bp-50h]
  int v15; // [sp+10h] [bp-4Ch]
  char v16; // [sp+14h] [bp-48h] BYREF
  char v17[52]; // [sp+28h] [bp-34h] BYREF

  v13 = 0;
  *(_DWORD *)s = 0;
  v14 = 0;
  v15 = 0;
  sprintf(s, "ASIC: NG %d %d", dword_5FE780, dword_6090CC);
  sub_1F650(0, s);
  sub_1E938(v17, 0x30u);
  printf("%s ", v17);
  printf("%s : ASIC:   NG\n\n", "show_ng_asics");
  strcpy(byte_6090D0, "ASIC:   NG\n");
  sub_3CC5C(byte_6090D0, v17);
  v0 = *(_DWORD *)(dword_223680 + 64);
  if ( v0 )
  {
    v1 = 0;
    v2 = 1;
    v3 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264239;
    do
    {
      v4 = (unsigned __int8)*++v3;
      v5 = &v17[4 * v1 + 48];
      if ( !v4 )
      {
        ++v1;
        *((_DWORD *)v5 - 17) = v2;
        if ( v1 > 4 )
        {
          *(_DWORD *)s = 0;
          v13 = 0;
          v14 = 0;
          v15 = 0;
          goto LABEL_7;
        }
      }
      ++v2;
    }
    while ( v0 >= v2 );
    *(_DWORD *)s = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ( !v1 )
      goto LABEL_9;
LABEL_7:
    v6 = &s[3 * v1];
    v7 = (int *)&v16;
    v8 = s;
    do
    {
      v9 = v8;
      v10 = *v7++;
      v8 += 3;
      sprintf(v9, " %02d", v10);
    }
    while ( v6 != v8 );
  }
  else
  {
    *(_DWORD *)s = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
  }
LABEL_9:
  sub_1F650(1, s);
  sub_1E938(v17, 0x30u);
  printf("%s ", v17);
  printf("%s : ASIC NG ID:%s\n\n", "show_ng_asics", s);
  snprintf(byte_6091D0, 0x100u, "ASIC NG ID:%s\n", s);
  return sub_3CC5C(byte_6091D0, v17);
}
